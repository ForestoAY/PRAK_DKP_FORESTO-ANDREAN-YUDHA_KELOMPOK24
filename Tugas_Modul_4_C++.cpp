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

