#include <iostream>
#include <iomanip>
using namespace std;

void tampilkanMenu() {
    cout<< "===== MENU KEDAI AYAM ====="<<endl;;
    cout<< "1.Ayam Goreng(Rp17.000)"<<endl;
    cout<< "2.Ayam Bakar(Rp21.000)"<<endl;
    cout<< "3.Selesai"<<endl;
    cout<< "===========================\n";
}

void hitungDanCetakStruk(int jumlahgoreng,int jumlahbakar) {
    const int hargaayamgoreng=17000;
    const int hargaayambakar=21000;
    const double batasdiskon=45000;
    const double jumlahdiskon= 0.1;

    double totalharga=(jumlahgoreng*hargaayamgoreng)+(jumlahbakar*hargaayambakar);
    double diskon=totalharga>batasdiskon?totalharga*jumlahdiskon:0;
    double totalbayar=totalharga-diskon;

    cout<<"\n===== STRUK PEMBAYARAN ====="<<endl;
    cout<<"Ayam Goreng\t: "<<jumlahgoreng<<" x Rp"<<hargaayamgoreng<<" = Rp"<<(jumlahgoreng *hargaayamgoreng)<<endl;
    cout<<"Ayam Bakar\t: "<<jumlahbakar<<" x Rp"<<hargaayambakar<<" = Rp"<<(jumlahbakar *hargaayambakar)<<endl;
    cout<<"Total Harga\t: Rp"<<totalharga<<endl;

    if (diskon>0) {
        cout<<"Diskon (10%)\t: -Rp"<<fixed<< setprecision(2)<<diskon<<endl;
    }
    cout<<"Total Bayar\t: Rp"<<fixed<<setprecision(2)<<totalbayar<<endl;
    cout<<"============================"<<endl;
}

int main() {
    int jumlahgoreng=0;
    int jumlahbakar=0;
    char pilihan;

    do{
        tampilkanMenu();
        cout<<"Pilih menu (1/2/3): ";
        cin >> pilihan;

        switch (pilihan) {
            case '1':
                int tempgoreng;
                cout<<"Masukkan jumlah Ayam Goreng: ";
                cin>>tempgoreng;
                jumlahgoreng+=tempgoreng;
                break;
            case '2':
                int tempbakar;
                cout<<"Masukkan jumlah Ayam Bakar: ";
                cin>>tempbakar;
                jumlahbakar+=tempbakar;
                break;
            case '3':
                hitungDanCetakStruk(jumlahgoreng,jumlahbakar);
                return 0;
            default:
                cout<<"Pilihan tidak valid! Silakan pilih lagi."<<endl;
        }

        cout<<"Ingin memilih menu lain? (y/t): ";
        cin>>pilihan;

    } while (pilihan == 'y');
}
