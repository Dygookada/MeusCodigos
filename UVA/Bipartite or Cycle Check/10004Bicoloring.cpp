#include <bits/stdc++.h>
using namespace std;

#define inf 999999

int main()
{
	int n,a,x,y;
	while( scanf("%d",&n) && n!=0)
	{
		vector<int> adjlist[210];
		scanf("%d",&a);
		for( int i=0; i<a; i++)
		{
			scanf(" %d%d",&x,&y);
			adjlist[x].push_back(y);
			adjlist[y].push_back(x);
		}
		queue<int> q;
		q.push(0);
		bool conflict=false;
		int color[n];
		for( int i=0; i<n; i++)
		{
			color[i]=inf;
		}
		color[0]=0;
		while( !q.empty() && !conflict )
		{
			int f=q.front(),ta=adjlist[f].size();
			q.pop();
			for( int i=0; i<ta; i++)
			{
				int no=adjlist[f][i];
				if( color[no] == inf )
				{
					color[no]=1-color[f];
					q.push(no);
				}else if( color[no] == color[f]){
					conflict=true;
					break;
				} 
			}
		}
		if(!conflict)
			printf("BICOLORABLE.\n");
		else
			printf("NOT BICOLORABLE.\n");
	}
}
