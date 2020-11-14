#include <iostream>

int main() {

    int quantityArrElements=0;
    printf("Inter number of array elements: ");
    scanf("%d", &quantityArrElements);
    int arr[quantityArrElements];

    for(int i=0; i <= quantityArrElements; i++) {
        if (i % 2 == 0) {
        arr[i] = 0;
    }
        else{
        arr[i] = 1;
    }
    }

    for(int i=0; i <= quantityArrElements; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
