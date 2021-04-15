//Kelompok DKP 24

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
	if (i ==0 || i==1 || 1==2){
		info ("DKP24");
		cout<< "Jawaban : ";
		cin>> jawaban;
		switch(jawaban){
			case 1:
				cout<< "Pesanan berhasil, saldo tinggal Rp. "<<bayar(100000, 25000)<<endl;
				break;
			case 2:
				cout<< "Pesanan berhasil, saldo tinggal Rp. "<<bayar(100000, 15000)<<endl;
				break;
			case 3:
				cout<<bayar(100000, 1000000)<<endl;
				break;
			default:
				cout<< "Gagal memesan"<<endl;
				break;
		}
	}
	else {
		cout<< "Password masih salah, silahkan hubungi kontak CS kami"<<endl;
	}
}

#Test dahlah males kalo masih gabisa
