#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main(){
	int n,b;
	while(scanf(" %d%d",&n,&b) && n!=0 && b!=0)
	{
		int bolas[b],res[n+1],numero=0,aux;
		for( int i=0; i<b; i++)
		{
			scanf(" %d",&aux);
			bolas[i]=aux;
		}
		for( int i=0; i<=n; i++){
			res[i]=0;
		}
		for( int i=0; i<b; i++)
		{
			for( int j=0; j<b; j++)
			{
				aux=abs(bolas[i]-bolas[j]);
				res[aux]++;
			}
		}
		for( int i=0; i<=n; i++)
		{
			if(res[i]>=1)
			{
				numero++;
			}
		}
		if(numero==n){
			cout<<"Y"<<endl;
		}else{
			cout<<"N"<<endl;
		}
	}

}
