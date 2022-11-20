#include <stdio.h>

int main(){
    int a = 5;
    float b = 2.5;
    int *aPtr = &a;
    int *Ptr = NULL;
    float *bPtr = &b;
    printf("Il valore di a è: %d\n", a);
    printf("Il valore di aPtr (indirizzo di a) è: %p\n", aPtr);
    printf("Il contenuto dell'indirizzo puntato da aPtr (a) è: %d\n", *aPtr);
    printf("L'indirizzo di aPtr è: %p\n", &aPtr);
}