#include<iostream>
using namespace std;

int main(){
	string matkul[100];
	int jumlah,atas,bawah;
	
	cout<<"Masukkan Jumlah mata kuliah : ";
	cin>>jumlah;
	cout<<"Masukkan nama mata kuliah : "<<endl;
	for(int i=0;i<jumlah;i++){
		cout<<"Mata kuliah ke-"<<i<<" : ";
		cin>>matkul[i];
	}
	cout<<endl;
	cout<<"cetak dari depan : "<<endl;
	for(int i=0;i<jumlah;i++){
		cout<<matkul[i]<<" ,";
	}
	cout<<endl;
	cout<<"cetak dari belakang : "<<endl;
	for(int i=4;i>=0;i--){
		cout<<matkul[i]<<" ,";
	}
	cout<<endl;
	cout<<endl;
	cout<<"Masukkan batas bawah\t: ";
	cin>>bawah;
	cout<<"masukkan batas atas\t: ";
	cin>>atas;
	cout<<endl;
	cout<<"cetak index dari "<<bawah<<" sampai "<<atas<<" : "<<endl;
	for(int i=bawah;i<=atas;i++){
		cout<<matkul[i]<<",";
	}
}
