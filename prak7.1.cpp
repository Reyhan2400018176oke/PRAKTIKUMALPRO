#include<iostream>
using namespace std;

class sorting{
	friend istream& operator>>(istream& in, sorting& a);
	friend ostream& operator<<(ostream& out, sorting& a);
public:
	void selectionsort();
	int data[10];
	int n;
	int pencarianbiner(int low, int high, int kuncipencarian);
private:
	void minimum(int,int,int&);
	void tukar(int&,int&);

};

istream& operator>>(istream& in, sorting& a){
	cout<<"Masukkan jumlah : ";
	cin>>a.n;
	for(int i=0; i<a.n ;i++){
		cout<<"Data ke-"<<i+1<<" : ";
		in>>a.data[i];
	}
	return in;
}

ostream& operator<<(ostream& out, sorting& a){
	for(int i=0; i<a.n;i++){
		out<<a.data[i]<<" ";
	}
	out<<endl;
	return out;
}

void sorting::minimum(int dari,int n, int &tempat){
	int min=data[dari];
	tempat=dari;
	for(int i=dari+1; i<n; i++){
		if(data[i]<min){
			min=data[i];
			tempat=i;
		}
	}
}

void sorting::tukar(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void sorting::selectionsort(){
	int t;
	for(int i=0;i<n;i++){
		minimum(i,n,t);
		tukar(data[i], data[t]);
	}
}

int sorting::pencarianbiner(int low, int high, int kuncipencarian){
	int middle;
	while(low<=high){
		middle=(low+high)/2;
		if(kuncipencarian==data[middle]){
			return middle;
		}else if(kuncipencarian<data[middle]){
			high=middle-1;
		}else{
			low=middle+1;
		}
			
	}
	return -1;
}
int main(){
	sorting s;
	cin>>s;
	
	cout<<"Data sebelum sorting : "<<s<<endl;
	s.selectionsort();
	cout<<"Data setelah disorting : "<<s<<endl;
	
	int cari;
	cout<<"Masukkan angka yang ingin dicari : ";
	cin>>cari;
	
	int hasil=s.pencarianbiner(0,3,cari);
	if(hasil!=-1)
	cout<<"Data ditemukan ditemukan di index-"<<hasil<<endl;
	else
	cout<<"Data tidak ditemukan"<<endl;
	return 0;
}
