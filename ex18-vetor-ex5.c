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
    for(int i=0; i<N; i++)
        vetB[i]=vetA[N-1-i];
    for(int i=0; i<N; i++)
        printf("%d - %d\n",vetA[i],vetB[i]);
}






    
    





