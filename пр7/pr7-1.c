#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    float gpa;
};

struct Student s0 = {"student1", 4.1};
struct Student s1 = {"student2", 4.2};
struct Student s2 = {"student3", 4.3};
struct Student s3 = {"student4", 4.4};
struct Student s4 = {"student5", 4.5};
struct Student group[5];

int main(){
    group[0] = s0;
    group[1] = s1;
    group[2] = s2;
    group[3] = s3;
    group[4] = s4;

    for(int i = 0; i < 5; i++){
        printf("Student: %s, %0.1f\n", group[i].name, group[i].gpa);
    }


    return 0;
}
