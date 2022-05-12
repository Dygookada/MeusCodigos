#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

int main()
{
	string s;
	int n;
	scanf("%d",&n);
	for( int i=0; i<n; i++)
	{
		string x,s="";
		int ta;
		int v;
		cin>>x;cin>>ta;
		for( int j=0; j<x.size(); j++)
		{
			
			if(x[j]>='0' && x[j]<='9')
			{
				v=x[j]-'0';
				while(j+1<x.size() && x[j+1]=='0' && v<ta)
				{
					j++,v*=10;
					//~ cout<<v<<endl;
				}
				if(v>ta || s.size()>ta)	break;
				for( int a=0; a<v; a++)
					s+=x[j+1];
				j++;
			}
			else
				s+=x[j];
		}
		
		//~ cout<<s;
		if(s.size()>ta || v>ta)
			cout<<"unfeasible"<<endl;
		else
			cout<<s<<endl;
	}
}
