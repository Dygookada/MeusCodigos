#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,c,m;
	cin>>t;
	for( int k=0; k<t; k++)
	{
		cin>>n>>c>>m;
		int andar[m],energia=0;
		for( int i=0; i<m; i++)
			cin>>andar[i];
		sort(andar,andar+m);
		for( int i=0; i<m; i+=c)
		{
			energia+=2*andar[m-i-1];
		}
		cout<<energia<<endl;
	}
}
