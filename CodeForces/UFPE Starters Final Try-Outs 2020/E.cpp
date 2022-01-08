#include <bits/stdc++.h>
using namespace std;

vector<int> num;

bool Numero_Perfeito( int n)
{
	int soma=1;
	
	for( int i=2; i*i<=n; i++)
	{//percorre ate a raiz
		if(n%i==0)
		{
							
			if(i*i!=n)//somo os dois divisores
				soma+=i+(n/i);
			else// somo so a raiz
				soma+=i;
		}
	}
	if(soma==n && n!=1)
	{//printf("%d\n",n);
		return true;
	}
		
	return false;
}

void Todos_Perfeitos()
{
	for( int i=6; i<1000000; i++)
	{
		if(Numero_Perfeito(i))
		{
			num.push_back(i);
		}
	}
}

int main()
{
	int n,m;
	Todos_Perfeitos();
	scanf(" %d",&n);
	for( int i=0; i<n; i++)
	{
		scanf(" %d",&m);
		int pos = upper_bound(num.begin(),num.end(),m) - num.begin();
		if(pos-1>=0)
			printf("%d\n",num[pos-1]);
		else
			printf("-1\n");
	}
}
