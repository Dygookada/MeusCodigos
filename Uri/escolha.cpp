#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	string n,m;
	int a=0,b=0;
	
	while(cin>>n>>m && (n!="0" || m!="0"))
	{
		while( n.size()>1)
		{
			a=0;
			stringstream aux;
			int tn=n.size();
			for(int i=0; i<tn; i++)
			{
				a+=n[i]-48;
			}
			aux<<a;
			n=aux.str();
			//cout<<n<<"**"<<endl;
		}
		while(m.size()>1)
		{
			b=0;
			stringstream aux;
			int tm=m.size();
			for( int i=0; i<tm; i++)
			{
				b+=(m[i]-48);
			}
			aux<<b;
			m=aux.str();
			//cout<<m<<endl;
		}
		//cout<<n<<" "<<m<<endl;
		if(n>m)
		{
			cout<<"1";
		}else if(n<m)
		{
			cout<<"2";
		}else{
			cout<<"0";
		}
		cout<<endl;
	}
}
