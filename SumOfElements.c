#include<stdio.h>

int main() {

    int arr[5];
    int i = 0;
    int sum = 0;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Entered Array: \n");
    for(i = 0; i < 5; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    
    for(i = 0; i < 5; i++) {
        sum += arr[i];
    }
    return 0;
}