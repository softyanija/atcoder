#include  <stdio.h>

void qsort(int x[ ], int left, int right);
void swap(int x[ ], int i, int j);
void showdata(int x[ ], int n);
void main(void);

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
    showdata(x, n);//nは配列の個数

    if(left < i-1) qsort(x,left, i-1);
    if(right > j+1) qsort(x,j+1,right);
}

void swap(int x[], i ,j)
{
    int temp;
    x[i] = x[i] + x[j];
    x[j] = x[i] - x[j];
    x[i] = x[i] - x[j];
}

void showdata(int x[], int n)//データ表示用
{
    int i;

    for (i=0;i<n;i++){
        printf("%d", x[i]);
        printf("\n" );
    }
}

void main()
{
  {      /* ソートする配列 */
  int x[  ] = {6, 3, 1, 7, 0, 4, 8, 5, 2, 9};
  int n = 10;

  printf("ソート前:\n");
  showdata(x, n);

  printf("ソート中:\n");
  qSort(x, 0, n - 1);

  printf("ソート後:\n");
  showdata(x, n);
}
