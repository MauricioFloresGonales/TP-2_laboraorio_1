#include <stdio.h>
#include <stdlib.h>

#include "Inputs.h"
#include "ArrayEmployees.h"
#include "funcionesAux.h"

#define TM 4
#define TS 3

int main()
{
    int opcion;
    do{
        printf("1- ALTA:\n");
        printf("2- MODIFICAR:\n");
        printf("3- BAJA:\n");
        printf("4- INFORMAR:\n");
        printf("5- SALIR:\n");
        printf("Elija una opcion:\n");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            int agragarEmpleado(eEmployee* lista,int len);

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        default:
            printf("SALIR\n");
        }

    system("pause");
    system("cls");

    }while(opcion != 5);

    return 0;
}
