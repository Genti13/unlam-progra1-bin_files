#include <stdio.h>
#include <stdlib.h>

#include "lib/tipos.h"
#include "lib/archivos.h"
#include "lib/fun.h"


int main()
{
    tpersona personas[] =
    {
        {40733281, "Alan Gentile", 24, {13,11,1997}},
        {12312345, "El Genti", 20, {12,11,1997}},
        {98765431, "Nombre Apellido", 33, {15,12,2020}}
    };

    tpersona personaABuscar;

//    crearArchivo(personas, NOMBRE_DEL_ARCHIVO, sizeof(personas)/sizeof(tpersona));
//
//    mostrarArchivo(NOMBRE_DEL_ARCHIVO);

    personaABuscar.dni = 12312345;

    buscarPorDNI(NOMBRE_DEL_ARCHIVO, &personaABuscar);
    mostrarPersona(&personaABuscar);

    return 0;
}
