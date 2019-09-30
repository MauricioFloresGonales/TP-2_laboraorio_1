#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ArrayEmployees.h"
#include "sectores.h"

void listaSectores(eSector areas[],int indice)
{
    int opcion;
    int pregunta;

    do{
        numero(&opcion,"1- Limpieza\n2- Seguridad\n3- Gerente\n4- Otro\n5- Salir","No ingreso ninnguna opcion",1,5);

        switch(opcion)
        {
        case 1:
            strcpy(areas[indice].nombreSec,"Limpieza");
            pregunta = confirmar();

            break;
        case 2:
            strcpy(areas[indice].nombreSec,"Seguridad");
            pregunta = confirmar();
            break;
        case 3:
            strcpy(areas[indice].nombreSec,"Gerente");
            pregunta = confirmar();
        default:
            printf("ingrese nuevo Sector");
            fflush(stdin);
            scanf("%s",areas[indice].nombreSec);
            pregunta = confirmar();
        }

    }while(pregunta != 0)


}
