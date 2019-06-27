#include "tstack.h"

int isNotEmpty(tstack *p)
{
    return p!=NULL;
}

void push(tstack **s, char data)
{
    tstack *auxiliar;
    auxiliar=malloc(sizeof(tstack));
    auxiliar->data=data;
    auxiliar->next=*s;
    *s=auxiliar;
}

void pop(tstack **s, char *data)
{
    tstack *aux;

    if(*s!=NULL)
    {
        *data=(*s)->data;
        aux=*s;
        *s=aux->next;
        free(aux);
    }
    else
        printf("pila vacia");
}

void show(tstack *s)
{
    tstack *aux;
    char data;
    aux=s;
    while(isNotEmpty(s))
    {
        pop(&aux,&data);
        printf("%c\n",data);
        ///s = s->next;
    }
}
void show_recursive(tstack *s)
{
    char data;
    
    if(isNotEmpty(s))
    {
        pop(&s,&data);
        show_recursive(s)
        printf("%c",data);
    }
}    
    
    
        
       
    
