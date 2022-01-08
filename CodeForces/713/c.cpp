#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;

#define mod7 1000000007

vector<int>ndiv;
vector<int>factors;
vector<int>fat;

void primeFactors(int n) 
{ 
    // Print the number of 2s that divide n
    int ind=-1;
    if(n%2==0)
		ndiv.push_back(0),factors.push_back(2),ind++;
    while (n % 2 == 0) 
    {
		fat.push_back(2);
        ndiv[ind]++;
        n = n/2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i*i <= n; i = i + 2)
    {
		if(n%i==0)
			ndiv.push_back(0),ind++,factors.push_back(i);
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
			fat.push_back(i);
            ndiv[ind]+=1;
            n = n/i;
        }
    } 
    if(n>2)
		ndiv.push_back(1),factors.push_back(n),fat.push_back(n);
}

bool compare( int a, int b)
{
	return a>b;
}


int main()
{
	freopen("entrada","r",stdin);
	freopen("saida","w",stdout);
	vector<int>primos;
	for( int i=2; i<20; i++)
	{
		int aux=i,cont=0;
		for( int j=2; j<=i; j++)
			if(aux%j==0)
				cont++;
		if(cont<2)
			primos.push_back(i);
	}

	int n,d;
	cin>>n;
	while(n--)
	{
		cin>>d;
		ndiv.clear();
		factors.clear();
		primeFactors(d);
		
		// fazendo a correcao do 8
		//~ while(ndiv.size()>0 && factors[ind]==2 && ndiv[ind]>2 )
		//~ {
			
			//~ int a= pow(primos[ind],fat[ind]);
			//~ int b= pow(primos[ind+ndiv[ind]-1],fat[ndiv[ind]-1]-1);
			//~ if(a<b)
			//~ {
				//~ ndiv[ind]--;
				//~ fat.erase(fat.begin());
				//~ fat[0]+=fat[1];
			//~ }
			//~ ind++;
		//~ }
		
		sort(fat.begin(), fat.end(), compare);
		int ind=0;
		if(fat.size()>2)
		{
			for( int i=1; i+1<fat.size(); i++)
			{
				if(fat[i-1]==fat[i+1] && fat[i-1]==2)
				{
					int a = pow(primos[i-1],fat[i-1]);
					int b = pow(primos[i+1],fat[i+1]-1);
					//~ cout<<"entrou "<<a<<" "<<b<<"*";
					if(a<b || fat[i-1]+fat[i+1]>=fat[ind])
					{
						fat[i-1]+=fat[i+1];
						fat.erase(fat.begin()+i);
						i--;
						ind++;
					}
				}
			}
		}
		
		//~ for( int i=0; i<fat.size(); i++)
			//~ cout<<fat[i]<<" ";
		sort(fat.begin(), fat.end(), compare);
		
		//~ for( int i=0; i<fat.size(); i++)
			//~ cout<<fat[i]<<" ";
		long long resp=1;
		for( int i=0; i<fat.size(); i++)
		{
			long long aux=1;
			for( int j=1; j<fat[i]; j++)
				aux=(aux*primos[i])%mod7;
			resp=(resp*aux)%mod7;
		}
		fat.clear();
		cout<<resp<<endl;
	}
	
}
