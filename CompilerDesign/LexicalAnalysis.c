//Write a menu based program in C to check for keywords, identifiers, spaces and the constants

#include<conio.h>
#include<stdio.h>
#include<string.h>
//declare the prototype of the three functions
int isident(char*);
int second(char*);
int third();
void main()
{
    //a single thread is created at this poiunt of time
    int i,flag= 0,m;
    char str[200],ch;
    int len1,al;
    char *str2;
    int i2 = -1; //initialization 
    char s[5][10] = {"if","else","goto","continue","return"},
    st[10];
    int choice;
    //clrscr();
    printf("\n*******************************Menu****************************\n");
    printf("\n 1->check whether a string is a keyword:");
    printf("\n2->calculate number of spaces and the newlines");
    printf("\n3->Check whether the given number is a constant:");
    printf("Check whether a given string is an identifier:");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case  /* constant-expression */ 1:
    printf("\nEnter the string:");    scanf("%s",&st);
    for(i=0;i<5;i++)
    {
        m = strcmp(st,s[i]);
        if(m==0)
        flag = 1;
    }
    if(flag == 0)
    printf("\n It is not a keyword:");
    else
    {
        printf("\n it is a keyword:");
    }
    
        /* code */
        break;
    
    default:
        break;
    }
}