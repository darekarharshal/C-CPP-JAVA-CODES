#include<stdio.h>

void strrevX(char *str)
{
 char *start = NULL;
 char *end = NULL;

 start = str;
 end = str;

 while(*end != '\0')
{
 end++;
}
end--;


while(start<end)
{
 char temp = *start;
 *start = *end;
 *end = temp;

 start++;
 end--;
}


}



int main()
{
    char Arr[20];
    
    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

   printf("Reverse string is %s\n",Arr);

    return 0;
}