//
// Created by iml1s on 2019/10/29.
//

#include <stdio.h>
#include <time.h>


int bucketSort() {
    printf("bucket sort star \n");

    int arr[5] = {5, 8, 5, 3, 2};
    for(size_t i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (size_t x = 0; x < 5; x++) {
        for (size_t y = x; y < 5; y++) {
            if (arr[x] < arr[y]) {
                int temp = arr[x];
                arr[x] = arr[y];
                arr[y] = temp;
            }
        }
    }

    for(size_t i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("bucket sort end \n");
}
