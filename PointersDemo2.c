#include<stdio.h>

int main() {

    char *str;
    int i = 0;

    str = gets(str);
    printf("%s\n",str);

    i = 0; 
    while(*(str + i) != '\0') {
        printf("%c\n", *(str + i));
        i++;
    }    
    return 0;
}