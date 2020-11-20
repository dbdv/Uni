#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#define MAX 15
typedef struct{
    int elementos[MAX];
    int top;
}pila;

/*INICIALIZADOR*/
void init(pila* p){
    (*p).top = -1;
}

/*FUNCIONES*/
int isFull(pila p){
    if(p.top == MAX-1)
        return 1;
    else
        return 0;
}

int isEmpy(pila p){
    if(p.top == -1)
        return 1;
    else
        return 0;
}

/*CARGAR/SACAR ELEMENTOS A LA PILA*/
void poner(pila *p, int elem){
    (*p).elementos[++(*p).top] = elem;
}

void sacar(pila *p){
    (*p).top--;
}

/*MOSTRAR ELEMENTOS DE LA PILA*/
int verUltimo(pila p){
    return p.elementos[p.top];
}

#endif // PILA_H_INCLUDED
