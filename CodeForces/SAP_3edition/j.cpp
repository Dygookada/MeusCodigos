#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second

typedef pair<int,int> ii;

int find( ii parent[], int I)
{
	if(parent[I]==I)
		return ii(I,0);
	
	return parent[I] = find(parent,parent[I]);
}

void uni( ii parent[], int x, int y)
{
	parent[find(parent,x)]=find(parent,y);
}

int main()
{
	
	int n,m,q;
}
