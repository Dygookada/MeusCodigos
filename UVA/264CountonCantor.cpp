#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,cont,i;
	while(scanf(" %d",&n) != EOF)
	{
		cont=0;
		for( i=1; cont+i<n; i++)
		{
			cont+=i;
		}
		a=n-cont-1;
		//~ printf("%d",cont);
		if(i%2==0)
			printf("TERM %d IS %d/%d\n",n,1+a,i-a);
		else
			printf("TERM %d IS %d/%d\n",n,i-a,1+a);
	}
}
