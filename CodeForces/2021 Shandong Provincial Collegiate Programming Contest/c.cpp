#include <bits/stdc++.h>
using namespace std;

#define nd second
#define st first
#define iii(a,b,c) iii(a,ii(b,c))

typedef pair<int,int>ii;
typedef pair<int,ii>iii;
typedef vector<ii>vi;

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",n-1);
	if(n-1>1)
	{
		n--;
		for( int i=1; i<n; i++)
		{
			printf("%d %d\n",i,i+1);
		}
	}
}
