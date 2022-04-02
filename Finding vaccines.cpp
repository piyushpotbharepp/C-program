/*
You are creating a vaccine to fight against a worldwide novel pandemic virus. 
A vaccine contains a weakened virus that is injected inside people to produce 
antibodies to let it fight against the virus. The study of interaction among 
RNA of various viruses is quite necessary for this. An RNA consists of four 
types of molecules Guanine (G), Adenine (A), Cytosine (C), and Uracil (U).
*/

#include<stdio.h>
int main()
{
	int n, n1, c=0, g=0,lop=0,in=0,pos=0;
	scanf("%d",&n);
	scanf("%d",&n1);
	char a[1000];
	scanf("%s", a);
	for(int i =0; i < n1; i++)
	{
		if(a[i]=='G')
		{
			g++;
		}
		if(a[i]=='C')
		{
			c++;
		}
	}
	while(n--)
	{
		int l, C=0, G=0,count=0;
		char v[1000];
		scanf("%d",&l);
		scanf("%s", v);
		for(int i =0; i < l; i++)
		{
			if(v[i]=='G')
			{
				G++;
			}
			if(v[i]=='C')
			{
				C++;
			}
		}
		count=G*c+C*g;
		pos++;
		if(count>lop)
		{
			lop=count;
			in=pos;
		}
	}
	printf("%d",in);
	return 0;
} 