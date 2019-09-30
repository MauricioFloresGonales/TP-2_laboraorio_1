#include <stdio.h>
#include <stdlib.h>
#include "Inputs.h"
#include "ArrayEmployees.h"
#include "sectores.h"
#define TM 4
#define TS 3
int main()
{
    eEmployee empleado[TM];
    eSector sectores[TS];
    int respuesta;
    int i;

    /*harcodeo(empleado,LEN);// ------ EMPLEADOS HARCOR
    //respuesta = initEmployees(empleado,LEN);// ---- TODOS EN VACIO

    respuesta = encontrarMayor(empleado, LEN);

    printf("%d\n",respuesta);

    i = autoId(empleado, LEN);

    printf("%d",i);*/

    listaSectores(sectores,3);

    return 0;
}
