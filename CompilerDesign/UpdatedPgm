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
    int a=0,space = 0,newline = 0;
    char str1[10];
    int len1,a1;
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
    
    
    //calculate the number of spaces and the newlines
    case 2:
    printf("\nEnter the string:");
    ch = getche();
    while((ch!=27) && (a<199))
    {
        str[a] = ch;
        if(str[a] == ' ')
        {
            space++;
        }
            if(str[a] == 13)
            {
                newline++;
                printf("\n");
            }
            a++;
            ch = getche();
        }
        printf("\n The number of lines used: %d",newline+1);
        printf("\nThe number of spaces used is %d",space);
        break;
        case 3:
        printf("Enter the input string:");
        scanf("%s",&str1);
        len1 = strlen(str1);
        a1 = 0;
        while(a1<len1)
        {
            if(isdigit(str1[a1]))
            {
                a1++;
            }
            else
            {
                printf("\n It is not a constant:");
                break;
            }
        }
        if(a1 == len1)
        {
            printf("\n It is a constant:");
        }
        break;
        case 4:
        printf("\n\n\t\tEnter the desired string:");
        do{
            ++i2;
            str2[i2] = getch();
            if(str2[i2]!=10 && str2[i2]!=13)
            printf("%c",str2[i2]);
            if(str2[i2]=='\b')
            {
                --i2;
                printf("\b");
            }
        }while(str2[i2]!=10 && str2[i2]!=13);
        if(isident(str2))
        printf("\n\n\t\t The given string is an identifier:");
        else
        printf("\n\n\t\tThe given string is NOT an identifier:");
        break;
        default:
        printf("Wrong choice:");
    }
    getche();
}
//to check if the string is an identifier
//it acts like first stage of the dfa

int isident(char *str)
{
    if((str[0]>='a' && str[0]<='z') || (str[0] >= 'A' && str[0] <= 'Z'))
    {
        return (second(str+1));
    }
    else
    return 0;
    
}

int second(char *str)
{
    if((str[0]>='0'&& str[0]<='9' || str[0]>='a' && str[0]<='z') || (str[0]>='A' && str[0] <='Z'))
    {
        return (second(str+1));
    }
    else
    {
        if(str[0]==10 || str[0]==13)
        {
            return (third(str));
        }
        else
        {
            return 0;
        }
        
    }
    
}
int third()
{
    return 1; //being the final stage reaching it means the string is identifid
}


            
      
