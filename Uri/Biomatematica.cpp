#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n;
	for( int i=0; i<n; i++)
	{
		cin>>m;
		int vet[m],rep=0,r=1,res=1,ind=0;
		for( int j=0; j<m; j++)
		{
			cin>>vet[j];
		}
		sort(vet, vet+m);
		rep=vet[0];
		for( int j=1; j<m; j++)
		{
			if(rep==vet[j])
				r++;
			else if(r>=res)
				res=r,r=1,ind=rep;
			rep=vet[j];
		}
		if(r>=res)
			res=r,r=1,ind=rep;
		cout<<ind<<endl;
		
	}
}
