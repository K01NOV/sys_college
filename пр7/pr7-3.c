#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    char name[50];
    float gpa;
};

int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    if(n < 0){
        printf("Invalid number of students\n");
        return 0;
    }
    struct Student* students = malloc(n * sizeof(struct Student));

    for(int i = 0; i < n; i++){
        printf("Enter name of the student: ");
        scanf("%s", students[i].name);
        printf("Enter gpa of the student: ");
        scanf("%f", &students[i].gpa);
    }

    for(int i = 0; i < n; i++){
        printf("Student: %s, %0.1f\n", students[i].name, students[i].gpa);
    }

    free(students);
    
}