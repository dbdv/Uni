#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

typedef struct{
    int tipo;
    long num;
}documento;
typedef struct{
    char nombre[15], apellido[15], mail[15];
    documento dni;
}person;

/*INICIALIZADOR*/
void init(person* p){
    (*p).dni.tipo = 1;
}

/*CARGAR*/
void cargar_nom(person *p, char nombre[]){
    strcpy((*p).nombre, nombre);
}

void cargar_ape(person *p, char ape[]){
    strcpy((*p).apellido, ape);
}

void cargar_tipodoc(person *p, int tipo){
    (*p).dni.tipo = tipo;
}

void cargar_dni(person *p, long dni){
    (*p).dni.num = dni;
}

void cargar_mail(person *p, char mail[]){
    strcpy((*p).mail, mail);
}

/*MODIFICAR*/
void modificar_nom(person *p, char nombre[]){
    strcpy((*p).nombre, nombre);
}

void modificar_ape(person *p, char ape[]){
    strcpy((*p).apellido, ape);
}

void modificar_dni(person *p, long dni){
    (*p).dni.num = dni;
}

void modificar_mail(person *p, char mail[]){
    strcpy((*p).mail, mail);
}

/*MOSTRAR*/

documento mostrar_dni(person p){
    return p.dni;
}

char* mostrar_nom(person p){
    return (char*)p.nombre;
}

char* mostrar_ape(person p){
    return p.apellido;
}

char* mostrar_mail(person p){
    return p.mail;
}

#endif // PERSONA_H_INCLUDED
