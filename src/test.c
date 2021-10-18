//
// Created by nekoimi on 2021/10/13.
//
#include <stdio.h>
#include "test.h"

void print_array(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("(%d, %d) => ", i, array[i]);
    }
    printf("\n");
}

void insert_sort() {
    int size = 5;
    int nums[] = {9, 20, 13, 23, 12};

    int value;
    int index;
    for (int i = 1; i < size; ++i) {
        value = nums[i];
        index = i - 1;
        while (index >= 0 && value < nums[index]) {
            nums[index + 1] = nums[index];
            index--;
        }
        nums[index + 1] = value;
    }

    print_array(nums, size);
}


void bubble_sort() {
    int size = 5;
    int nums[] = {9, 20, 13, 23, 12};

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < i; ++j) {
            int tmp = nums[i];
            if (nums[j] > tmp) {
                nums[i] = nums[j];
                nums[j] = tmp;
            }
        }
    }

    print_array(nums, size);
}

void do_quick_sort(int nums[], int start, int end) {
    int i, j, stand;
    if (start > end) {
        return;
    }

    // 默认取第一个值为标准
    stand = nums[start];
    i = start;
    j = end;
    // 循环查找 i -> , <- j 从两个方向开始查找
    while (i != j) {

        // fixme 先要从右边开始找
        while (i < j && nums[j] <= stand) {
            printf("j--, %d \n", j);
            j--;
        }

        while (i < j && nums[i] >= stand) {
            printf("i++, %d \n", i);
            i++;
        }

        if (i < j) {
            printf("交换i, j的值, nums[i] -> %d, nums[j] -> %d\n", nums[i], nums[j]);
            nums[i] = nums[i] ^ nums[j];
            nums[j] = nums[i] ^ nums[j];
            nums[i] = nums[i] ^ nums[j];
        }

    }

    nums[start] = nums[i];
    nums[i] = stand;

    printf("next \n");
    do_quick_sort(nums, start, i - 1);
    do_quick_sort(nums, i + 1, end);
}

void quick_sort() {
    int size = 5;
    int nums[] = {9, 20, 13, 23, 12};

    do_quick_sort(nums, 0, 4);

    print_array(nums, size);
}

void fun_test() {
    int size = 10;
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // 将所有偶数移动到所有奇数前面
    int i = 0;
    int j = size - 1;
    while (i < j) {
        while (i < j && nums[i] % 2 == 0) { // 找到奇数
            i++;
        }
        while (i < j && nums[j] % 2 > 0) { // 找到偶数
            j--;
        }
        if (i < j) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
    }
    for (int k = 0; k < size; ++k) {
        printf("%d, ", nums[k]);
    }
    printf("\n");
}