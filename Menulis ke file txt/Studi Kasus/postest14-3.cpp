#include<iostream>
#include<fstream>
using namespace std;

int main(){
	int pilihan, jumlah, total, uang, kembalian;
	char tgl[10];
	cout << "##   PROGRAM KASIR PEMBELIAN BERAS JENIS SUPADI   ##\n";
	cout << "=====================================================\n";
	cout << "Pilihan Menu: \n";
	cout << "[1] Masukkan barang belanjaan\n";
	cout << "[2] Keluar\n";
	cout << "=====================================================\n";
x:
	cout << "Pilihan Anda: ";
	cin >> pilihan;
	if(pilihan == 1){
		cout << "\n";
		cout << "======================================================\n";
		cout << "Toko ini hanya menyediakan beras jenis Supadi\n";
		cout << "Harga perkarung, isi 5 kg = Rp 60.000\n";
		cout << "Tanggal: ";
		cin >> tgl;
		cout << "Jumlah karung: ";
		cin >> jumlah;
		total = 60000*jumlah;
		cout << "Total: Rp " << total << endl;
		cout << "Uang yang dibayarkan : ";
		cin >> uang;
		kembalian = uang - total;
		cout << "Kembalian : " << kembalian << endl;
		cout << "=====================================================\n";
		goto x;
	} 
	if(pilihan == 2){
		ofstream file ("struk.txt");
		if(!file.is_open()){
			cout << "File is not available\n";
		}
		else{
		file << "       TOKO BERAS SUPADI JAYA \n";
		file << "======================================\n";
		file << " Kasir: Binti Sholikhah\n";
		file << " Tgl  : " << tgl << endl;
		file << "======================================\n";
		file << " Harga perkarung, isi 5 kg = Rp 60.000\n";
		file << " Jumlah Pembelian : " << jumlah << endl;
		file << "--------------------------------------\n";
		file << " Total Belanjaan  : " << total << endl;
		file << " Diskon           : -\n";
		file << " Bayar            : " << uang << endl;
		file << " Kembalian        : " << kembalian << endl;
		file << "======================================\n";
		file << "   TERIMA KASIH ATAS KUNJUNGAN ANDA\n";
		file << "    SEMOGA HARI ANDA MENYENANGKAN:)\n";
		file << "======================================\n";
		file.close();
		}
	}
	return 0;
}
