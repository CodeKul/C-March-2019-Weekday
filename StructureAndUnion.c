#include<stdio.h>
#include<string.h>

union Student
{
    int rno;
    char name[1];
    float marks;
};

union Student input_student_data();
void display_student(union Student);

int main() {

    union Student stu1;
    union Student stu2;

    printf("Size: %ld", sizeof(stu1));

    stu1 = input_student_data();
    stu2 = input_student_data();

    display_student(stu1);
    display_student(stu2);

    return 0;
}

union Student input_student_data() {
    union Student stu;

    printf("Enter name: ");
    scanf("%s", stu.name);
    printf("Enter marks: ");
    scanf("%f", &stu.marks);
    printf("Enter roll no: ");
    scanf("%d", &stu.rno);

    return stu;
}

void display_student(union Student stu) {
    printf("Roll no: %d\nName: %s\nMarks: %f\n\n",stu.rno, stu.name, stu.marks);
}


