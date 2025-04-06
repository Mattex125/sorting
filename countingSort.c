#include "libreriabella.h"

void countingSort(int v[],int n,unsigned int k){
    int *a=(int*)calloc(k,sizeof(int));
    for (int i=0;i<=n-1;i++)
    {
        a[v[i]]++;
    }
    int eleonora=0; //eleonora perche ci permette di ritrovare dove sistemare gli elementi
    for (int i=0; i<k; i++)
    {
        while(a[i]>0)
        {
            v[eleonora]=i;
            eleonora++;
            a[i]--;
        }
    }
    free(a);
}