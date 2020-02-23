#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char str[100],ch; //the longest input string that can be taken mis 100
    int space = 0,a=0,newLine =0;
    printf("\n Enter a string:");
    ch = getche();
    while((ch!=27) && (a<199))
    {
        str[a] = ch;
        if(str[a]==' ')
        {
            space++;
        }
        if(str[a] == 13)
        {
            newLine++;
            printf("\n");
        }
        a++;
        ch = getche();
    }
    printf("\nThe number of lines used: %d",newLine+1);
    printf("\nThe number of spaces used:%d",space);
    getche();

}
