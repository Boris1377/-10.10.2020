#include <iostream>

int main() {

    bool flag= false;
    //int serchingNum=0;
    int quantityArrElements=0;
    int cat=0;
    int dog=0;

    printf("Inter number of array elements: ");
    scanf("%d", &quantityArrElements);
    quantityArrElements= quantityArrElements - 1;

    //printf("Inter serching number: ");
    //scanf("%d", &serchingNum);

    int arr[quantityArrElements];

    printf("Fill the array:");
    for(int i=0; i <= quantityArrElements; i++) {
        scanf("%d", &arr[i]);
    }

    if(arr[0]%2==0){

    printf("%d\n",0);

    }

    else{

        int a=arr[0];
        int c=arr[1];
        for(int i=1; i<=quantityArrElements; i++){

        int b = a+arr[i];
        a=b;
            if(arr[i]%2==0){

                cat=a-arr[i];
                i=quantityArrElements;
                flag= true;
                printf("%d", cat);


            }

            else{

                flag= false;

            }



            }

        if(flag== false){

            for(int i=2;i<quantityArrElements;i++){

                int b = c+arr[i];
                c=b;
                dog=b;

            }
            printf("%d", dog);
        }

    }







    return 0;
}
