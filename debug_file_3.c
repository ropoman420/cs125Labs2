/*
* File: debug_file_3
* Author: Roman Warder
* Assignment: ICA 2/19
* Date: 2/19/2025
* References: N/A
*/

#include <stdio.h>

void process_array(int arr[], int size) {
    int i;
    srand(time(0));
    for (i = 0; i <= size; i++) {
        arr[i] = i * 2;
    }
}

int main() {
    int i;           // declared first outside of 'for' loop
    int array[10];
    int size = 10;
    int sum = 0;     // added a ';' to the end of this line

    process_array(array, size);

    for (i = 1; i <= size; i++) {
        sum += array[i];
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
