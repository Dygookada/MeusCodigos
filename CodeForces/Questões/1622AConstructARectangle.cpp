#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf(" %d",&n);
	for( int i=0; i<n; i++)
	{
		int l[3];
		scanf(" %d %d %d",&l[0],&l[1],&l[2]);
		
		bool rec = false;
		for (int i = 0; i < 3; ++i)
			rec |= (l[i] == l[(i + 1) % 3] + l[(i + 2) % 3]);
		for (int i = 0; i < 3; ++i) 
			if (l[i] % 2 == 0)
				rec |= (l[(i + 1) % 3] == l[(i + 2) % 3]);
		if(rec)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
