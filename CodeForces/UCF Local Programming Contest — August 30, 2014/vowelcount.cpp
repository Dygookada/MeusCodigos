#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
typedef pair<int,int> ii;
typedef pair<int,ii> iii;

int main()
{
	int vogal=0, conso=0, n;
	string palavra;
	cin>>n;
	for( int i; i<n; i++)
	{
		cin>>palavra;
		vogal=0,conso=0;
		int ta=palavra.size();
		for( int i=0; i<ta; i++)
		{
			if(palavra[i]=='a' || palavra[i]=='e' || palavra[i]=='i' || palavra[i]=='o' || palavra[i]=='u')
				vogal++;
			else
				conso++;
		}
		if(vogal>conso)
			cout<<palavra<<endl<<"1"<<endl;
		else
			cout<<palavra<<endl<<"0"<<endl;
	}
}
