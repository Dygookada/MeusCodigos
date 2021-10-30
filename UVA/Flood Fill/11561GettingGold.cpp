#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

typedef pair<int,int> ii;

int main()
{
	//~ freopen("C:/Users/diogo okada/Desktop/Programinhas_do_Dyogo/UVA/entrada","r",stdin);
	//~ freopen("C:/Users/diogo okada/Desktop/Programinhas_do_Dyogo/UVA/saida","w",stdout);
	int r,c,di[]={-1,0,1,0},dj[]={0,1,0,-1};
	char mapa[60][60];
	bool vis[60][60];
	while( cin>>c>>r )
	{
		int coins=0;
		queue<ii> q;
		char aux;
		for( int i=0; i<r; i++)
		{
			for( int j=0; j<c; j++)
			{
				scanf(" %c",&aux);
				mapa[i][j]=aux;
				vis[i][j]=true;
				if(aux=='P')
					q.push(ii(i,j));
			}
		}
		while(!q.empty())
		{
			bool trap=true;
			ii f=q.front();
			if(mapa[f.f][f.s]=='G' && vis[f.f][f.s])
				//~ cout<<f.f<<" "<<f.s<<" = "<<coins++<<" "<<vis[f.f][f.s]<<endl;
				coins++;
			vis[f.f][f.s]=false;
			
			q.pop();
			for( int i=0; i<4; i++)
			{
				int x=f.f+di[i],y=f.s+dj[i];
				if(x>=0 && y>=0 && x<r && y<c && mapa[x][y]=='T')
					trap=false;
			}
			for( int i=0; i<4; i++)
			{
				int x=f.f+di[i],y=f.s+dj[i];
				if(x>=0 && y>=0 && x<r && y<c && mapa[x][y]!='#' && vis[x][y] && trap)
				{
					q.push(ii(x,y));
				}
			}
		}
		
		
		printf("%d\n",coins);
		//~ int moeda=0;
		//printa o mapa com o caminho do lado
		//~ for( int i=0; i<r; i++)
		//~ {
			//~ for( int j=0; j<c; j++)
			//~ {
				//~ printf("%c",mapa[i][j]);
			//~ }
			//~ for( int j=0; j<c; j++)
			//~ {
				//~ if(vis[i][j])
				//~ {
					//~ printf("%c",mapa[i][j]);
				//~ }
				//~ else
				//~ {
					//~ if(mapa[i][j]=='G')
						//~ printf("%d",moeda++);
					//~ else
						//~ printf("@");
				//~ }
			//~ }
			//~ printf("\n");
		//~ }
	}
	
}
