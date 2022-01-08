#include <bits/stdc++.h>
using namespace std;


#define max 51
#define inf 123456789
#define f first
#define s second
typedef pair<int,int> ii;
typedef pair<int,ii> iii;

int main()
{
	int n,games,points,v,e,d;
	cin>>n;
	for( int i=1; i<=n; i++)
	{
		cin>>games>>points;
		v=points/3;
		e=points-v*3;
		d=games-(v+e);
		printf("Team #%d\n",i);
		printf("Games: %d\n",games);
		printf("Points: %d\n",points);
		printf("Possible records:\n");
		printf("%d-%d-%d\n",v,e,d);
		while(v>0 && d>1)
		{ 
			v--;
			d-=2;
			e+=3;
			printf("%d-%d-%d\n",v,e,d);
		}
		cout<<endl;
	}
}
