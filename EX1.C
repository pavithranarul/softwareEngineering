#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
 int a[10][10],b[10][10],m[10][10],i,j,p,q,r,s,k;
 char x[10],y[10];
 int t=0,f1=0,l,ain=0,bin=0;
 clrscr();
 printf("Enter a size of A matrix: \n");
 scanf("%d%d",&p,&q);
 printf("Enter a size of B matrix: \n");
 scanf("%d%d",&r,&s);
 if(q==r)
 {
   printf("Test case 1: Martrix multiplication can be done\nCase 1: Success\n" );
   printf("Enter the elements of Matrix A:\n");
   for(i=0;i<p;i++)
   {
     for(j=0;j<q;j++)
     {
       f1=0;
       ain=0;
       scanf("%s",x);
       l=strlen(x);
       while(x[ain++]!='\0')
       {
	if(x[ain]=='.')
	{
	  f1=1;break;
	}
       }
	if(f1==0)
       {a[i][j]=atoi(x);}
	else
	{t=1;}
     }
   }
   printf("Enter the elements of Matrix B:\n");
   for(i=0;i<r;i++)
   {
     for(j=0;j<s;j++)
     {
       f1=0;
       bin=0;
       scanf("%s",y);
       l=strlen(y);
       while(y[bin++]!='\0')
       {
	if(y[bin]=='.')
	{
	  f1=1;break;
	}
       }
	if(f1==0)
       {b[i][j]=atoi(y);}
	else
	{t=1;}
     }
   }
if(t==0)
{
 for(i=0;i<p;i++)
 {
  for(j=0;j<s;j++)
  {
   m[i][j]=0;
   for(k=0;k<q;k++)
   {
    m[i][j]+=a[i][j]*b[k][j];
   }
  }
 }
printf("The result of matrix multiplication is: \n");
for(i=0;i<p;i++)
{
 for(j=0;j<s;j++)
 {
  printf("%d\t",m[i][j]);
 }
printf("\n");
}
}
else{
printf("Test case#: Matrix multiplication is not possible \n one or more values is not an integer \n case3: Failure\n");
getch();
}
}
else
printf("Test case2: Matrix multiplication is not possible \n The columns of A matrix is not equal to rows of B matrix \n case2: Failures\n");
getch();
}
