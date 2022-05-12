#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b,cake;
	scanf(" %d",&n);
	cake=INT_MAX; 
	for( int i=0 ; i<n; i++)
	{
		scanf(" %d %d",&a,&b);
		cake = min(cake,b/a);
	}
	printf("%d\n",cake);
}
