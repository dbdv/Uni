#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
#define MAX 15

typedef struct{
    char elementos[MAX];
    int top;
}filas;

/*INICIALIZADOR*/
void init(filas *f){
    (*f).top=-1;
}

/*FUNCIONES*/
void cargar(filas *f, char elem){
    (*f).elementos[++(*f).top] = elem;
}

void sacar(filas *f){
    int i;
    for(i=0; i<(*f).top-1, i++){
        (*f).elementos[i] = (*f).elementos[i+1];
    }
    (*f).top --;
}

char verPrimer(filas *f){
    return (*f).elementos[0];
}

#endif // FILA_H_INCLUDED
