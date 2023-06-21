#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukan NamaFile : ";
	cin >> NamaFile;

	//membuka file dalam mode menulis .
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(NamaFile + ".txt", ios::out);

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukan karakter q
		if (baris == "q") break;
		//menulis dan memasukan nilai dari 'baris' kedalam file
		outfile << baris << endl;
	}
	// selesai dalam menulis  sekarang tutup filenya
	outfile.close();

	// Membuka file dalam mode membaca 
	ifstream infile;
	//menunjuk ke sebuah file 
	infile.open(NamaFile + ".txt", ios::in);

	cout << endl << ">= Membuka dan membaca file " << endl;
	//jika file ada maka
	if (infile.is_open())
	{
		// melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			//dan tampilkan disini
			cout << baris << '\n';
		}
		// tutup file tersebut setelah selesai
		infile.close();
	}
	// jika tidak ditemukan file maka akan menampilkan ini
	else cout << "Unable to open file";
	return 0;
}