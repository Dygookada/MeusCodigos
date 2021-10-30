#include <bits/stdc++.h>
using namespace std;

#define max 101
#define inf 123456789
#define f first
#define s second
typedef pair<int,int> ii;
typedef pair<int,ii> iii;

int cavi[]={-2,-1,1,2,2,1,-1,-2},cavj[]={1,2,2,1,-1,-2,-2,-1};
int di[]={-1,-1,0,1,1,1,0,-1},dj[]={0,1,1,1,0,-1,-1,-1};

bool compare( ii a, ii b)
{
	if(a.f>b.f || (a.f==b.f && a.s<b.s))
		return true;
	return false;
}

int main()
{
	//~ freopen("C:/Users/diogo okada/Desktop/entrada","r",stdin);
	//~ freopen("C:/Users/diogo okada/Desktop/saida","w",stdout);
	int t,n,k,id,alt,lar,com;
	scanf("%d",&t);
	for( int a=0; a<t; a++)
	{
		scanf("%d%d",&n,&k);
		vector<ii> presentes;
		for( int i=0; i<n; i++)
		{
			scanf("%d%d%d%d",&id,&alt,&lar,&com);
			presentes.push_back(ii(alt*lar*com,id));
		}
		sort(presentes.begin(),presentes.end(),compare);
		vector<int> res;
		for( int i=0; i<k; i++)
			res.push_back(presentes[i].s);
		sort(res.begin(),res.end());
		for( int i=0; i<k; i++)
		{
			if(i>0)
				cout<<" ";
			cout<<res[i];
		}
		cout<<endl;
	}
}
