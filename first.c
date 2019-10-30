#include <stdio.h>
int main ()
{
    char args[30];
    printf("Enter a string \n");
    gets(args);
    printf("Entered String is : \n");
    puts(args);
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
