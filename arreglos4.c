#include <stdio.h>


// TODO: (10) Declara un prototipo de una función
//  id: suma
//  tipo de retorno int
//  argumento un apuntador a entero y un entero


int main() {
    int arr[5] = {1, 2, 3, 4, 5};
int resultado = suma(arr, 5);
    printf("%d\n", resultado);
    
    return 0;
}

int suma(int* arr, int tam ){
    int sum;
    for(int i = 0; i < tam; i++){
        sum += *(arr + i);
    }
    return sum;
}