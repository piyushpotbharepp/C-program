// Write a program to enter elements to count even & odd values.

#include <stdio.h>
#include <conio.h>

void main()
{
int a[10],i,n,even=0,odd=0;
clrscr();
printf("Enter Size Of Array to Count Even & Odd : \n");
scanf("%d",&n);
printf("Enter the Elements : \n");

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(a[i]%2==0)
	{
		even++;
	}
	else
	{
		odd++;
	}
}
printf("Even Numbers in Array : %d\n",even);
printf("Odd Numbers in Array : %d\n",odd);


getch();
}