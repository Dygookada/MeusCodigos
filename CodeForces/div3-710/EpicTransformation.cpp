#include <bits/stdc++.h>
using namespace std;



int main()
{
	int t,n;
	
	cin>>t;
	for( int i=0; i<t; i++)
	{
		cin>>n;
		long long aux;
		vector<long long> repetido;
		for( int j=0; j<n; j++)
		{
			cin>>aux;
			if(repetido.empty())
			{
				repetido.insert(repetido.begin(),aux);
			}
			else
			{
				if(repetido[0]!=aux)
					repetido.erase(repetido.begin());
				else
					repetido.insert(repetido.begin(),aux);
			}
		}
		cout<<repetido.size()<<endl;
	}
}
