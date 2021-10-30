#include <bits/stdc++.h>
using namespace std;

int buscabin (int x, int v[], int e, int d)
{
 int meio = (e + d)/2;
 if (v[meio] == x)
 // retorna x, mas pode retornar o indice de x
    return x;
 if (e >= d)
    return -1; // não encontrado
 else
     if (v[meio] < x)
        return buscabin(x,v,meio+1,d);
     else
        return buscabin(x,v,e,meio-1);
}
bool compare(int a,int b)
{
	return a>b;
}

int main()
{
	int n,x,primos[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
	vector<int> exp;
	cin>>n;
	for( int i=0; i<n; i++)
	{
		cin>>x;
		int in=buscabin(x,primos,1,25),res=1;
		if(in!=-1)
		{
			for( int k=0; k<in-1; k++)
			{
				res=(res*2)%1000000007;
			}
		}else{
			int ind=0;
			while(x!=1)
			{
				while(x%primos[ind]==0)
				{
					exp.push_back(primos[ind]);
					x=x/primos[ind];
				}
				// como so pode ter tres termos ate o 100, 2*3*5*7=210, so verifico o 5
				if(ind>2)
				{
					exp[0]+=2*exp[3];
					exp.pop_back();
				}
					
				ind++;
			}
			sort(exp.begin(),exp.end(),compare);
			int ta=exp.size();
			res=1;
			
			for( int j=0; j<ta; j++)
			{
				for( int k=1; k<exp[j]; k++)
				{
					res=(res*primos[j])%1000000007;
				}
			}
			exp.clear();
		}
		cout<<res<<endl;
	}
	return 0;
}
