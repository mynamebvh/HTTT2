#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class SINHVIEN{
	private:
		string ten;
		int tuoi;
		int maSinhVien;
		double diem;
	
	public:
		SINHVIEN(){
		}
		
		SINHVIEN(string name, int age, int msv, double diem1){
			ten = name;
			tuoi = age;
			maSinhVien = msv;
			diem = diem1;
		};
		
		void nhap(){
			cout<<"nhap ten: ";
			cin>>ten;
			cout<<"nhap msv: ";
			cin>>maSinhVien;
			cout<<"nhap tuoi: ";
			cin>>tuoi;
			cout<<"nhap diem: ";
			cin>>diem;
		}	
		void xuat(){
			cout << setw(15) << maSinhVien << setw(15) << ten << setw(10) << tuoi << setw(15) << diem << endl;
		}
};
int main(){
	SINHVIEN a("hoang", 18, 1, 9);
	SINHVIEN b("khien", 6, 2, 10);
	
//	a.nhap();
//	b.nhap();
	cout << setw(15) << "MSV" << setw(15) << "Ten" << setw(10) << "Tuoi" << setw(15) << "Diem" << endl; 
	a.xuat();
	b.xuat();
	return 0;
	
}
