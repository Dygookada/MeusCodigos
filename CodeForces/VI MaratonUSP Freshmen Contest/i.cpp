#include <bits/stdc++.h>
using namespace std;

#define inf 123456789
#define max 100000

int main()
{
	int n;
	int pos[12],corrida[12],ncor=0;;
	
	pos[0]=15;
	pos[1]=12;
	
	for( int i=0; i<10; i++)
		pos[2+i]=10-i;
	
	for( int i=0; i<12; i++)
		corrida[i]=0;
	cin>>n;
	for( int i=0; i<12; i++)
	{
		if(n/pos[i]>0)
		{
			corrida[i]=n/pos[i];
			ncor+=corrida[i];
			n=n%pos[i];
		}
	}
	cout<<ncor<<endl;
	for( int i=0; i<12; i++)
	{
		if(corrida[i])
		{
			for( int j=0; j<corrida[i]; j++)
			{
				
				cout<<i+1<<" ";
				
			}
			
		}
	}
	cout<<endl;
}
