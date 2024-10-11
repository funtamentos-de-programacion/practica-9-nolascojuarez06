/*
 * Este programa utiliza un apuntadores para invertir el contenido de un arreglo
 *
 */

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* start = arr;
    int* end = arr + 4;

    for(int i = 0; i < 5 ; i++){
        printf("%d ", *(start + i));
    }
    printf("\n");

    while (start < end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}
