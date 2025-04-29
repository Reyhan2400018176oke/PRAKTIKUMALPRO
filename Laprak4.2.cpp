#include<iostream>
using namespace std;

int faktorial(int n){
	if(n==0||n==1){
		return 1;
	}else{
		return n*faktorial (n-1);
	}
}

int main(){
	int n;
	cout<<"Masukkan angka : ";
	cin>>n;
	
	if(n<0){
		cout<<"Faktorial tidak didefinisikan untuk angka negatif."<<endl;
	}else{
		cout<<"Hasil dari faktorial "<<n<<" adalah"<<faktorial(n);
	}
	return 0;
}
