#include<iostream>
using namespace std;

int main(){
	int n;
	int hasil;
	
	cout<<"Masukkan Angka : ";
	cin>>n;
	
	if(n<0){
		cout<<"Faktorial tidak didefinisikan untuk angka negatif."<<endl;
	}else{
		for(int i=1;i<=n;i++){
			hasil*=i;
		}
		cout<<"Faktorial dari "<<n<<" adalah "<<hasil<<endl;
	}
	return 0;
}
