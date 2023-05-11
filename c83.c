#include <stdio.h>
int main()
{
    char string[30];
    fgets(string, 30, stdin);
    printf("input1:%s",string);
    gets(string);
    printf("input2:%s",string);
   return 0; 


}