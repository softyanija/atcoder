#include <stdio.h>

void quicksort(int array[], int left, int right) {
    int l = left;
    int r = right;
    int pivot = array[(left + right) / 2]; // ��������s�{�b�g��I��
    int buf;

    while (1) {
        while (array[l] < pivot) l++;
        while (array[r] > pivot) r--;

        if (l > r) break;

        // pivot��菬�����l�����A�傫���l���E�ɓ���ւ�
        buf = array[l];
        array[l] = array[r];
        array[r] = buf;

        l++, r--;
    };

    // pivot��菬�����̈�Ƒ傫���̈�����ꂼ��ċA�I�Ƀ\�[�g
    if (left < r)  quicksort(array, left, r);
    if (l < right) quicksort(array, l, right);
}

int main(int argc, char *argv[]) {
    int i;
    int array[] = {
        6, 4, 7, 7, 8, 13, 5, 2, 9, 1,
    };
    int count = sizeof array / sizeof array[0];

    quicksort(array, 0, count - 1);// �\�[�g

    // ���ʕ\��
    for (i = 0; i < count; i++) {
        printf("%d", array[i]);
    }

    return 0;
}
