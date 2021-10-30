#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int bombom,meu,erros,certos;
	while( cin>>bombom && bombom!=0)
	{
		erros=0,certos=0;
		for( int i=0; certos<bombom; i++)
		{
		
			for( int j=0; j<3; j++)
			{
				scanf("*%d",&meu);
				if(meu==j)
				{
					certos++;
				}
			}
			erros++;
			printf("%d##",erros);
		}
		printf("%d\n",erros);
	}
}
