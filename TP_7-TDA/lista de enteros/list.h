#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

typedef struct nodo{
    int vipd;
    struct nodo *next;
}nodo;

//typedef struct nodo nodo;

typedef struct{
    nodo *acc, *cur, *aux;
}list_int;

void init(list_int *ls){
    (*ls).acc = NULL;
    (*ls).aux = NULL;
    (*ls).cur = NULL;
}

void reset(list_int *ls){
    ls->cur = ls->acc;
    ls->aux = ls->acc;
}

void forwardd(list_int *ls){
    ls->aux = ls->cur;
    ls->cur = ls->cur->next;
}

int isOos(list_int ls){
    if(ls.cur->next == NULL)
        return 1;
    else
        return 0;
}

int copyy(list_int ls){
    return ls.cur->vipd;
}

void insertt(list_int *ls, int dato){
    nodo *nuevo;
    nuevo = (nodo*)malloc(sizeof(nodo));
    (*nuevo).vipd = dato;
    if(ls->cur == ls->acc){
        nuevo->next = ls->cur;
        ls->acc = ls->cur = ls->aux = nuevo;
    }else{
        ls->aux->next = nuevo;
        nuevo->next = ls->cur;
        ls->cur = nuevo;
    }
}

void suppres(list_int *ls){
    if(ls->acc == ls->cur == ls->aux)
        ls->acc = ls->cur = ls->aux = NULL;
    else{
        ls->cur = ls->cur->next;
        free((void*)ls->aux->next);
        ls->aux->next = ls->cur;
    }
}

int isEmpy(list_int ls){
    if(ls.acc == NULL)
        return 1;
    else
        return 0;
}

int isFull(){
    nodo *nuevo;
    if(nuevo=(nodo*)malloc(sizeof(nodo)) == NULL)
        return 1;
    else{
        free((void*) nuevo);
        return 0;
    }
}

#endif // LIST_H_INCLUDED
