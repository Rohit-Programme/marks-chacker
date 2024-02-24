/*Write a program to check if a student passed or failed.
marks > 30 is
PASS
marks <= 30 is
FAIL*/

#include<stdio.h>
int main(){

    int marks;
    printf("enter your marks");
    scanf("%d",&marks);

    if(marks >=0 && marks <=30){
        printf("you are failed");
    }

    else if(marks >=30 && marks<=100){
        printf("you are passed");
    }
    else{
        printf("you give wrong input");
    }
}