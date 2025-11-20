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

void print_student(struct Student s){
    printf("Student: %s, %0.1f\n", s.name, s.gpa);
}

float average_gpa(struct Student arr[], int n){
    float sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i].gpa;
    }
    float avg = sum / n;
    return avg;
}

int main(){
    group[0] = s0;
    group[1] = s1;
    group[2] = s2;
    group[3] = s3;
    group[4] = s4;
    for(int i = 0; i < 5; i++){
        print_student(group[i]);
    }
    float avg = average_gpa(group, 5);
    printf("Average gpa: %0.1f\n", avg);
    return 0;
}