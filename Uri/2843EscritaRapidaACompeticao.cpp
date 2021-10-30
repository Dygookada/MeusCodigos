#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
typedef pair<long long,long long> ii;

int main()
{
	int n,aux;
	cin>>n;
	long long r[n],e[n],lugar[n];
	for( int i=0; i<n; i++)
	{
		cin>>r[i]>>e[i];
		lugar[i]=1;
	}
		
	int dois=1;
	aux=n;
	while(aux/2)
	{
		dois++,aux=aux/2;
	}
	
	//~ cout<<dois<<endl;
	
	string linha;
	getchar();
	getline(cin,linha);
	//~ cout<<linha<<endl;
	int res[dois][n],m;
	
	for( int i=0; i<n; i++)
		res[0][i]=i;
		
	for( int i=1; i<dois; i++)
	{
		m=pow(2,dois-i);
		int a,b;
		for( int j=0; j<m; j+=2)
		{
			a=res[i-1][j];
			b=res[i-1][j+1];
			if(r[a]+e[a]*linha.size()*i <= r[b]+e[b]*linha.size()*i)
			{
				res[i][j/2]=a;
				lugar[a]++;
			}
			else
			{
				res[i][j/2]=b;
				lugar[b]++;
			}
		}
	}
	
	for( int i=0; i<n; i++)
	{
		if(i>0)
			cout<<" ";
		cout<<lugar[i];
	}
	cout<<endl;
}
