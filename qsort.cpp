#include  <stdio.h>

void qsort(int x[ ], int left, int right);
void swap(int x[ ], int i, int j);
void showdata(int x[ ], int n);
void main();

void qsort(int x[], int left, int right)
{
    int i,j;
    int pivot;

    i = left;
    j = right;

    pivot = x[(left + right) / 2];
    while(1){
        while(x[i] < pivot) i++;

        while(pivot < x[j]) j--;

        if(i>=j) break;

        swap(x,i,j);
        i++;
        j--;
    }
    showdata(x, 10);//nは配�