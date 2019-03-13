#include<stdio.h>

int main() {

    int a = 10;
    int b = 10;
    int i = 0;


    if (a < b) {
        printf("a is less than b\n");
        if (a == 10) {
            printf("a is equal to 10\n");
        }
        else {
            printf("a is not equal to 10\n");
        }
    }
    else if (a == b) {
        printf("a and b are equal\n");
    } 
    else {
        printf("b is less than a\n");
    }

    // Loops

    /*
        initialisation;
        while (condition) {
            statements;
            incr/decr;
        }
    */

    i = 0;
    while(i < 10) {
        if (i % 2 == 0) {
            printf("Codekul\n");
        }
        else {
            printf("The Gurukul for Coders!\n\n");
        }
        i++;
    }

    /*
        initialisation;
        do {
            statements;
            incr/decr;
        }while(condition);
    */

    i = 0;
    do
    {
        printf("Codekul\n");
        i++;
    } while (i < 10);

    
    /*
        for(initialisation; condition; incr/decr) {
            statements;
        }
    */

    for(i = 0; i < 10; i++) {
        printf("Codekul\n");
    }
    
    



    return 0;
}