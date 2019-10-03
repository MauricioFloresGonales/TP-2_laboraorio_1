#include <stdio.h>
#include <stdlib.h>

#include "Inputs.h"
#include "ArrayEmployees.h"
#include "funcionesAux.h"

#define TM 4
#define TS 3

int main()
{
    eEmployee empleados[4];
    int funcionamiento;
    int id;

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
            harcodeo(empleados,4);
            funcionamiento = printEmployees(empleados,4);
            funcionamiento = agragarEmpleado(empleados,4);

            break;
        case 2:
            printf("Ingrese un Id: ");
            scanf("%d",&id)

            index = findEmployeeById(empleados,4,id);
            void mostrarUnEmpleado(eEmployee* list, int index)

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
