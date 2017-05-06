
	Program(Method 1):
#include <stdio.h>
void main()
{
   int i,j,k,n;
   printf("Enter the Number of lines:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    for(k=1;k<=n-i;k++)
        printf("%s"," ");
    for(j=1;j<=i;j++)
        printf("%s","*");
    printf("\n");
   }
}

Program(Method 2 – Better than method 1)
#include <stdio.h>
void main()
{
   int i,j,n;
   printf("Enter the Number of lines:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    printf("%*s",n-i,"");
    for(j=1;j<=i;j++)
        printf("%s","*");
    printf("\n");
   }
}
Program(Method 3 – Best Method)
#include <stdio.h>
void main()
{
   char* c = "******************";
   int i,n;
   printf("Enter the Number of lines:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
       printf("%*.*s\n",n,i,c);
}

