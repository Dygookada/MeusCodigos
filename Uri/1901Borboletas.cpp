#include <iostream>
#include <set>
#include <stdio.h>
using namespace std;

int main()
{
	//~ freopen("entrada","r",stdin);
	int n,forest[220][220],x,y;
	set<int> st;
	cin>>n;
	for( int i=0; i<n; i++)
	{
		for( int j=0; j<n; j++)
		{
			cin>>forest[i][j];
		}
	}
	for( int i=0; i<2*n; i++)
	{
		cin>>x>>y;
		st.insert(forest[x-1][y-1]);
	}
	cout<<st.size()<<endl;
}
