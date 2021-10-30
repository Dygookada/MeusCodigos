#include <bits/stdc++.h>
using namespace std;

typedef pair<int,string> ii;

bool compare(ii a,ii b)
{
	return a.first>b.first;
}
bool letras[27];

int main()
{
	int n,d,tecnica=0;
	vector<ii> band;
	string aux;
	
	scanf(" %d%d",&n,&d);
	cin.ignore();
	for(int i=0; i<n; i++)
	{
		getline(cin,aux);
		int ta=aux.size(),l=0;
		for( int j=0; j<ta; j++)
		{
			char let=tolower(aux[j]);
			if(let>='a' && let<='z')
			{
				l++;
			}
		}
		band.push_back(ii(l,aux));
	}
	sort(band.begin(),band.end(),compare);
	for (int i = 0,j=0; i < n && j<d; i++)
	{
		if(!letras[tolower(band[i].second[0])])
		{
			tecnica+=band[i].first;
			letras[tolower(band[i].second[0])]=true;
			j++;
		}
	}
	printf("%d\n",tecnica);
}
