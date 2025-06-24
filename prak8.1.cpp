#include<iostream>
using namespace std;

int main(){
	int matriks[3][4];
	cout<<"Masukkan elemen matriks 3x4 : "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<"Elemen ["<<j<<"] : ";
			cin>>matriks[i][j];
		}
	}
	cout<<"Matriks yang dimasukkan : "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<matriks[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
