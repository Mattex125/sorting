#include "libreriabella.h"

void mergeSort(int v[], int n, int i,int j){
    if (j-i<=0) //caso base
        return;
    else{ //caso ricorsivo
        int mid=(int)((i+j)/2); //calcolo elemento medio array per DIVIDI
        mergeSort(v,i+mid+1,i,mid);
        mergeSort(v,j-mid,mid+1,j);
        int l=i,r=mid+1; //indici left and right
        int tmp[j-i+1]; //dichiaro un array di appoggio per ordinare i miei ele
        int tmpindex=0;
        while (l<=mid && r<=j){ //merge dei minori dei due array
            if (v[l]<=v[r]){ 
                tmp[tmpindex]=v[l];
                l++;
                }
            else
                {
                tmp[tmpindex]=v[r];
                r++;
                }
            tmpindex++;
            }
        //merge in tmp della pila ordinata restante
        if (l>mid)
            {
            for (;r<=j;r++)
                {
                tmp[tmpindex]=v[r];
                tmpindex++;
                }
            }
        else
            {
            for (;l<=mid;l++)
                {
                tmp[tmpindex]=v[l];
                tmpindex++;
                }
            }
        //rimetto il numero di elementi effetivamente ordinati sul mio vettore
        for (int eleonora=0;eleonora<(j - i + 1);eleonora++)
            v[i+eleonora]=tmp[eleonora];
        }
    return;
    }