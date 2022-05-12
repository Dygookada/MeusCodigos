#include <bits/stdc++.h>
using namespace std;

int bispo(int** mat, int a, int b, int x, int y)
{
	int res=mat[x][y];
	for( int i=1; x-i>=0 && y+i<b; i++)
		res += mat[x-i][y+i];
	for( int i=1; x+i<a && y+i<b; i++)
		res += mat[x+i][y+i];
	for( int i=1; x+i<a && y-i>=0; i++)
		res += mat[x+i][y-i];
	for( int i=1; x-i>=0 && y-i>=0; i++)
		res += mat[x-i][y-i];
	return res;
}

int main()
{
	int t;
	cin>>t;
	for( int k=0; k<t; k++)
	{
		int a,b;
		cin>>a>>b;
		int* mat[a];
		for( int i=0; i<a; i++)
		{
			mat[i] = new int[b];
			for( int j=0; j<b; j++)
				cin>>mat[i][j];
		}
		int res = 0;
		for( int i=0; i<a; i++)
			for( int j=0; j<b; j++)
				res = max(res, bispo(mat,a,b,i,j));
		cout<<res<<endl;
	}
}
