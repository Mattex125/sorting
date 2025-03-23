#include "libreriabella.h"

void mergeSort(int v[], int n, int i,int j){
    //gotta work with indexing, we'll only use 1 array
    int mid=(int)((i+j)/2);
    if (j-i<=0)
        return;
    else{
        mergeSort(v,i+mid+1,i,mid);
        mergeSort(v,j-mid,mid+1,j);
        int l=i,r=mid+1;
        while (l<=mid && r<=j){
            if (v[l]>=v[r]){ //occhuo al uguale
                int tmp=v[l];
                v[l]=v[r];
                v[r]=tmp;
                printf("%d\n",v[l]);
                l++;
                }
            else
                {
                printf("%d\n",v[l]);
                r++;
                }
            }
        //logica del rimettere apposto il restante
        if (r<=j)
            {
            //peccato
            }
        printf("\n");
        }
    }