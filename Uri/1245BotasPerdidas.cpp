#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int d[n],e[n],id=0,ie=0,aux,cont=0;
		char tipo;
		for( int i=0; i<n; i++)
		{
			cin>>aux>>tipo;
			if( tipo=='D')
			{
				d[id]=aux;
				id++;
			}else{
				e[ie]=aux;
				ie++;
			}
		}
		sort(d,d+id);
		sort(e,e+ie);
		int iid=0,iie=0;
		while(iid<id && iie<ie)
		{
			if(d[iid]>e[iie])
			{
				iie++;
			}else if(d[iid]<e[iie]){
				iid++;
			}else{
				cont++;
				iie++,iid++;
			}
		}
		cout<<cont<<endl;
	}
}
