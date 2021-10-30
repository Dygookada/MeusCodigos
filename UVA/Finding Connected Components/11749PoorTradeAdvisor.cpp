#include <bits/stdc++.h>
using namespace std;

#define maxn 501
#define inf 999
#define f first
#define s second
typedef pair<int,int> ii;
typedef pair<int,long long> il;
typedef pair<long long,long long> ll;
typedef pair<int,ii> iii;
int cavi[]={-2,-1,1,2,2,1,-1,-2},cavj[]={1,2,2,1,-1,-2,-2,-1};
int di[]={-1,-1,0,1,1,1,0,-1},dj[]={0,1,1,1,0,-1,-1,-1};

int main()
{
	//~ freopen("C:/Users/diogo okada/Desktop/entrada","r",stdin);
	//~ freopen("C:/Users/diogo okada/Desktop/saida","w",stdout);
	int m,n,a,b,d,prov,cont;
	vector< il > adjlist[maxn];
	set<int> cidade;
	long long med;
	bool vis[maxn];
	while(scanf("%d%d",&n,&m) && n && m )
	{
		prov=0;
		for( int i=0; i<maxn; i++)
			vis[i]=true,adjlist[i].clear();
		for( int i=0; i<m; i++)
		{
			scanf("%d%d%d",&a,&b,&d);
			adjlist[a-1].push_back(ii(b-1,d));
			adjlist[b-1].push_back(ii(a-1,d));
		}
		queue<int> q;
		//~ cout<<"tentado"<<endl;
		for( int j=0; j<n; j++)
		{
			
			if(vis[j])
			{
				cidade.clear();
				med=0,cont=0;
				q.push(j);
				
				while(!q.empty())
				{
					
					int u=q.front();
					//~ cout<<u<<endl;
					q.pop();
					vis[u]=false;
					cidade.insert(u);
					int ta=adjlist[u].size();
					for( int i=0; i<ta; i++)
					{
						il v=adjlist[u][i];
						double asd=med/cont,bsd=(med+v.s)/(double)(1+ cidade.size());
						
						if(vis[v.f] && asd<bsd)
						{
							printf("%d-%d med %d: %lf -> %lf\n",u+1,v.f+1,cidade.size(),asd,bsd);
							med+=v.s;
							vis[u]=false;
							q.push(v.f);
						}
					}
				}
				cont=cidade.size();
				prov=max(prov,cont);
			}
		}
		cout<<prov<<endl;
	}	
}
