#include <stdio.h>
#include<string.h>
int main ()
{
    char palin(char[]);
    int countv(char[]);
    char args[30];
    printf("Enter a string \n");
    gets(args);
    printf("Entered String is : \n");
    puts(args);
    printf("The number of vowels in the given string is : \n");
    countv(args);
    printf("\n\n");
    palin(args);
    int i,x=0;
    for(i=0;args[i]!='\0';i++)
    {
        x=(int)args[i];
        if(x>=65 && x<=90)
            x+=32;
        else if (x>=97 && x<=122)
            x-=32;
        args[i]=(char)x;
    }
    printf("Toggled string is : \n");
    puts(args);
    return 0;
}
char palin(char str[30])
{
    char revstr[30];
    int j,l=0,k=0;
    l=strlen(str);
    printf("Length of inputted string : \n");
    printf("%d \n",l);
    j=l-1;
    while(j>=0)
    {
        revstr[k]=str[j];
        k++;
        j--;
    }
    revstr[k]='\0';
    printf("Reversed String is : \n");
    printf("%s \n", revstr);
    if (strcmpi(str,revstr)==0)
       {
        printf("The inputted string %s \n", str) ; printf("is a palindrome \n ");
       }
    else
    {
        printf("The inputted string %s \n", str ); printf("is not a palindrome \n");
    }
        return str;
}

int countv(char x[30])
{
    int n=0,c=0;
    for(n=0;x[n]!='\0';n++)
    {
        if(x[n]=='A'|| x[n]=='a'|| x[n]=='E'|| x[n]=='e' ||x[n]=='I'|| x[n]=='i'|| x[n]=='O'|| x[n]=='o'|| x[n]=='U'|| x[n]=='u')
            c++;
    }
    printf("%d",c);
    return c;
}
