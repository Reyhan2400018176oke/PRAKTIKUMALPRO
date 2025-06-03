#include<iostream>
using namespace std;

int main(){
	int angka[100];
	int index[100];
	int jumlah,atas,bawah;
	
	cout<<"Masukkan jumlah angka : ";
	cin>>jumlah;
	for(int i=0;i<jumlah;i++){
		cout<<"Masukkan angka ke-"<<i+1<<" : ";
		cin>>angka[i];
		index[i]=angka[i];
	}
	cout<<"Angka yang anda masukkan ";
	for(int i=0;i<jumlah;i++){
		cout<<angka[i]<<",";
	}cout<<endl;
	
	cout<<"Masukkan batas bawah : ";
	cin>>bawah;
	cout<<"masukkan batas atas : ";
	cin>>atas;
	
	for(int i=bawah;i<=atas;i++){
		cout<<angka[i]<<",";
	}
}
