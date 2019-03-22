#include<stdio.h>

int main() {

    int arr[2][2][2] = {{{1, 2}, {3, 4}}, {{10, 20}, {30, 40}}};
    int i = 0, j = 0, k = 0; 
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 2; k++) {
                printf("%d\t",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}