#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ArrayEmployees.h"
#include "sectores.h"


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
            lista[index].id = autoId(lista,len);
            nombre(lista[index].name,"Ingrese el nombre: ","No se puedo,Intente de nuevo","Solo se permiten letras",0,51);
            nombre(lista[index].lastName,"Ingrese el Apellido: ","No se puedo,Intente de nuevo","Solo se permiten letras",0,51);
            ingresarSalario(lista[index].salary,"Ingrese el suueldo: ","Solo puede ingresar numeros. ",0,999999);
            numero(lista[index].sector,"Ingrese el Sector:");

        }





    }else{
        retorno = -1;
        }





    return retorno;
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
        }
    }
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
        if(flag == -1)
        {
            mayor = lista[i].id;
            flag = 0;

        }else if(lista[i].id>mayor)
            {
                mayor = lista[i].id;
            }
    }
    return mayor;
}

//----------------------------------------------------------------------------------------------------------------------------------------

void nombre(char* input,char message[],char eMessage[],char eNumMessage[], int lowLimit, int hiLimit)
{
    int validador;

    while(validador == -1)
    {
        validador = getString(&input,message,eMessage,eNumMessage,lowLimit,hiLimit);
    }

}

void ingresarSalario(float* valor,char message[],char eMessage[], float lowLimit, float hiLimit)
{
    int validador;

    while(validador == -1)
    {
        validador = getFloat(&valor,message,eMessage,lowLimit,hiLimit);
    }

}

void numero(int* valor,char message[],char eMessage[],int lowLimit, int hiLimit)
{
    int validador;

    while(validador == -1)
    {
       validador = getInt(&valor,message,eMessage,lowLimit,hiLimit);
    }
}

