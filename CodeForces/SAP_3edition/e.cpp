#include <bits/stdc++.h>
using namespace std;

int mdc( int a, int b)
{
	if (b == 0)
      return a;
	else
      return mdc(b, a % b);
}

int main()
{
	int n,t;
	scanf("%d %d",&n,&t);
	double ohms,farad,cap[n],res[n];
	for( int i=0; i<n; i++)
	{
		cin>>ohms>>farad;
		cap[i]=ohms*farad;
	}
	bool aprovado=true;
	for( int i=1; i<n; i++)
	{
		if(cap[i]/cap[i-1]!=double(int(cap[i]/cap[i-1])) && int(cap[i]/cap[i-1])%2!=0)
			aprovado=false;
		
		res[i]=double(int(cap[i]/cap[i-1]));
	}
	
	bool reteste=true;
	if(aprovado)
	{
		int base=res[0];
		for( int i=1; i<n; i++)
		{
			if(base*res[i]/mdc(base,res[i])>t)
				reteste=false;
		}
		if(reteste)
			cout<<"APROVADO\n";
		else
			cout<<"REPROVADO\n";
	}
	else
		cout<<"REPROVADO\n";
}
