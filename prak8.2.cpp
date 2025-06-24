#include<iostream>
using namespace std;

int main(){
	int a[3][4];
	int b[3][4];
	
	cout<<"Masukkan elemen matriks 1"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<"Elemen ["<<j<<"] : ";
			cin>>a[i][j];
		}
	}
	cout<<"Masukkan elemen matriks 2"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<"Elemen ["<<j<<"] : ";
			cin>>b[i][j];
		}
	}
	cout<<"Matriks 1 yang dimasukkan : "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Matriks2 yang dimasukkan : "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Matriks yang ditambahkan : "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<a[i][j]+b[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Matriks yang ditambahkan : "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<a[i][j]*b[i][j]<<"\t";
		}
		cout<<endl;
	}
}
