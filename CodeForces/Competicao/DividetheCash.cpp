#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,aux,pes=0;
	double valor,dinheiro;
	vector<int> times;
	cin>>n>>valor;
	for( int i=0; i<n; i++)
	{
		cin>>aux;
		times.push_back(aux);
		pes+=aux;
	}
	dinheiro=valor/pes;
	for( int i=0; i<n; i++)
	{
		cout<<times[i]*dinheiro<<endl;
	}
}
