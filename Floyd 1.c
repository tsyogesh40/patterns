/*
//Method 1
#include <stdio.h>
void main()
{
   int i,j,n;
   printf("Enter the Number of lines:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    	for(j=1;j<=i;j++)
        		printf("%s","*");
    	printf("\n");
   }
}


Program(Method 2 – Best Method):
#include <stdio.h>
void main()
{
   char* c = "******************";
   int i,n;
   printf("Enter the Number of lines:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   	printf("%*.*s\n",i,i,c);
}

*/