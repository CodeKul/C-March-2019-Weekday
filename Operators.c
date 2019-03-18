#include<stdio.h>

int main() {

    int a = 10;
    int b = 20;
    int res = 0;

    // Arithmetic
    /*
        +
        -
        *
        /
        %
    */

    res = a + b;
    res = a - b;
    res = a * b;
    res = a / b;
    res = a % b;

    //Assignment
    /*
        =
    */
    res = 1 + 4;

    // Compound Assignment
    /*
        +=
        -=
        *=
        /=
        %=
    */

    res += a;  // res = res + a;


    // Incr/Decr
    /*
        a++ post incr
        ++a pre incr
        a-- post decr
        --a pre decr
    */
    a++;    // 10
    ++a;    // 12

    // Comparision
    /*
        >
        <
        >=
        <=
        ==
        !=
    */

    res = a > b;
    res = a > 10;

    // Logical
    /*
        &&
        ||
        !

        p   q   &&  ||  !p
        0   0   0   0   1
        0   1   0   1   1
        1   0   0   1   0
        1   1   1   1   0
    */

    res = !((a < b) && (a > 10));

    // Conditional

//  result = condition ? true part : false part
    res = a < b ? a : b;

    return 0;
}

