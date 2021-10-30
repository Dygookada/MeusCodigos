#include <iostream>
using namespace std;

int main()
{
	string cpf;
	while(cin>>cpf)
	{
		int d1=0,d2=0,cont=1;
		for( int i=0; i<3; i++)
		{
			for( int j=4*i; j<4*i+3; j++)
			{
				d1+=(cpf[j]-48)*cont;
				
				d2+=(cpf[j]-48)*(10-cont);
				//~ cout<<d1<<" "<<d2<<endl;
				cont++;
			}
		}
		if((d1%11)%10==(cpf[12]-48) && (d2%11)%10==(cpf[13]-48))
		{
			cout<<"CPF valido\n";
		}else{
			cout<<"CPF invalido\n";
		}
	}
}
