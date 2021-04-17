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
	int i=0, saldo, jawaban, jumlah;
	while (i<3){
		cout<< "Masukkan password : ";
		cin>> password;
		if (password == "DKP24"){
			cout<<"\nSelamat datang DKP24, total saldo anda sebesar Rp. 100.000,00"<<endl;
			break;
		}
		else {
			i++;
			cout<< "Password salah "<<endl;
		}	
	}
	if (i <3){
		menu pembuka;
		pembuka.info("DKP24");
		cout<< "Jawaban : ";
		cin>> jawaban;
		switch(jawaban){
			case 1:
				cout << "Mau beli berapa kak ayamnya?" << endl;
			cout << "Jumlah : ";
				cin >> jumlah;
				switch (jumlah) {
				case 1:
					cout << "Mau beli 1 aja? Oke, tunggu sebentar yak. Pesanan berhasil, saldo anda tinggal Rp. " << bayar(100000, 25000) << endl;
					break;
				case 2:
					cout << "Dua potong ayam aja ya. Pesanan berhasil, saldo anda tinggal Rp. " << bayar(100000, 50000) << endl;
					break;
				case 3:
					cout << "Ayamnya 3 ya kak, tunggu sebentar ya. Pesanan berhasil, saldo anda tinggal Rp. " << bayar(100000, 75000) << endl;
					break;
				case 4:
					cout << "Widih mantap beli 4, tunggu sebentar ya kak. Pesanan berhasil, saldo anda tinggal Rp. " << bayar(100000, 100000) << endl;
					break;
				default:
					cout << "Mohon maaf kak uangnya kurang" << endl;
					break;
				}
				break;
			case 2:
				cout << "Ayam gepreknya mau beli berapa kak?" << endl;
			cout << "Jumlah : ";
				cin >> jumlah;
				switch (jumlah) {
				case 1:
					cout << "Mau beli 1 aja? Oke, tunggu sebentar yak. Pesanan berhasil, saldo anda tinggal Rp. " << bayar(100000, 15000) << endl;
					break;
				case 2:
					cout << "Ayam gepreknya 2 ya. Pesanan berhasil, saldo anda tinggal Rp. " << bayar(100000, 30000) << endl;
					break;
				case 3:
					cout << "Ayam geprek 3. Tunggu sebentar ya kak. Pesanan berhasil, saldo anda tinggal Rp. " << bayar(100000, 45000) << endl;
					break;
				case 4:
					cout << "Widih mantap beli 4, tunggu bentar ya kak. Pesanan berhasil, saldo anda tinggal Rp. " << bayar(100000, 60000) << endl;
					break;
				case 5:
					cout << "Beli 5? Oke siapp kak bentar yak. Pesanan berhasil, saldo anda tinggal Rp. " << bayar(100000, 75000) << endl;
					break;
				case 6:
					cout << "Beli 6 kak? Mantapp diborong semua. Pesanan berhasil, saldo anda tinggal Rp. " << bayar(100000, 90000) << endl;
					break;
				default:
					cout << "Mohon maaf kak uangnya kurang" << endl;
					break;
				}
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
