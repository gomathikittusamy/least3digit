#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,j,len,temp=0,k=3;
clrscr();
printf("enter the number");
scanf("%s",a);
len=strlen(a);
for(i=0;i<len;i++)
for(j=0;j<=len;j++)
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
printf("least number");
for(i=0;i<len-k;i++)

printf("%c",a[i]);
getch();
}
