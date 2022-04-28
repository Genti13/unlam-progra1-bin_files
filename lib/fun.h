#ifndef FUN_H_INCLUDED
#define FUN_H_INCLUDED

#include <stdio.h>
#include "tipos.h"

int crearArchivo(const tpersona * personas, const char * archivo, const unsigned int elementos);
int mostrarArchivo(const char * archivo);
void mostrarPersona(const tpersona * persona);

int buscarPorDNI(const char * archivo, tpersona * personaABuscar);


#endif // FUN_H_INCLUDED
