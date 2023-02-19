/*Income Tax Calculation using code.
*/

#include<stdio.h>
#include<conio.h>

int main(){
float income, tax = 0;

printf("Enter Your Income :\n");
scanf("%f", &income);

if(income>=250000 && income<=500000)
{
    tax=tax+0.05*(income-250000);
}
if(income>=500000 && income<=1000000)
{
    tax=tax+0.20*(income-500000);
}
if(income>=1000000)
{
    tax=tax+0.30*(income-1000000);
}
pr9intf("Your net income tax to be paid is %f\n", tax);
return 0;
}