/*Declare a structure for a student record consisting of five fields., student ID(int)
, first name(a dynamic allocated string), last name (string),total credits completed (int) 
and grade point average(flaoting-point)
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct StudentRecord{
    int studentID;
    char* firstName;
    char* lastName;
    int totalCredit;
    float gradePointAverage;
} StudentRecord;

int main(){
    StudentRecord student;

    student.studentID = 1;

    student.firstName = (char* )malloc(50*sizeof(char));
    if (student.firstName == NULL){
        printf("memory allocation failed\n");
        return 1;
    }
    snprintf(student.firstName, 50,"Soumya");
    student.lastName = (char* )malloc(30*sizeof(char));
    if(student.lastName == NULL){
        printf("memory allocation failed\n");
        return 1;
    }
    snprintf(student.lastName, 30,"Jain");

    student.totalCredit = 70;
    student.gradePointAverage = 5.74;

    printf("student ID = %d\n", student.studentID);
    printf("First Name = %s\n", student.firstName);
    printf("Last Name = %s\n", student.lastName);
    printf("Total Credits Earned = %d\n", student.totalCredit);
    printf("Grade Point Average = %f",student.gradePointAverage);

    return 0;
}