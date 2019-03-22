#include<stdio.h>
#include<string.h>


int main() {

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    float a1[5] = {1.2, 3.4, 5.6, 7.8, 9.10};
    char str[] = {'C', 'o', 'd', 'e', 'k', 'u', 'l'};
    int i = 0;

    // printf("Value at index %d: %d\n", 8, arr[8]);
    // printf("Value at index %d: %f\n", 4, a1[4]);
    // printf("Value at index %d: %c\n", 4, str[4]);

    for(i = 0; i < 10; i++) {
        printf("Value at index %d: %d\n", i, arr[i]);
    }

    for(i = 0; i < 5; i++) {
        printf("Value at index %d: %f\n", i, a1[i]);
    }
    
    for(i = 0; i < 7; i++) {
        printf("Value at index %d: %c\n", i, str[i]);
    }    
    printf("String value: %s\n", str);

    return 0;
}