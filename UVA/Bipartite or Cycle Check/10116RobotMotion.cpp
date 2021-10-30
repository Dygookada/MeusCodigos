#include <bits/stdc++.h>
using namespace std;

#define maxn 50
#define inf 999
#define f first
#define s second
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
int cavi[]={-2,-1,1,2,2,1,-1,-2},cavj[]={1,2,2,1,-1,-2,-2,-1};
int ddi[]={-1,-1,0,1,1,1,0,-1},ddj[]={0,1,1,1,0,-1,-1,-1};
int di[]={-1,0,1,0},dj[]={0,1,0,-1};




int main()
{
	//~ freopen("C:/Users/diogo okada/Desktop/entrada","r",stdin);
	//~ freopen("C:/Users/diogo okada/Desktop/saida","w",stdout);
	int mapa[maxn][maxn];
	char aux;
	bool vis[maxn][maxn];
	int r,c,ini;
	while(scanf("%d%d%d",&r,&c,&ini) && (r || c || ini))
	{
		for( int i=0; i<r; i++)
		{
			for( int j=0; j<c; j++)
			{
				scanf(" %c",&aux);
				if(aux=='N')
					mapa[i][j]=0;
				else if(aux=='W')
					mapa[i][j]=3;
				else if(aux=='E')
					mapa[i][j]=1;
				else if(aux=='S')
					mapa[i][j]=2;
				vis[i][j]=true;
			}
		}
		vector<ii> ciclo;
		queue<ii> q;
		q.push(ii(0,ini-1));
		int rep=0,x,y;
		bool deu=false;
		while(!q.empty())
		{
			ii u=q.front();
			q.pop();
			vis[u.f][u.s]=false;
			ciclo.push_back(u);
			int d=mapa[u.f][u.s];
			x=u.f+di[d],y=u.s+dj[d];
			if( x<0 || x>=r || y<0 || y>=c )
			{//saiu
				break;
			}
				
			if(!vis[x][y])
			{//ciclo
				deu=true;
				int ta=ciclo.size();
				for( rep=0; rep<ta && ciclo[rep]!=ii(x,y); rep++);
					//~ printf("%d,%d %d,%d\n",ciclo[rep].f,ciclo[rep].s,x,y);
				break;
			}else
			{
				q.push(ii(x,y));
			}
			
		}
		//~ for( int i=0; i<ciclo.size(); i++)
			//~ printf("%d-%d\n",ciclo[i]);
		if(deu)
			printf("%d step(s) before a loop of %d step(s)\n",rep,ciclo.size()-rep);
		else
			printf("%d step(s) to exit\n",(int)ciclo.size());
	} 
}
