#include<iostream>
using namespace std;

int main(){
	int array[100];
	int index[100];
	int jumlah;
	
	cout<<"Masukkan jumlah elemen array : ";
	cin>>jumlah;
	for(int i=0;i<jumlah;i++){
		cout<<"Data ke["<<i<<"]: ";
		cin>>array[i];
	}
	cout<<"Array Awal :"<<endl;
	cout<<"Isi Array ";
	for(int i=0;i<jumlah;i++){
		cout<<array[i]<<" ";
	}cout<<endl;
	
	cout<<"menambah +3 ke semua elemen..."<<endl;
	cout<<"Isi Array ";
	for(int i=0;i<jumlah;i++){
		array[i]=array[i]+3;
		cout<<array[i]<<" ";
	}cout<<endl;
	cout<<"Geser ke kiri sekali : "<<endl;
	cout<<"Isi Array ";
	for(int i=0;i<jumlah;i++){
		index[i]=array[i+1];
		if(index[i]==0){
			index[i]=array[0];
		}
		cout<<index[i]<<" ";
	}cout<<endl;
	cout<<"Geser ke kanan sekali : "<<endl;
	cout<<"Isi Array ";
	for(int i=0;i<jumlah;i++){
		index[i]=array[i];
		if(index[i]==0){
			index[i]=array[0];
		}
		cout<<index[i]<<" ";
	}cout<<endl;
	cout<<"Mengurutkan array.."<<endl;
	cout<<"ISi aray ";
	do{
		int i=0;
		if(index[i]>index[i+1]){
			array[i]=index[i+1];
		}
		cout<<index[i]<<" ";
		i+=1;
	}while(index[i]<index[i+1])
	}
}
