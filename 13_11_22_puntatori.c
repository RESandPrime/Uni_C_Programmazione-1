#include <stdio.h>
#define SIZE 10


int main(){
    float numbers[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
    float *nPtr;
    for (size_t i = 0; i < 10; i++){ //stampa elementi di numbers
        printf("%6.1f", numbers[i]);
    }
    puts("");
    nPtr = numbers; //assegnazione nPtr al primo elemento di numbers
    printf("%6.1f", *nPtr);
    
    puts("");
    nPtr = &numbers[0]; //assegnazione nPtr al primo elemento di numbers
    printf("%6.1f", *nPtr);

    puts("");
    for (size_t i = 0; i < 10; i++){ //stampa elementi di number partendo da numbers[0] e shiftando di uno ad ogni ciclo con la notazione /offset
        printf("%6.1f", *(nPtr + i));
    }

    /*puts("");
    for (size_t i = 0; i < 10; i++){ //stampa elementi di number partendo da numbers[0] e shiftando di uno ad ogni ciclo con la notazione /offset ma usanto array invece di Ptr
        printf("%6.1f", *(&numbers[0] + i)); //== printf("%.1f\n", numbers[i]);
    }*/
    
    puts("");
    for (size_t i = 0; i < 10; i++){ //stampa elementi di number partendo da numbers[0] e shiftando di uno ad ogni ciclo con la notazione /offset ma usanto array invece di Ptr
        printf("%6.1f", *(numbers + i)); //== printf("%.1f\n", numbers[i]);
    }
    
    puts("");
    for (size_t i = 0; i < 10; i++){ //indicizazzione del puntatore. Notazione puntatore/indice.
        printf("%6.1f", nPtr[i]);
    }

}
