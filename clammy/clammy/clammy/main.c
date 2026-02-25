//
//  main.c
//  clammy
//
//  Created by CLAMMY on 29/01/2026.
//

#include <stdlib.h>
#include <stdio.h>
int main(void){
    
    int year,total,english,mathematics,ict,programming_c;
    
    float average;
    char department[5],name[15],reg_no[15];
    printf("enter department:\n");
    scanf("%s",department);
    printf("enter year of study:\n");
    scanf("%d",&year);
    printf("enter students name\n");
    scanf("%s",name);
    printf("enter student reg number\n");
    scanf("%s",reg_no);
    printf("------enter -----marks--------\n");
    printf("mathematics\n");
    scanf("%d",&mathematics);
    printf("english\n");
    scanf("%d",&english);
    printf("programming in c \n");
    scanf("%d",&programming_c);
    printf("ict\n");
    scanf("%d",&ict);
    total=mathematics+english+ict+programming_c;
    average=total/4;
    printf("total marks:\t%d",total);
    printf("\naverage marks \t%0.2f",average); 

    return 0;
}
    
    
    
    
    
    


