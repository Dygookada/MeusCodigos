#include <iostream>
#include <stdio.h>
using namespace std; 

int main()
{
	//~ freopen("saida","w",stdout);
	long long n,m,x;
	while(cin>>n>>m)
	{	
		x=n^m;
		cout<<x<<endl;
	}
}
