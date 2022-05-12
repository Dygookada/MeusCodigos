#include <bits/stdc++.h>
using namespace std;

#define maxn 1000
bool crivo[maxn];
vector<int> pri;
void primos()
{
	for( int i=2; i<maxn; i++)
	{
		if(crivo[i]==false)
		{
			pri.push_back(i);
			for( int j=i*i; j<maxn; j+=i)
				crivo[j]=true;
		}
	}
	
}

int main()
{
	int n;
	cin>>n;
	for( int i=0; i<n; i++)
	{
		string aux;
		string x;
		cin>>aux>>x;
		int a1,a2;
		a1=a2=0;
		for( int j=0; j<aux.size(); j++)
			if(aux[j]=='a')
				a1++;
		for( int j=0; j<x.size(); j++)
			if(x[j]=='a')
				a2++;
			
		if(a1&&a2 && x.size()!=1)
			cout<<-1<<endl;
		else 
			cout<<a1*(x.size())<<endl;
	}
}
