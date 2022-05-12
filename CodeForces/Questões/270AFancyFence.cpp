#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,a;
	vector<int> regular;
	double ang;
	for( int i=1; i<180; i++)
	{
		ang=360/(180-i);
		if((int)ang==ang)
			regular.push_back(ang);
	}
	for( int i=0; i<regular.size(); i++)
		printf("%d\n",regular[i]);
	scanf(" %d",&t);
	
	for( int i=0; i<t; i++)
	{
		scanf(" %d",&a);
		
	}
}
