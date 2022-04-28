#include "fun.h"
#include "tipos.h"
#include <string.h>

int crearArchivo(const tpersona * personas, const char * archivo, const unsigned int elementos)
{
    FILE * pf = fopen(archivo, "wb");

    if(!pf)
    {
        return 0;
    }

    fwrite(personas, sizeof(tpersona),elementos,pf);

    fclose(pf);

    return 1;
}

int mostrarArchivo(const char * archivo)
{
    tpersona persona;
    FILE * pf = fopen(archivo, "rb");

    if(!pf)
    {
        return 0;
    }

    fread(&persona,sizeof(tpersona),1,pf);

    while(!feof(pf))
    {
        mostrarPersona(&persona);
        fread(&persona,sizeof(tpersona),1,pf);
    }

    fclose(pf);

    return 1;
}

void mostrarPersona(const tpersona * persona)
{
    printf("%08d %-*.*s %d %02d/%02d/%04d\n",
           persona->dni,
           (int)sizeof(persona->nomyape),
           (int)sizeof(persona->nomyape),
           persona->nomyape,
           persona->edad,
           persona->nacimiento.dia,
           persona->nacimiento.mes,
           persona->nacimiento.anio);
}

int buscarPorDNI(const char * archivo, tpersona * personaABuscar)
{
    tpersona persona;
    FILE * pf = fopen(archivo, "rb");

    if(!pf)
    {
        return 0;
    }

    fread(&persona, sizeof(tpersona),1,pf);
    while(!feof(pf))
    {
        if(persona.dni == personaABuscar->dni)
        {
            personaABuscar->edad = persona.edad;
            personaABuscar->nacimiento.dia = persona.nacimiento.dia;
            personaABuscar->nacimiento.mes = persona.nacimiento.mes;
            personaABuscar->nacimiento.anio = persona.nacimiento.anio;
            strcpy(personaABuscar->nomyape,persona.nomyape);

        }

        fread(&persona, sizeof(tpersona),1,pf);
    }
    fclose(pf);
    return 1;
}
