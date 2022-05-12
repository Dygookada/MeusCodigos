#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int n;cin>>n;
	//~ vector<string> p;
	map<string,int> mp;
	//~ map<string,int> ::iterator;
	string aux;
	//~ string p[aux.size()];
	vector<string> p;
	for( int i=0; i<n; i++)
	{
		cin>>aux;
		string x;
		int pa=aux.size();
		bool acho=true;
		for( int a=1; a<pa; a++)
		{
			//~ p[i]="";
			x="";
			for( int b=0; b<pa; b++)
			{
				//~ p[(a+b)%aux.size()]+=aux[b];
				x+=aux[(a+b)%pa];
			}
			//~ cout<<aux<<" "<<x<<(mp.find(x)!=mp.end())<<endl;
			if(mp.find(x)!=mp.end())
				acho=false;
		}
		if(mp.find(aux)!=mp.end())
				acho=false;
		if(acho)
			mp[aux]=1;
		else
			mp.find(x)->second++;
	}
	//~ int maior=0;
	//~ for( auto i : mp)
	//~ {
		//~ cout<<i.first<<" "<<i.second<<endl;
		//~ maior=max(maior,i.second);
	//~ }
	cout<<mp.size()<<endl;
}
