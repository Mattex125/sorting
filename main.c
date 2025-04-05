//fare versioning anche localmente --> git (un software gestione degli aggiornamenti di un software)
//come dif, patch ect...
//github è un insieme di server che consentono di poter condividere in rete il nostro codice

#include "libreriabella.h"

int main(){
    int n=10;
    int a[n];
    allocaarray(a,n);
    //insertionSort(a,n);
    printarray(a,n);
    //allocaarray(a,n);
    mergeSort(a,n,0,n-1);
    printarray(a,n);
    return 0;
}