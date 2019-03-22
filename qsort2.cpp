#include<stdio.h>

/* �l�����ւ���֐� */
void swap (int *x, int *y) {
  int temp;    // �l���ꎞ�ۑ�����ϐ�

  temp = *x;
  *x = *y;
  *y = temp;
}

/***
* pivot�����߁A
* �S�f�[�^��pivot�����ڂɐU�蕪���A
* pivot�̓Y������Ԃ�
***/
int partition (int array[], int left, int right) {
  int i, j, pivot;
  i = left;
  j = right + 1;
  pivot = left;   // �擪�v�f��pivot�Ƃ���

  do {
    do { i++; } while (array[i] < array[pivot]);
    do { j--; } while (array[pivot] < array[j]);
    // pivot��菬�������̂����ցA�傫�����̂��E��
    if (i < j) { swap(&array[i], &array[j]); }
  } while (i < j);

  swap(&array[pivot], &array[j]);   //pivot���X�V

  return j;
}

/* �N�C�b�N�\�[�g */
void quick_sort (int array[], int left, int right) {
  int pivot;

  if (left < right) {
    pivot = partition(array, left, right);
    quick_sort(array, left, pivot-1);   // pivot�����ɍċA�I�ɃN�C�b�N�\�[�g
    quick_sort(array, pivot+1, right);
  }
}

int main (void) {
  int i,n;
  scanf("%d\n", n);//�z��̗v�f��
  int a[n];
  for(i=0;i<n;i++){
      scanf("%d", &a[i]);
    }

  for(i = 0; i < n; i++){ printf("%d", &a[i]); }
  printf("\n");

  quick_sort(a, 0, n-1);

  for (i = 0; i < n; i++) { printf("%d", &a[i]); }
  return 0;
}
