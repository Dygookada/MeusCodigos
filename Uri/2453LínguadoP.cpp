#include <iostream>
using namespace std;

int main()
{
	string palavra;
	int cont=0;
	while(cin>>palavra)
	{
		if(cont!=0)
			cout<<" ";
		int ta=palavra.size();
		for( int i=1; i<ta; i+=2)
		{
			cout<<palavra[i];
		}
		cont++;
	}
	cout<<endl;
}
