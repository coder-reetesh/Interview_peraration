/******************************************************************************
string compare using array 
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int string_cmp(char str1[],char str2[])
{
    int i;
    for(i=0;str1[i]==str2[i];i++)
    {
        if(str1[i]=='\0')
        return 0;
    }
    return (str1[i]-str2[i]);
}
int main()
{
    char str1[10],str2[10];
    printf("Enter string 1 : ");
    //scanf("%s",str1);
    gets(str1);
    printf("Enter string 1 : ");
    //scanf("%s",str2);
    gets(str2);
    int cmp = string_cmp(str1,str2);
    printf("strring_compare= %d",cmp);

    return 0;
}

/******************************************************************************
String compare using array pointer string function
*******************************************************************************/
#include <stdio.h>
#include <string.h>
int ptr_string_cmp(char *str1,char *str2)
{
    while(*str1 == *str2)
    {
        if(*str1 =='\0')
        {
            return 0;
        }
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}
int main()
{
    char str1[10],str2[10];
    printf("Enter string 1 : ");
    //scanf("%s",str1);
    gets(str1);
    printf("Enter string 1 : ");
    //scanf("%s",str2);
    gets(str2);
    int cmp = ptr_string_cmp(str1,str2);
    printf("strring_compare= %d",cmp);

    return 0;
}
/******************************************************************************
String comparison using strcmp inbuild function
*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10],str2[10];
    printf("Enter string 1 : ");
    //scanf("%s",str1);
    gets(str1);
    printf("Enter string 1 : ");
    //scanf("%s",str2);
    gets(str2);
    if(strcmp(str1,str2)== 0)
    printf("Strings are same\n");
    else
    printf("Strings are not same\n");

    return 0;
}
