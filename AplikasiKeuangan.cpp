//============================================================================
// Name        : AplikasiKeuangan.cpp
// Author      : refanda, nico
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

void manajemenKeuangan(short menuManajKeuangan);
void laporanKeuangan(short menuLaporKeuangan);
void pencarianKeuangan();
void rencanaKeuangan();
void cetakInput();

int i;
int jumlahmasuk;
int jumlahkeluar;
int pilihcari;
int pilihbiaya;
int pilihtanggal;

typedef struct {
	int pemasukan, pengeluaran;
	string keterangan, waktu;
} tipe1;
tipe1 manajUang;

int main() {
	short menuUtama, menuManajKeuangan, balikKeluar, menuLaporKeuangan;
	char ulangMenuUtama;
	bool kembali;

	do {
	cout << "\t\t=== Aplikasi Keuangan ===" << endl;
	cout << "\nMenu : \n1. Manajemen Keuangan \n2. Laporan Keuangan \n3. Pencarian \n4. Rencana Keuangan";
	cout << "\n5. Cetak Hasil Input \n6. Keluar "<< endl;
	cout << "Pilih menu : "; cin >> menuUtama;

	switch(menuUtama) {
		case 1:
			//Menu manaj keuangan
			do {
				cout << "\t\t=== Manajemen Keuangan ===" << endl;
				cout << "1. Pendapatan \n2. Pengeluaran \n3. Kembali" << endl;
				cout << "Pilih (1..3) : "; cin >> menuManajKeuangan;
				manajemenKeuangan(menuManajKeuangan);	//proses

				if(menuManajKeuangan<3) {
					cout << "\n1. Kembali \n2. Keluar \n(1/2) "; cin >> balikKeluar;
					cin.ignore();
					if(balikKeluar==2)
						exit(0);
				} else if(menuManajKeuangan==3) {
					kembali=true;
					break;
				}
			} while(menuManajKeuangan>3||balikKeluar==1);
			break;
		case 2:
			cout << "\t\t === Laporan Keuangan ===" << endl;
			cout << "\n Urutkan berdasarkan : " << endl;
			cout << "1. Waktu transaksi \n2. Biaya terbesar \n3. Kembali" << endl;
			cout << "Pilih (1..3) : "; cin >> menuLaporKeuangan;
			laporanKeuangan(menuLaporKeuangan);

			break;
		case 3:
			pencarianKeuangan();
			break;
		case 4:
			rencanaKeuangan();
			break;
		case 5:
			cetakInput();
			break;
		case 6:
			cout<<"Terima Kasih telah Menggunakan Program Ini\n";
			cout<<"Keluar Program\n";
			exit(0);
			break;
		default:
			cout << "Maaf, menu yang Anda inputkan tidak ada\n" << endl;
			break;
	}

	if(menuUtama<5&&kembali==false) {
		cout << "Ulang program? (y/n) "; cin >> ulangMenuUtama;
	}
	} while(ulangMenuUtama=='y'||ulangMenuUtama=='Y'||menuUtama>4||kembali==true);
}

void manajemenKeuangan(short menuManajKeuangan) {
	string ketPendapatan;

	if(menuManajKeuangan==1) {
		cout<<"Masukkan Jumlah Data = ";
      cin>>jumlahmasuk;
		cout << "\t\t    === Pendapatan ===" << endl;
		for(i=0;i<jumlahmasuk;i++){
			cout<<"Data "<<i+1<<endl;
			cout << "Nominal : Rp. "; cin >> manajUang.pemasukan;
			cout << "Waktu (dd/mm/yy) : "; cin >> manajUang.waktu;
			cin.ignore();
			cout << "Keterangan : ";
			getline(cin, manajUang.keterangan);
		}
		cout << "Data tersimpan" << endl;
	} else if(menuManajKeuangan==2) {
			cout << "\t\t === Pengeluaran ===" << endl;
			cout<<"Masukkan Jumlah Data = ";
			cin>>jumlahkeluar;
			for(i=0;i<jumlahkeluar;i++){
            cout<<"Data ke-"<<i+1<<endl;
				cout << "Nominal : Rp. "; cin >> manajUang.pengeluaran;
				cout<<"Entah Mau ngetik apa \n";
			}
		} else 
		if(menuManajKeuangan==3) {
				menuManajKeuangan=3;
				cout<<"Belum"<<endl;}
				else
				 if(menuManajKeuangan>3||menuManajKeuangan<1) 
					{cout << "Inputan Anda Salah"<<endl;
					cout<<"Kembali ke Sebelumnya"<<endl;}
			}


void laporanKeuangan(short menuLaporKeuangan) {
	if(menuLaporKeuangan==1){
		cout<<"Urutan Berdasarkan Waktu Transaksi \n";
		cout<<"COMING SOON\n";
	}
	else if(menuLaporKeuangan==2){
		cout<<"Biaya Terbesar \n";
		cout<<"Hasil Biaya Terbesar Adalah \n";
		cout<<"Belum Saatnya\n";
    }

	/*
		else if(menuLaporKeuangan==2)
			else if(menuLaporKeuangan==3)
			* */
	cout << "Fitur segera datang" << endl;
}

void pencarianKeuangan() {
	/*
	int pilihPencarian,i;
	string waktuPencarian;
	bool found;
	
	cout << "\t\t    === Pencarian ===" << endl;
	cout << "Pencarian berdasarkan : \n1. Waktu Transaksi \nPilih ";
	cin >> pilihPencarian;
	if(pilihPencarian==1) {
		cout << "Waktu transaksi (dd/mm/yy) : "; cin.ignore(); cin >> waktuPencarian;
		found = false;
		i=0;
		while(
	}
	*/
	cout << "\t\t    === Pencarian ===" << endl;
	cout<<"Silahkan Pilih yang Dicari\n";
	cout<<"1. Biaya\n";
	cout<<"2. Tanggal\n";
	cout<<"Silahkan Pilih (1/2)\n";
	cout<<"Pilihan = ";
	cin>>pilihcari;
	if(pilihcari==1){
		cout<<"Pencarian Biaya\n";
		cout<<"1. Biaya Tertinggi"<<endl;
		cout<<"2. Biaya Terkecil"<<endl;
		cout<<"Silahkan Pilih (1/2)"<<endl;
		cout<<"Pilihan = ";
		cin>>pilihbiaya;
		if(pilihbiaya==1){
			cout<<"Biaya Tertinggi"<<endl;
			cout<<"Not Yet"<<endl;
			}
		if(pilihbiaya==2){
			cout<<"Biaya Terendah"<<endl;
			cout<<"Not Yet"<<endl;
			}	
		}
	else
	if(pilihcari==2){
	cout<<"Pencarian Tanggal(Masukkan Angka)"<<endl;
	cout<<"1. Hari"<<endl;
	cout<<"2. Bulan"<<endl;
	cout<<"3. Tahun"<<endl;
	cout<<"Silahkan Pilih (1-3)"<<endl;
	cout<<"Pilihan = ";
	cin>>pilihtanggal;
	if(pilihtanggal==1){
	cout<<"Silahkan Masukkan Angka Hari (1-30)"<<endl;
	cout<<"Muncul boo";
	}
	else
	if(pilihtanggal==2){
	cout<<"Silahkan Masukkan Angka Bulan (1-12)"<<endl;
	cout<<"Boo"<<endl;
		}
	else
	if(pilihtanggal==3){
		cout<<"Silahkan Masukkan Angka Tahun"<<endl;
		cout<<"Bam"<<endl;
	}
	
		}
}

void rencanaKeuangan() {
	cout << "\t\t === Rencana Keuangan ===" << endl;
	cout << "Fitur belum ada" << endl;
}

void cetakInput(){
	cout<<"Proses Cetak Data\n";
	ofstream data;
	data.open("KeuanganRN.txt");
	data.close();

	cout<<"Cetak Data Selesai\n";

	cout<<"Proses Membuka Hasil Input\n";
	ifstream data_in;
	data_in.open("KeuanganRN.txt");
	data_in.close();
	cout<<"Hasil Input\n";
	cout<<"Data Disimpan dengan Nama 'KeuanganRN.txt'\n ";
}
