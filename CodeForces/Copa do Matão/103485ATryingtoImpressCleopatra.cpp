#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define pi 3.14159265
#define graus 180/pi

typedef pair<double,double> dd;

struct FenwickTree {
    vector<double> bit;  // binary indexed tree
    int n;

    FenwickTree(int n) {
        this->n = n;
        bit.assign(n, 0);
    }

    FenwickTree(vector<double> a) : FenwickTree(a.size()) {
        for (size_t i = 0; i < a.size(); i++)
            add(i, a[i]);
    }
	
    int sum(int r) {
        int ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret += bit[r];
        return ret;
    }

    int sum(int l, int r) {
        return sum(r) - sum(l - 1);
    }

    void add(int idx, int delta) {
        for (; idx < n; idx = idx | (idx + 1))
            bit[idx] += delta;
    }
};


int main()
{
	int n;
	scanf(" %d",&n);
	dd vet[n];
	vector<double> dist;
	vector<double> ang;
	
	double adj,opo;
	//~ dist.push_back(0);
	//~ ang.push_back(0);
	scanf(" %lf %lf",&vet[0].fi,&vet[0].se);
	for( int i=1; i<n; i++)
	{
		
		scanf(" %lf %lf",&vet[i].fi,&vet[i].se);
		adj = vet[i].fi - vet[i-1].fi;
		opo = vet[i].se - vet[i-1].se;
		dist.push_back(sqrt(adj*adj+opo*opo));
		ang.push_back(atan(opo/adj)*graus);
	}
	adj = vet[0].fi - vet[n-1].fi;
	opo = vet[0].se - vet[n-1].se;
	dist.push_back(sqrt(adj*adj+opo*opo));
	ang.push_back(atan(opo/adj)*graus);
	FenwickTree ft(dist);
	
	for( int i=0; i<n; i++)
		printf("%.8lf %.8lf\n",dist[i],ang[i]);
} 
