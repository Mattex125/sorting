#include <libreriabella.h>

int partition(int v[], int l, int r);//gets me the pivot position

void quickSort(int v[], int n, int l, int r){
    if (l<r){
        int q=partition(v,l,r);
        quickSort(v,n,l,q-1);
        quickSort(v,n,q+1,r);
    }
}

int partition(int v[],int l,int r){
    int lenght=r-l+1;
    //we choose who's pivot ramdonly
    int pivot_index=(rand()%lenght)+l;
    //we put pivot as last element
    int tmp=v[pivot_index];
    v[pivot_index]=v[r];
    v[r]=tmp;

    //now we start finaly partition
    int lastmin=l-1;// posizione del ultimo minore è prima del inizio
    for (int j = l; j <= r - 1; j++) {
        // Se l'elemento corrente è minore o uguale al pivot
        if (v[j] <= v[pivot_index]) {
            lastmin++; // Incrementa i per fare spazio all'elemento minore o uguale al pivot
    //swap primo non minore per l'ele attuale (minore)
            tmp = v[lastmin];
            v[lastmin] = v[j];
            v[j] = tmp;
        }
    }
    //swap pivot nella sua posizione correta e il primo dei magg
    tmp = v[lastmin + 1];
    v[lastmin + 1] = v[r];
    v[r] = tmp;
    // Restituisce l'indice del pivot
    return lastmin + 1;
}

