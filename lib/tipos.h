#ifndef TIPOS_H_INCLUDED
#define TIPOS_H_INCLUDED

typedef struct
{
    unsigned int dia;
    unsigned int mes;
    unsigned int anio;
}tfecha;

typedef struct
{
    unsigned int dni;
    char nomyape[36];
    unsigned int edad;
    tfecha nacimiento;

}tpersona;

#endif // TIPOS_H_INCLUDED
