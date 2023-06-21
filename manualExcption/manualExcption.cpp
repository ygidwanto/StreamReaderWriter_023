#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		throw 0.5; // melaporkan sebuah interger muka
		cout << "Pengecualian tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan dieksekusi
		cout << "Pengecualian akan dieksekusi " << endl;
	}
	catch (...) {
		/*jika selain interjer maka block akan dieksekusi*/
		cout << "default  pengecualian dieksekusi" << endl;
	}

	return 0;
}