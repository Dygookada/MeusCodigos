#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,b,c;
	while(cin>>n && n!=-1)
	{
		b=n%257,c=n%193;
		if(n%257==0 || n%193==0)
			cout<<"Bom\n";
		else 
			cout<<"So o ouro\n";
	}
}
