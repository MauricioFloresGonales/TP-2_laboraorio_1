#include <stdio.h>
#include <stdlib.h>

#include "Inputs.h"
#include "ArrayEmployees.h"
#include "funcionesAux.h"

#define TM 4
#define TS 3

int main()
{
    /*char name[51];

    nombre(name,"lll","eeee","rrrr",0,51);*/


    eEmployee empleado[TM];

    int respuesta;


    //harcodeo(empleado,LEN);// ------ EMPLEADOS HARCOR
    respuesta = initEmployees(empleado,TM);// ---- TODOS EN VACIO

    printf("%d\n",respuesta);

    respuesta = agragarEmpleado(empleado,TM);
    if(respuesta==0)
    {
        printf("se pudo");
    }else{
        printf("no se pudo");
    }
    return 0;
}
