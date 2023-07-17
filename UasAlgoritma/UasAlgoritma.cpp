#include <iostream> 
#include <string> 
using namespace std;

//isi disini
class Mahasiswa {
private:
	const int MAX_MAHASISWA;

public:
	int NIM(MAX_MAHASISWA);
	string nama(MAX_MAHASISWA);
	int tahunMasuk(MAX_MAHASISWA);

	int jumlahMahasiswa = 0;
};

//isi disini
void tambahMahasiswa(
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM        : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama  : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Jurusan  : ";
		getline(cin, jurusan[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
);
//isi disini 
void tampilkanSemuaMahasiswa();
//isi disini 
void algorithmacariMahasiswaByNIM();
//isi disini 
void algorithmaSortByTahunMasuk();
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			//isi disini 
			break;
		case 2:
			//isi disini 
			break;
		case 3:
			//isi disini 
			break;
		case 4:
			//isi disini 
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}

// 2. Alghorithma yang digunakan adalah		
// 3. Stack adalah kumpulan data yang hanya bisa di akses melalui satu jalan yaitu TOP sedangkan Queues berdasarkan situasi seperti request oleh multiple user, hanya satu yang akan di proses, first akan menjadi prioritas
// 4. pengguna algorithma digunakann jika ada penggunaan undo dan rendo
// 5. a. kedalaman yang dimiliki struktur tersebut mencapai level 4
//    b. In Order = 5 1 8 10 12 15 20 22 25 28 30 36 38 40 45 48 50
//	     Preorder = Benar
//       Postorder =  Benar