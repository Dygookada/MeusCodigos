#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n,m;
	while( scanf(" %d%d",&n,&m) && (n!=0 || m!=0))
	{
		vector<int> pes;
		int max=n*m,ind=0,qt=1,aux;
		for( int i=0; i<max; i++)
		{
			scanf(" %d",aux);
			pes.push_back(aux);
		}
		sort( pes.begin(), pes.end());
		int a,b;
		
		
	}
}
