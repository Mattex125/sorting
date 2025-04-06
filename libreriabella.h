#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void allocaarray(int v[],int n);
void printarray(int v[], int n);

void insertionSort(int v[],int nele);
void mergeSort(int v[], int n, int i,int j);
void quickSort(int v[], int n, int l, int r);
void countingSort(int v[],int n,unsigned int k);