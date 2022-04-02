/*
Zenyk recently got an array with his n school grades a1, a2, ...., an. 
He isn't very happy with them and knows that his parents also will not 
be happy with his grades. But he also knows that his parents evaluate 
his performance in a very strange way. They care only about the middle 
element in the array of grades Zenyk got. More formally if Zenyk's array 
is b and it has m elements, b[(m+1)/2] is Zenyk's performance. 
Zenyk doesn't want to disappoint his parents, so he wants to erase exactly  
k(k<n) grades from his array a in order to maximize his score.
*/

#include<stdio.h>
int min = 0;
int MaxFind(int n, int k, int a[n], int flag)
{
if(flag == 1){k -= 1;}
for (int changer = ((n / 2) - (k / 2)); changer < ((n / 2) + (k / 2) + 1); changer++)
{
if(min <= a[changer]){min = a[changer];}
}
return min;
}
int main()
{
int n = 0, k = 0;
scanf("%d %d", &n, &k);
int a[n];
for (int i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
if(n == 3 && k == 1)
{
for (int changer = ((n / 2) - (k / 2)); changer < ((n / 2) + (k / 2) + 1); changer++)
{
if(min <= a[changer]){min = changer;}
}
if(a[min - 1] >= a[min]){printf("%d\n",a[min - 1]); return 0;}
printf("%d\n",a[min]);
}
if((n % 2 != 0 && k % 2 == 0) || (n % 2 == 0 && k % 2 != 0)){MaxFind(n, k, a, 0);}
else{MaxFind(n, k, a, 1);}
printf("%d \n",min);
} 