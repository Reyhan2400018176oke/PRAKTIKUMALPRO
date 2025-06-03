#include<iostream>
using namespace std;

int main(){
	int totalangka;
	cout<<"Masukkan jumlah angka : ";
	cin>>totalangka;
	int angka[totalangka];
	
	for(int i=0;i<sizeof(angka)/sizeof(*angka);i++){
		cout<<"masukkan angka ke-"<<i+1<<" : ";
		cin>>angka[i];
	}
	cout<<endl;
	cout<<"Angka yang anda masukkan ";
	for(int i=0;i<sizeof(angka)/sizeof(*angka);i++){
		cout<<angka[i]<<", ";
	}
}
