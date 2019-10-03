#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ArrayEmployees.h"
#include "funcionesAux.h"


void harcodeo(eEmployee lista[],int len)
{
    int i;

    char name[][51]={"ana","juan","pepe","laura","mauricio"};
    char lastName[][51] = {"catunta","grillo","argento","cordoba","gonzales"};
    float salary[] = {100,200,300,400,500};
    int sector[] = {1,2,3,1,2};
    int isEmpty[] = {0,0,0,0,0};

    for(i=0;i<len;i++)
    {
        lista[i].id = autoId(lista,len);
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
    int id;
    int idAnterior;

    idAnterior = encontrarMayor(lista,len);

    id = idAnterior+1;

    return id;
}

//----------------------------------------------------------------------------------------------------------------------------------------

int encontrarMayor(eEmployee lista[], int len)
{
    int i;
    int mayor;
    int flag = -1;

    for(i=0;i<len;i++)
    {
        if(flag == 0 && lista[i].id>=mayor)
        {
            mayor = lista[i].id;

        }else{
            mayor = 1;
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

int agragarEmpleado(eEmployee* lista,int len)
{
    int retorno;
    int index;

    index = espacioLibre(lista,len);

    if(index>-1)
    {
        retorno = addEmployee(lista,len,lista[index].id,lista[index].name,lista[index].lastName,lista[index].salary,lista[index].sector);
        lista[index].isEmpty = NOT_EMPTY;
    }

    return retorno;
}



//----------------------------------------------------------------------------------------------------------------------------------------

int addEmployee(eEmployee lista[], int len, int id, char name[],char lastName[],float salary,int sector)
{
    int retorno;

    if(lista!=NULL && (espacioLibre(lista,len))>-1)
    {
            id = autoId(lista,len);
            nombre(name,"Ingrese el nombre: ","No se puedo,Intente de nuevo","Solo se permiten letras",0,51);
            nombre(lastName,"Ingrese el Apellido: ","No se puedo,Intente de nuevo","Solo se permiten letras",0,51);
            ingresarSalario(&salary,"Ingrese el salario: ","Error,el salario [1-10000]",1,10000);
            numero(&sector,"Ingrese el Sector:","Error,Ingreso un sector no valido",1,5);

            retorno = 0;

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
    int retorno;

    if(list!=NULL || len<0)
    {
        printf("Ingrese una opcion:\n[1] indicate UP - [0] indicate DOWN");
        scanf("%d",&order);
       do{
            switch(order)
            {
            case 1:
                ordenarVectorUp(list,len);
                retorno = 0;
                break;
            case 2:
                ordenarVectorDown(list,len);
                retorno = 0;
                break;
            default:
                printf("No eligio ninguna opcion.");
            }

         }while(order != 2);
    }else{
        retorno = -1;
    }
   return retorno;
}

//----------------------------------------------------------------------------------------------------------------------------------------

void ordenarVectorUp(eEmployee* list, int len)
{
    int i;
    int j;
    eEmployee aux;

    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(list[i].id>list[j].id)
            {
                aux.id = list[i].id;
                list[i].id = list[j].id;
                list[j].id = aux.id;
            }
        }
    }
}

//----------------------------------------------------------------------------------------------------------------------------------------

void ordenarVectorDown(eEmployee* list, int len)
{
    int i;
    int j;
    eEmployee aux;

    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(list[i].id<list[j].id)
            {
                aux.id = list[i].id;
                list[i].id = list[j].id;
                list[j].id = aux.id;
            }
        }
    }
}

//----------------------------------------------------------------------------------------------------------------------------------------

int printEmployees(eEmployee* list, int length)
{
    int retorno;
    int i;

    if(list!=NULL || length<0)
    {
        for(i=0;i<length;i++)
        {
            mostrarUnEmpleado(list,i);
        }
        retorno = 0;
    }else{
        retorno = -1;
    }

    return retorno;
}

//----------------------------------------------------------------------------------------------------------------------------------------

void mostrarUnEmpleado(eEmployee* list, int index)
{
    if(list[index].isEmpty == NOT_EMPTY)
    {
        printf("%d\t",list[index].id);
        printf("%s\t",list[index].name);
        printf("%s\t",list[index].lastName);
        printf("%f\t",list[index].salary);
        printf("%d\n",list[index].sector);
    }
}
