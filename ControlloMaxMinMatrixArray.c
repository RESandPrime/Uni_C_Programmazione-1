#include <stdio.h>

int main(){
    int N = 0;
    int M = 0;
    int max = 0;
    int min = 0;
    int D = 0;
    int v[N][M];
    int w[D];

    printf("Enter number of rows in matrix: ");
    scanf("%d", &N);
    
    printf("Enter number of columns in matrix: ");
    scanf("%d", &M);

    printf("Enter number of elements in array: ");
    scanf("%d", &D);
    
    for (int i = 0; i < D; i++){
        printf("Enter element of array in position [%d]: ", i);
        scanf("%d", &w[i]);
    }
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("Enter element of matrix in position [%d][%d]: ", i, j);
            scanf("%d", &v[i][j]);
        }
    }
    
    for (int i = 0; i < N; i++){
        max = v[i][0];
        min = v[i][0];
        for (int j = 1; j <= M; j++){
            if(v[i][j] < min){
                min = v[i][j];
            }
            
            if(v[i][j] > max){
                max = v[i][j];
            }
            
            
        }
        int cont = 0;
        for (int k = 0; k < D; k++){
                
            if(w[k] <= max && w[k] >= min){
                cont++;
            }
        }
        printf("Nel vettore ci sono %d elementi compresi tra il massimo ed il minimo della riga %d della matrice\n", cont, i);
        puts("");
    
    }
}