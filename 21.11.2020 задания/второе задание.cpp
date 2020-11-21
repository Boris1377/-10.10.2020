#include <iostream>

int main() {

    bool flag= false;
    int serchingNum=0;
    int quantityArrElements=0;

    printf("Inter number of array elements: ");
    scanf("%d", &quantityArrElements);
    quantityArrElements= quantityArrElements - 1;

    printf("Inter serching number: ");
    scanf("%d", &serchingNum);

    int arr[quantityArrElements];

    printf("Fill the array:");
    for(int i=0; i <= quantityArrElements; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i <= quantityArrElements; i++){

        int a=arr[i];

        if(a==serchingNum){

            flag= true;
            i=quantityArrElements;

        }

        else{

          flag= false;

        }
    }

    if(flag== true){

        printf("Yes, "); printf("%d",serchingNum ); printf("%s\n"," is present in the array.");

    }

    else if(flag== false){

        printf("No, "); printf("%d",serchingNum ); printf("%s\n"," isn't present in the array.");

    };

    return 0;
}
