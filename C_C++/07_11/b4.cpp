#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

struct Date {
  int ngay;
  int thang;
  int nam;
};

struct CanBo {
  char maCB[30];
  char ten[30];
  int ngaySinh;
  Date tg;
  char chucVu[30];
  char gioiTinh[4];
  int bacLuong;
};

void format() {
  cout << setw(15) << "Ma CB" << setw(15) << "Ten" << setw(20) << "ngay/thang/nam";
  cout << setw(15) << "ChucVu" << setw(15) << "GioiTinh" << setw(15) << "BacLuong" << endl; 
}

void xuat(CanBo a) {
  cout << setw(15) << a.maCB << setw(15) << a.ten << setw(10) << a.tg.ngay << "/" << a.tg.thang << "/";
  cout << a.tg.nam << setw(15) << a.chucVu << setw(15) << a.gioiTinh << setw(15) << a.bacLuong << endl; 
}

void chenCanBo(CanBo a[], int &n, CanBo b, int k){

    if(k < 0){
        k = 0;
    }

    else if(k > n){
        k = n;
    }

    for(int i = n; i > k; i--){
        a[i] = a[i-1];
    }

    a[k] = b;

    ++n;
}

void xoaCanBo(int a[], int &n, int k){

    if(n <= 0){
        return;
    }

    if(k < 0){
        k = 0;
    }

    else if(k >= n){
        k = n-1;
    }

    for(int i = k; i < n - 1; i++){
        a[i] = a[i+1];
    }

    --n;
}

int main(){
  int n;
  CanBo *cb = new CanBo[100];

  cout << "nhap so luong can bo: ";
  cin >> n;

  for(int i = 0 ; i < n ; i++){
    cout << "nhap ma can bo: ";
    fflush(stdin);
    gets(cb[i].maCB);
    cout << "nhap ho ten: ";
    fflush(stdin);
    gets(cb[i].ten);
    cout << "nhap ngay sinh: ";
    fflush(stdin);
    cin >> (cb[i].tg.ngay);
    cout << "nhap thang sinh: ";
    fflush(stdin);
    cin >> (cb[i].tg.thang);
    cout << "nhap nam sinh: ";
    fflush(stdin);
    cin >> (cb[i].tg.nam);
    cout << "nhap chuc vu: ";
    fflush(stdin);
    gets(cb[i].chucVu);
    cout << "nhap gioi tinh: ";
    fflush(stdin);
    gets(cb[i].gioiTinh);
    cout << "nhap bac luong: ";
    fflush(stdin);
    cin >> cb[i].bacLuong;
  }


  format();
  for(int i = 0 ; i < n; i++){
    xuat(cb[i]);
  }

  for(int i = 0 ; i < n ; i++){
    for(int j = 0; j < n - 1; j++){
      if(strcmp(cb[j].ten,cb[j+1].ten) > 0){
        swap(cb[j], cb[j+1]);
      }
    }
  }

  format();
  for(int i = 0 ; i < n; i++){
    xuat(cb[i]);
  }

  cout << "\n DANH SACH NGHI HUU" << endl;
  for(int i = 0 ; i < n ; i++){
    int tuoi = 2020 - cb[i].tg.nam;
    if((tuoi >= 60 && strcmp(cb[i].gioiTinh,"nam") == 0) || (2020 - tuoi >= 55 && strcmp(cb[i].gioiTinh,"nu") == 0)){
      xuat(cb[i]);
    }
  }

  int max = cb[0].bacLuong;
  int indexMax = 0;

  for(int i = 0 ; i < n ; i++){
    for(int j = 1 ; j < n ; j++){
      if(indexMax < cb[j].bacLuong){
        max = cb[j].bacLuong;
        indexMax = j;
      }
    }
  }

  cout << "\n HIEN THI CAN BO CO LUONG CAO NHAT" << endl;
  cout << "ho ten : " << cb[indexMax].ten << endl;
  cout << "luong la : " << cb[indexMax].bacLuong << endl;


  CanBo a;
  int vt;
  cout << "nhap ma can bo: ";
  fflush(stdin);
  gets(a.maCB);
  cout << "nhap ho ten: ";
  fflush(stdin);
  gets(a.ten);
  cout << "nhap ngay sinh: ";
  fflush(stdin);
  cin >> (a.tg.ngay);
  cout << "nhap thang sinh: ";
  fflush(stdin);
  cin >> (a.tg.thang);
  cout << "nhap nam sinh: ";
  fflush(stdin);
  cin >> (a.tg.nam);
  cout << "nhap chuc vu: ";
  fflush(stdin);
  gets(a.chucVu);
  cout << "nhap gioi tinh: ";
  fflush(stdin);
  gets(a.gioiTinh);
  cout << "nhap bac luong: ";
  fflush(stdin);
  cin >> a.bacLuong;
  
  cout << "nhap vi tri: ";
  cin >> vt;
  chenCanBo(cb, n, a, vt);

  format();
  for(int i = 0 ; i < n; i++){
    xuat(cb[i]);
  }


  return 0;
}
