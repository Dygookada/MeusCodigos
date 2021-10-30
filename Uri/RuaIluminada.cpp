#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,fim,dist,ind,erro=0;
	cin>>n>>fim;
	int casa[n+1];
	for( int i=0; i<n; i++)
	{
		cin>>casa[i];
	}
	casa[n]=fim;
	dist=fim-1;
	for( int i=0; i<n-1; i++)
	{
		if(dist>casa[i+2]-1-casa[i])
		{
			dist=casa[i+2]-1-casa[i];
			ind=i;
		}
	}
	erro=dist*(n-ind-1)+casa[ind];
	if(erro>fim)
	{
		if((erro-fim)%n!=0)
			dist--;
		dist-=(erro-fim)/n;
	}
	cout<<dist<<endl;
}
