#include <bits/stdc++.h>
using namespace std;



int main()
{
	int t,n,k;
	cin>>t;
	char vet[51];
	for( int a=0; a<t; a++)
	{
		int res=0,ini,fim;
		cin>>n>>k;
		for( int i=0; i<n; i++)
			cin>>vet[i];
		
		int x;
		for( x=0; x<n && vet[x]=='.'; x++);
		ini=x;
		if(ini<n)
		{
			vet[ini]='x';
			res++;
			
			for( x=n-1; x>=0 && vet[x]=='.'; x--);
			fim=x;
			if(fim>=0 && vet[fim]!='x')
				vet[fim]='x',res++;
				
			while(fim-ini>k)
			{
				int i;
				for( i=k; i>=1 && vet[ini+i]!='*' && vet[ini+i]!='x'; i--);
				
				if(vet[ini+i]=='x')
					ini+=i;
				if(i>=0)
				{
					vet[ini+i]='x';
					res++;
					ini+=i;
				}
				else
					break;//n tem lugar mais pra por
				
			}
		}
		cout<<res<<endl;
	}
}
