#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vetA[N], vetB[N];
    srand(time(NULL));
    for(int i=0; i<N; i++){
        vetA[i]=rand()%51;
    }
    for(int i=0; i<N; i++){
        vetB[i]=vetA[N-1-i];
        printf("A[%d]:%d - B[%d]:%d\n",N-1-i,vetA[N-1-i],i,vetB[i]);
    }        
}






    
    





