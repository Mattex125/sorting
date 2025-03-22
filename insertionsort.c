#include "libreriabella.h"

// metti qua

void insertionSort(int v[],int nele){
    for (int i=1; i<nele ; i++)
    {   
        int j=i-1; //variabile di scorrimento parte ordinati ordinati
        while (j>=0 && v[j]>v[j+1]) //scorro la  lista da dx a sx, scambio fino a che gli ho trovato posto giusto
        { 
            int tmp=v[j];
            v[j]=v[j+1];
            v[j+1]=tmp;
            j--;
        }
    }
}

void allocaarray(int v[],int n){
    for (int i=0;i<n;i++)
        {
        v[i]=rand()%10;
        }
    }
    
void printarray(int v[], int n){
    for (int i=0;i<n;i++)
        {
        printf("elemento in pos %d --> %d\n",i,v[i]);
        }
    printf("\n");
}