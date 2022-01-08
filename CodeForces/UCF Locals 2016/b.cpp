#include <bits/stdc++.h>
using namespace std;
//Phoneme Palindromes
int main()
{
	int n,p,q;
	string palin;
	string aux;
	cin>>n;
	for( int i=0; i<n; i++)
	{
		cin>>p;
		char let[26],c;
		for( int j=0; j<26; j++)
			let[j]='a'+j;
		for( int j=0; j<p; j++)
		{
			cin>>c;
			cin>>let[c-'a'];
		}
		cin>>q;
		printf("Test case #%d:\n",i+1);
		for( int j=0; j<q; j++)
		{
			cin>>aux;
			palin="";
			for( int k=0; k<aux.size(); k++)
				palin+=let[aux[k]-'a'];
			

			int d=palin.size()/2,t=palin.size()-1,b=1;
			for( int k=0; k<d; k++)	
			{
				//~ printf("%c %c\n",palin[k],palin[t-k]);
				if(palin[k]!=palin[t-k])
					b=0;
			}
			cout<<aux<<" ";
			if(b==1)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		cout<<endl;
	}
}
