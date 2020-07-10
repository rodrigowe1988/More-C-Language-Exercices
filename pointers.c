//
//  main.c
//  pointers
//
//  Created by Rodrigo Weber on 05/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int age = 32;
    int *ageP = &age;
    double gpa = 5.6;
    double *gpaP = &gpa;
    char grade = 'A';
    char *gradeP = &grade;
    
    
    printf("The adress of this variables:\n age:%p\n gpa:%p\n grade:%p\n", &age, &gpa, &grade);
    
    printf("%d\n %.2f\n %c\n", *ageP, *gpaP, *gradeP);
    
    return 0;
}
