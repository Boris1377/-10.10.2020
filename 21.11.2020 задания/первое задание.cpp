#include <iostream>

int main() {

    int quantityArrElements=0;
    printf("Inter number of array elements: ");
    scanf("%d", &quantityArrElements);
    int arr[quantityArrElements];

    for(int i=0; i <= quantityArrElements; i++) {
        arr[i] = i*i;
    }

    for(int i=0; i <= quantityArrElements; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
