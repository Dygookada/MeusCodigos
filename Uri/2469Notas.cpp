#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n,aux,maior,ind,m,i;
	cin>>n;
	int vet[n];
	for( int j=0; j<n; j++)
	{
		cin>>aux;
		vet[j]=aux;
	}
	sort(vet,vet+n);
	m=1,maior=1,ind=0,aux=vet[0];
	for( i=1; i<n; i++)
	{
		//~ cout<<vet[i]<<" ";
		if(aux==vet[i])
		{
			m++;
		}else{
			if(maior<=m)
			{
				maior=m;
				ind=i-1;
			}
			m=1;
		}
		aux=vet[i];
	}
	if(maior<=m)
	{
		maior=m;
		ind=i-1;
	}
	cout<<vet[ind]<<endl;
}
