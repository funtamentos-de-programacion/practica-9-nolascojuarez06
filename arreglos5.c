#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int* arr[] = {&a, &b, &c};    
    
    //TODO: (15) Asigna a cada apuntador la dirección de las variables a, b y c
    
    for(int i = 0; i < 3 ; i++) {
        printf("%d ", **(arr + i));
    }
    printf("\n");    
    return 0;
}
