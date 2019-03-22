#include<stdio.h>

void my_function();
void function_with_param(int, int);
int function_with_returning(int, int);

int main() {
    int result = 0;

    my_function();
    function_with_param(10, 20);
    result = function_with_returning(10, 20);
    printf("Result: %d\n", result);
    return 0;
}

void my_function() {
    printf("This is my function\n");
}

void function_with_param(int a, int b) {
    int res = a + b;
    printf("Addition: %d\n",res);
}

int function_with_returning(int a, int b) {
    int res = a + b;
    return res;
}