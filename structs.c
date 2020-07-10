//
//  main.c
//  structs
//
//  Created by Rodrigo Weber on 04/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(int argc, const char * argv[]) {
    
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy( student1.name, "Jim");
    strcpy( student1.major, "Technology");
    
    struct Student student2;
    student2.age = 25;
    student2.gpa = 4.0;
    strcpy( student2.name, "Pam");
    strcpy( student2.major, "Biology");
    
    printf("%.2f\n", student1.gpa);
    printf("%s\n", student1.name);
    
    printf("%s\n", student2.major);
    printf("%d\n", student1.age);
    return 0;
}
