#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		throw 0.5; // melaporkan sebuah interger muka
		cout << "Pengecualian tidak akan dieksekusi" << endl;
	}
}