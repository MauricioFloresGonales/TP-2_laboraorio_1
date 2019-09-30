#include <stdio.h>
#include <stdlib.h>
#include "funcionesAux.h"

void nombre(char* input,char message[],char eMessage[],char eNumMessage[], int lowLimit, int hiLimit)
{
    int validador;

    while(validador == -1)
    {
        validador = getString(&input,message,eMessage,eNumMessage,lowLimit,hiLimit);
    }

}

//----------------------------------------------------------------------------------------------------------------------------------------

void ingresarSalario(float* valor,char message[],char eMessage[], float lowLimit, float hiLimit)
{
    int validador;

    while(validador == -1)
    {
        validador = getFloat(&valor,message,eMessage,lowLimit,hiLimit);
    }

}

//----------------------------------------------------------------------------------------------------------------------------------------

void numero(int* valor,char message[],char eMessage[],int lowLimit, int hiLimit)
{
    int validador;

    while(validador == -1)
    {
       validador = getInt(&valor,message,eMessage,lowLimit,hiLimit);
    }
}

//----------------------------------------------------------------------------------------------------------------------------------------

void ordenarVectorUp(int vector[],int tam)
{
    int i;
    int j;
    int aux;

    for(i=0;i<tam-1;i++)
    {
        for(j=i+1;j<tam;j++)
        {
            if(vector[i]>vector[j])
            {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }
}

//----------------------------------------------------------------------------------------------------------------------------------------

void ordenarVectorDown(int vector[],int tam)
{
    int i;
    int j;
    int aux;

    for(i=0;i<tam-1;i++)
    {
        for(j=i+1;j<tam;j++)
        {
            if(vector[i]<vector[j])
            {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }
}
