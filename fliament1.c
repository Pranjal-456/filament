#include<stdio.h>
main()
{
     char a[100],b[100];
     printf("enter value=");
     gets(a);
     strcpy(b,a);
     strrev(b);
     if(strcmp(a,b)==0)
     {
     	printf("this sting is palindrome");
	 }
	 else
	 {
	 	printf("this sting is not palindrome");
	 }

}
