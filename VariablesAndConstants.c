#include<stdio.h>

int main() {

    int a = 10; // 4Bytes
    int b = 20; // 4Bytes
    float c = 30.40; // 8Bytes
    char d = 'C'; // 1Byte
    const int e = 20;
    char str[] = "Welcome to codekul\n";

    printf("str: %s", str);

    printf("Value of a: %d\nValue of b: %d\n", a, b);

    a = 30;
    b = 40;

    printf("Value of a: %d\nValue of b: %d\n", a, b);
    printf("c: %f\n", c);
    printf("d: %c\n", d);

    // e = 50;


    return 0;
}