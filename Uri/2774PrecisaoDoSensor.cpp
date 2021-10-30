#include <bits/stdc++.h>
using namespace std;

int main()
{
	int qt,h,m;
	
	while(cin>>h>>m)
	{
		qt=h*60/m;
		double x[qt],res=0,med=0;
		for( int i=0; i<qt; i++)
		{
			cin>>x[i];
			med+=x[i];
		}
		med=med/qt;
		for( int i=0; i<qt; i++)
		{
			res+=(x[i]-med)*(x[i]-med);
		}
		printf("%.5lf\n",sqrt(res/(qt-1)));
	}
}
