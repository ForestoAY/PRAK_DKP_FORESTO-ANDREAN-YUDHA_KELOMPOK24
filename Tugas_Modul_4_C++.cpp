#include <iostream>
using namespace std;

class menu{
public:
	void info (string username){
	cout<< "Halo "<<username<< " Pesan orderan"<<endl;
	cout<< "(1) Ayam KFC - Rp 25.000,00"<<endl;
	cout<< "(2) Ayam geprek - Rp 15.000,00"<<endl;
	cout<< "(3) Caviar eggs - Rp 1.000.000"<<endl;
	}
};

int bayar (int saldo, int harga){
	if (saldo >= harga){
		return saldo - harga;
	}
	else if (saldo < harga) {
		cout<< "Uang tidak cukup, karena harga sebesar Rp ";
		return harga;
	}
	else {
		cout<<"Kode tidak valid"<<endl;
	}
}


int main(){
	string password;
	int i=0, saldo, jawaban;
	while (i<3){
		cout<< "Masukkan password : ";
		cin>> password;
		if (password == "DKP24"){
			cout<<"\nSelamat datang DKP24, total saldo anda sebesar Rp 1.000.000,00"<<endl;
			if (i < 3) {
				menu pembuka;
				pembuka.info("DKP 24");
				cout << "Pilihan Anda : ";
				cin >> jawaban;
				switch (jawaban) {
				case 1:
					cout << "Pesanan Berhasil, Saldo Anda tersisa Rp." << bayar(1000000, 25000) << endl;
					break;
				case 2:
					cout << "Pesanan Berhasil, Saldo Anda tersisa Rp." << bayar(1000000, 15000) << endl;
					break;
				case 3:
					cout << "Pesanan Berhasil, Saldo Anda tersisa Rp." << bayar(1000000, 1000000) << endl;
					break;
				default:
					cout << "Maaf, Pemesanan Gagal" << endl;
					break;
				}
				break;
		}
		else {
			i++;
			cout<< "Password salah "<<endl;
			break;
		}
		}		
	}
}
