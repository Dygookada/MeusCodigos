#include <bits/stdc++.h>
using namespace std;

typedef pair<double, double> dd;
#define fi first
#define se second

int main()
{
	int n,x,y;
	scanf(" %d%d",&x,&y);
	scanf(" %d",&n);
	dd pontos[n];
	double dist = 12345678910;
	
	for( int i=0; i<n; i++)
		scanf(" %lf%lf",&pontos[i].first,&pontos[i].second);
		
	for( int i=0; i<n; i++)
	{
		for( int j=i+1; j<n; j++)
		{
			double x1 = abs(pontos[i].fi-pontos[j].fi);
			double y1 = abs(pontos[i].se-pontos[j].se);
			cout<<x1<<" "<<y1<<" "<<sqrt((x1*x1+y1*y1))<<endl;
			dist = min(dist, sqrt((x1*x1+y1*y1))/2.0);
		}
	}
	cout<<dist<<endl;
}
