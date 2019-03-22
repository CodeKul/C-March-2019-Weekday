#include<stdio.h>

int main() {
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int i = 0, j = 0;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
1) 
    i   j   arr[i][j]
    0   0
    1   1
    2   2
        3
        0
        1
        2
        3
        0



    op: 
    1   2   3   
    4   5   6   


*/

