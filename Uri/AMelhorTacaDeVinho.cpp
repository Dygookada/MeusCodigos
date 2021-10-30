#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	while( cin>>n)
	{
		int vazio=0;
		for( int i=0; i<n; i++)
		{
			for( int j=0; j<vazio; j++)
				cout<<" ";
			for( int j=0; j<n-2*vazio; j++)
				cout<<"X";
			for( int j=0; j<vazio; j++)
				cout<<" ";
			cout<<endl;
			if(vazio+1<(n/2+1))
				vazio++;
		}
	}
}
