#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[20];  
    int i,length,temp;
    printf("Enter string : ");
    scanf("%[^\n]s",str);
    length = strlen(str);
    printf("string before reverse = %s\n",str);
    for(i=0;i<length/2;i++)  
    {
    	temp=str[i];
    	str[i]=str[length-i-1];
    	str[length-i-1]=temp;
 	}
    printf("string after reverse = %s\n",str);
    return 0;
}
