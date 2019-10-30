//
// Created by iml1s on 2019/10/29.
//

#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include "sort.h"


int bucketSort() {
    printf("bucket sort star \n");

    time_t now = clock();
    printf("start time %ld ms\n", now);

    int arr[5] = {5, 8, 5, 3, 2};
    size_t arrLen = sizeof(*arr);

    for (size_t i = 0; i < arrLen; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (size_t x = 0; x < arrLen; x++) {
        for (size_t y = x; y < (arrLen - x); y++) {
            if (arr[x] < arr[y]) {
                int temp = arr[x];
                arr[x] = arr[y];
                arr[y] = temp;
            }
        }
    }

    for (size_t i = 0; i < arrLen; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    sleep(1);
    time_t end = clock();
    printf("end time %ld ms\n", end);
    printf("duration %ld ms\n", end - now);
    printf("bucket sort end \n");
}

int bubbleSort() {
    printf("bubble sort star \n");

    time_t now = clock();
    printf("start time %ld ms\n", now);

    int arr[5] = {5, 8, 5, 3, 2};
    size_t arrLen = sizeof(*arr);

    for (size_t i = 0; i < arrLen; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (size_t x = 0; x < arrLen; x++) {
        for (size_t y = x; y < (arrLen - x); y++) {
            if (arr[x] < arr[y]) {
                int temp = arr[x];
                arr[x] = arr[y];
                arr[y] = temp;
            }
        }
    }

    for (size_t i = 0; i < arrLen; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    sleep(1);
    time_t end = clock();
    printf("end time %ld ms\n", end);
    printf("duration %ld ms\n", end - now);
    printf("bubble sort end \n");
}
