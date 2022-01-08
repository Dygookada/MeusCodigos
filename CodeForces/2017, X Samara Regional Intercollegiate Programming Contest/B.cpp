#include <bits/stdc++.h>
using namespace std;


#define f first
#define s second
#define maxn 200000

int main()
{
	string s,hap = "happiness";
	cin>>s;
	int ts=s.size(),th=hap.size(),i,j,cont=0;
	vector<int> letra;
	for( i=0; i<ts; i++)
	{
		for( j=0; j<th && s[i+j]==hap[j]; j++);
		
		if(j==th)
		{
			cont++;
			letra.push_back(i+1);
		}
	}
	if(cont==0)
	{
		cout<<"YES"<<endl;
		for( int a=0; a<ts; a++)
		{
			if(s[a]!='p')
			{
				letra.push_back(a+1);
			}
		}
		if((int)letra.size()>=2)
			cout<<letra[0]<<" "<<letra[1]<<endl;
		else
			cout<<1<<" "<<s.size()<<endl;
	}
	else if(cont==1)
	{
		cout<<"YES"<<endl;
		cout<<letra[0]+3<<" "<<letra[0]+6<<endl;
	}
	else if(cont==2)
	{
		cout<<"YES"<<endl;
		cout<<letra[0]<<" "<<letra[1]+1<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
