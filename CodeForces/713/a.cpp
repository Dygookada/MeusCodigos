#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;

vector<int> idade;
vector<int> nome;
vector<bool> vis;
vector<int> adj[510];
int menor;

int main()
{
	int n,t,num1,aux,cont1,cont2,ind1,ind2;
	cin>>n;
	for( int i=0; i<n; i++)
	{
		ind2=cont1=cont2=0;
		cin>>t;
		cin>>num1;
		ind1=1;
		for( int j=1; j<t; j++)
		{
			cin>>aux;
			if(num1==aux)
				cont1++,ind1=j+1;
			else 
				cont2++,ind2=j+1;

		}
		if(cont1<cont2)
			cout<<ind1<<endl;
		else
			cout<<ind2<<endl;
	}
}
