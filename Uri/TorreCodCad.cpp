#include <iostream>
using namespace std;

int linha[1010],coluna[1010];

int main() {
  int n,matriz[1010][1010],soma1=0,soma=0,local=0,aux;
	cin>>n;
	for( int i=0; i<n; i++){
		for( int j=0; j<n; j++){
			cin>>aux;
			matriz[i][j]=aux;
			linha[i]+=aux;
			coluna[j]+=aux;
		}	
	}
	for( int k=0; k<n; k++){
		cout<<linha[k]<<'-'<<k<<'-'<<coluna[k]<<endl;
	}
	/*while( local<(n*n) ){
		for( int i=0; i<n; i++){
			soma1+=matriz[local/n][i]+matriz[i][local%n];
		}
		soma1=soma1-(2*matriz[local/n][local%n]);
		if(soma1>soma){
			soma=soma1;
		}
		local+=1;
		soma1=0;
	}
	cout<<soma<<endl;*/
}
