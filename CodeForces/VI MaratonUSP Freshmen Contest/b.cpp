#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
#define f first
#define s second
string a,b;


int lcs( int x, int y)
{
	int pd[x+1][y+1];
	
	for (int i=0; i<=x; i++)
    {
        for (int j=0; j<=y; j++)
        {
            if (i == 0 || j == 0)
                pd[i][j] = 0;
 
            else if (a[i-1] == b[j-1])
                pd[i][j] = pd[i-1][j-1] + 1;
 
            else
                pd[i][j] = max(pd[i-1][j],pd[i][j-1]);
        }
    }
	return pd[x][y];
}

int main()
{
	cin>>a>>b;
	cout<<lcs(a.size(),b.size())<<endl;
}
