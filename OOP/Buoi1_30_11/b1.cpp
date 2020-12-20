#include <iostream>
#include <string.h>
using namespace std;

class HinhTron{
	private:
		double r;
	public:
		void nhapR(){
			cout << "nhap r = ";
			cin >> r;
		}
		double chuVi(){
			return 2 * 3.14 * r;
		}
		double dienTich(){
			return 3.14 * r * r;
		}
};

int main(){
	HinhTron hinhtron;
	hinhtron.nhapR();
	cout << "chu vi = " << hinhtron.chuVi();
	cout << "\ndien tich = " << hinhtron.dienTich();
	return 0;
}
