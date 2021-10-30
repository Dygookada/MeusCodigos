#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
	//~ freopen("entrada","r",stdin);
	//~ freopen("saida","w",stdout);
	int n,aux;
	long long soma=0,ida=0,volta=0;
	bool achou=true;
	//~ vector<int> carneiro;
	scanf(" %d",&n);
	for( int i=0; i<n; i++)
	{
		scanf(" %d",&aux);
		soma+=aux;
		if(aux%2==0 && achou)
		{
			ida=i+1;
			achou=false;
		}
		if(achou)
		{
			volta++;
		}
		if(aux-1==0)
		{
			volta=0;
		}
	}
	if(ida>0)
	{
		cout<<ida<<" "<<soma-ida-volta<<endl;
	}else{
		cout<<n<<" "<<soma-n<<endl;
	}
}
