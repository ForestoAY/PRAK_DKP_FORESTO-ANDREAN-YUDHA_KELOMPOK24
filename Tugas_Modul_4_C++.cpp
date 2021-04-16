#include <iostream>
using namespace std;

void info (string username){
	cout<< "Halo "<<username<< " Pesan orderan"<<endl;
	cout<< "(1) Ayam KFC - Rp 25.000,00"<<endl;
	cout<< "(2) Ayam geprek - Rp 15.000,00"<<endl;
	cout<< "(3) Caviar eggs - Rp 1.000.000"<<endl;
}

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
	int i=0, saldo, harga, jawaban;
	while (i<3){
		cout<< "Masukkan password : "<<endl;
		cin>> password;
		if (password == "DKP24"){
			cout<<"Selamat datang DKP24, total saldo anda sebesar Rp. 100.000,00"<<endl;
			break;
		}
		else {
			i++;
			cout<< "Password salah "<<endl;
		}
	}
	
