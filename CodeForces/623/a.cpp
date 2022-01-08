#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,n,dif;
	scanf(" %d",&n);
	for( int i=0; i<n; i++)
	{
		scanf(" %d%d",&a,&b);
		dif=a-b;
		if(dif==0)
			printf("0\n");
		else if(dif<0)
		{
			if( a%2==0)
			{
				if(b%2==0)
					printf("2\n");
				else
					printf("1\n");
			}
			else
			{
				if(b%2==0)
					printf("1\n");
				else
					printf("2\n");
			}
		}
		else
		{
			if( a%2==0)
			{
				if(b%2==0)
					printf("1\n");
				else
					printf("2\n");
			}
			else
			{
				if(b%2==0)
					printf("2\n");
				else
					printf("1\n");
			}
		}
			
	}
}
