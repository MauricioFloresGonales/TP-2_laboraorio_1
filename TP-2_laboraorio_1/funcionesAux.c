#include <stdio.h>
#include <stdlib.h>
#include "funcionesAux.h"
#include "Inputs.h"

void nombre(char* input,char message[],char eMessage[],char eNumMessage[], int lowLimit, int hiLimit)
{
    int validador;

    do{
        validador = getString(&input,message,eMessage,eNumMessage,lowLimit,hiLimit);

    }while(validador == -1);

}

//----------------------------------------------------------------------------------------------------------------------------------------

void ingresarSalario(float* valor,char message[],char eMessage[], float lowLimit, float hiLimit)
{
    int validador;

    do{
        validador = getFloat(&valor,message,eMessage,lowLimit,hiLimit);

    }while(validador == -1);

}

//----------------------------------------------------------------------------------------------------------------------------------------

void numero(int* valor,char message[],char eMessage[],int lowLimit, int hiLimit)
{
    int validador;

    do{
       validador = getInt(&valor,message,eMessage,lowLimit,hiLimit);
    }while(validador == -1);
}

//----------------------------------------------------------------------------------------------------------------------------------------


