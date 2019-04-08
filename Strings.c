#include<stdio.h>
#include<string.h>

int main() {

    char name[10];  
    char new_name[30];

    printf("Enter name: ");
    scanf("%[^\n]s",name);
    printf("Name: %s\n",name);
    printf("Length: %lu\n", strlen(name));
    strncpy(new_name, name, strlen(name) - 2);

    printf("New Name: %s\n",new_name);
    printf("New Name Length: %lu\n", strlen(new_name));

    strncat(new_name, name, strlen(name));

    printf("\nNew Name: %s\n",new_name);
    printf("New Name Length: %lu\n", strlen(new_name));

    return 0;
}