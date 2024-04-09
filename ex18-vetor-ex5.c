#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vetA[N], vetB[N];
    srand(time(NULL));
    for(int i=0; i<N; i++){
        vetA[i]=rand()%51;
        vetB[N-1-i]=vetA[i];
        printf("A[%d]:%2d - B[%d]:%2d\n",i,vetA[i],N-1-i,vetB[N-1-i]);
    }
}






    
    





