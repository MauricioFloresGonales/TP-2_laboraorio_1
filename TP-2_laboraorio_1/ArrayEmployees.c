#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ArrayEmployees.h"
#include "funcionesAux.h"


void harcodeo(eEmployee lista[],int len)
{
    int i;
    int id[] ={111,222,333,444,555};
    char name[][51]={"ana","juan","pepe","laura","mauricio"};
    char lastName[][51] = {"catunta","grillo","argento","cordoba","gonzales"};
    float salary[] = {100,200,300,400,500};
    //int sector[] = {"limpieza","seguidad","gerente","limpieza","gerente"};
    int sector[] = {1,2,3,1,2};
    int isEmpty[] = {1,0,0,0,0};

    for(i=0;i<len;i++)
    {
        lista[i].id = id[i];
        strcpy(lista[i].name,name[i]);
        strcpy(lista[i].lastName,lastName[i]);
        lista[i].salary = salary[i];
        lista[i].sector = sector[i];
        lista[i].isEmpty = isEmpty[i];
    }
}

//----------------------------------------------------------------------------------------------------------------------------------------

int espacioLibre(eEmployee lista[], int len)
{
    int index;
    int i;
    for(i=0;i<len;i++)
    {
        if(lista[i].isEmpty == EMPTY)
        {
            index = i;
            break;

        }else{

            index = -1;
        }//if
    }//for
    return index;
}

//----------------------------------------------------------------------------------------------------------------------------------------

int autoId(eEmployee lista[], int len)
{
    int retorno;
    int idAnterior;

    idAnterior = encontrarMayor(lista,len);

    retorno = idAnterior + 1 ;

    return retorno;
}

//----------------------------------------------------------------------------------------------------------------------------------------

int encontrarMayor(eEmployee lista[], int len)
{
    int i;
    int mayor;
    int flag = -1;

    for(i=0;i<len;i++)
    {
        if(flag == 0 && lista[i].id>mayor)
        {
            mayor = lista[i].id;

        }else{
            mayor = lista[i].id;
            flag = 0;
        }//if
    }//for
    return mayor;
}

//----------------------------------------------------------------------------------------------------------------------------------------

int initEmployees(eEmployee list[], int len)
{
    int i;
    int retorno;

    if(list!=NULL && len>0)
    {
        for(i=0;i<len;i++)
        {
            list[i].isEmpty = EMPTY;
        }
        retorno = 0;
    }else{
        retorno = -1;
    }

    return retorno;
}

//----------------------------------------------------------------------------------------------------------------------------------------

int addEmployee(eEmployee lista[], int len, int id, char name[],char lastName[],float salary,int sector)
{
    int retorno;
    int index;

    if(lista!=NULL && (espacioLibre(lista,len))== -1)
    {
        index = espacioLibre(lista,len);
        if(index != -1)
        {
            nombre(name,"Ingrese el nombre: ","No se puedo,Intente de nuevo","Solo se permiten letras",0,51);
            nombre(lastName,"Ingrese el Apellido: ","No se puedo,Intente de nuevo","Solo se permiten letras",0,51);
            ingresarSalario(&salary,"Ingrese el salario: ","Error,el salario [0-1000000]",0,1000000);
            numero(&sector,"Ingrese el Sector:","Error,Ingreso un sector no valido",1,5);

            lista[index].id = autoId(lista,len);
            strcpy(lista[index].name,name);
            strcpy(lista[index].lastName,lastName);
            lista[index].salary = salary;
            lista[index].sector = sector;
            lista[index].isEmpty = EMPTY;
        }
    }else{
        retorno = -1;
        printf("No hay mas espacio libre\n");
        }

    return retorno;
}

//----------------------------------------------------------------------------------------------------------------------------------------

int findEmployeeById(eEmployee* list, int len,int id)
{
    int index;
    int i;

    if(list!=NULL || len<0)
    {
        for(i=0;i<len;i++)
        {
            if(list[i].isEmpty == NOT_EMPTY && list[i].id == id)
            {
                index = i;
                break;

            }else{
                index = -1;
            }//if2
        }//for
    }else{
        index = -1;
    }//if1

    return index;
}

//----------------------------------------------------------------------------------------------------------------------------------------

int removeEmployee(eEmployee* list, int len, int id)
{
    int retorno;
    int i;

    if(list!=NULL || len<0)
    {
        for(i=0;i<len;i++)
        {
            if(list[i].isEmpty == NOT_EMPTY && list[i].id == id)
            {
                list[i].isEmpty = EMPTY;
                retorno = 0;
            }else{
                retorno = -1;
            }//if2
        }//for

    }else{
        retorno = -1;
    }//if1

    return retorno;
}

//----------------------------------------------------------------------------------------------------------------------------------------

int sortEmployees(eEmployee* list, int len, int order)
{
    printf("Ingrese una opcion");
    scanf("%d",&order);
   do{
        switch(order)
        {
        case 1:
            ordenarVectorUp(list,len);
            break;
        case 2:
            ordenarVectorDown(list,len);
            break;
        default:
            printf("No eligio una opcion correcta.");
        }

   }while(order != 2);
}
