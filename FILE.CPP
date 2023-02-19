/*Write a program to find out whether a student is pass or fail.
If it requires total 40% and at lest 33% in each subject to pass.
Assume three subjects and take marks as an input from user.
*/

#include<stdio.h>
#include<conio.h>

int main(){
int physics, biology, chemistry,Total;

printf("Enter Physics Marks :");
scanf("%d", &physics);

printf("Enter Chemistry Marks :");
scanf("%d", &chemistry);

printf("Enter Biology Marks :");
scanf("%d", &biology);

Total=physics+chemistry+biology;

if((Total<40)||(physics<34)||(chemistry<34)||(biology<34))
{
printf("Your total percentage is %d and you are fail", Total);
}
else
{
printf("You are pass");
}
return 0;
}