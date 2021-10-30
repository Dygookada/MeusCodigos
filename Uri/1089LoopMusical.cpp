#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n && n!=0)
	{
		int vet[n],picos=0;
		for( int i=0; i<n; i++)
		{
			cin>>vet[i];
		}
		for( int i=0; i<n; i++)
		{
			if(vet[i]>vet[(i-1+n)%n] && vet[i]>vet[(i+1)%n])
			{
				picos++;
				//~ cout<<vet[i]<<" # ";
			}else if(vet[i]<vet[(i-1+n)%n] && vet[i]<vet[(i+1)%n]){
				picos++;
				//~ cout<<vet[i]<<" * ";
			}
		}
		cout<<picos<<endl;
	}
}
