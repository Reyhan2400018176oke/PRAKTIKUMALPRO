#include<iostream>
using namespace std;

int main(){
	int nomor[5];
	string judul[6]={"","Spongbob","upin-ipin","Ultramen","Onepiece","Naruto"};
	int index[5];
	
	cout<<"Masukkan 5 angaka antara 1 hingga 8 untuk melihat judul :"<<endl;
	for(int i=0;i<5;i++){
		cout<<"Data ["<<i<<"] : ";
		cin>>nomor[i];
		cout<<endl;
		index[i]=nomor[i];
	}
	cout<<"============================================"<<endl;
	cout<<"Posisi    Input    Judul"<<endl;
	cout<<"--------------------------------------------"<<endl;
	for(int i=0;i<5;i++){
		cout<<"  ["<<i<<"]       "<<nomor[i]<<"      "<<judul[index[i]]<<endl;
	}
}
