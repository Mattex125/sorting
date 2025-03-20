#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    printf("palle");
    //insertion sort
    int A[10];
    int n=10;
    for (int i=0;i<n;i++)
    {
        A[i]=rand()%10;
    }
    //sorting
    for (int i=1; i<n ; i++)
    {   
        int j=i-1; //variabile di scorrimento parte ordinati ordinati
        while (j>=0 && A[j]>A[j+1]) //scorro la  lista da dx a sx, scambio fino a che gli ho trovato posto giusto
        { 
            int tmp=A[j];
            A[j]=A[j+1];
            A[j+1]=tmp;
            j--;
        }
    }
    //printing
    for (int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}