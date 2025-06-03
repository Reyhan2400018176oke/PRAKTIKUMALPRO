#include<iostream>
using namespace std;

int main(){
	char huruf[5]={'a','b','c','d','e'};
	for(int i=0;i<5;i++){
		cout<<huruf[i]<<",";
	}cout<<endl;
	cout<<"Cetak Mundur "<<endl;
	for(int i=4;i >=0;i--){
		cout<<huruf[i]<<",";
	}cout<<endl;
}
