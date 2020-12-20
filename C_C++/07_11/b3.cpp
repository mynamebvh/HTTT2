#include <iostream>
#include <iomanip>
using namespace std;

struct HS{
  char hoTen[30];
  int namSinh;
  double diemTBHKI;
  double diemTBHKII;
};

void nhap(HS a){
  
}

double diemTBCN(HS a){
  double diemTB = (2 * a.diemTBHKII + a.diemTBHKI) / 3;
  return diemTB;
}

void format(){
  cout << setw(15) << "HoTen" << setw(15) << "NamSinh" << setw(15) << "DiemTBHKI";
  cout << setw(15) << "DiemTBHKII" << setw(15) << "DiemTBCN"<<endl;
}

void xuat(HS a){
  cout << setw(15) << a.hoTen << setw(15) << a.namSinh << setw(15) << a.diemTBHKI;
  cout << setw(15) << a.diemTBHKII << setw(15) << diemTBCN(a) << endl;
}

void phanTich(HS a[],int &gioi, int &kha, int &tb, int &yeu, int &kem, int n){
  for(int i = 0 ; i < n ; i++){
    if(diemTBCN(a[i]) >= 8 && a[i].diemTBHKI >= 6 && a[i].diemTBHKII >= 6){
      gioi++;
      continue;
    }

    if(diemTBCN(a[i]) >= 6.5 && a[i].diemTBHKI >= 5 && a[i].diemTBHKII >= 5){
      kha++;
      continue;
    }

    if(diemTBCN(a[i]) >= 5 && a[i].diemTBHKI >= 3 && a[i].diemTBHKII >= 3){
      tb++;
      continue;
    }

    if(diemTBCN(a[i]) >= 3.5 && a[i].diemTBHKI >= 2 && a[i].diemTBHKII >= 2){
      yeu++;
      continue;
    }

    else 
      kem++;
  }
}
int main(){
  int n;
  HS *hs = new HS[100];
  int gioi = 0 , kha = 0, tb = 0, yeu = 0, kem = 0;

  cout << "nhap so luong hoc sinh: ";
  cin >> n;

  for(int i = 0 ; i < n ; i++){
    cout << "nhap ho ten: ";
    fflush(stdin);
    gets(hs[i].hoTen);
    cout << "nhap nam sinh: ";
    fflush(stdin);
    cin >> hs[i].namSinh;
    cout << "nhap diem tb hkI: ";
    cin >> hs[i].diemTBHKI;
    cout << "nhap diem tb hkII: ";
    cin >> hs[i].diemTBHKII;
  }
  
  format();
  for(int i = 0 ; i < n ; i++){
    for(int j = 0; j < n - 1; j++){
      if(diemTBCN(hs[j]) < diemTBCN(hs[j+1])){
        swap(hs[j],hs[j+1]);
      }
    }
  }

  cout << "\nHIEN THI HOC SINH DIEM TBCN >= 5 theo chieu giam dan" << endl;
  for(int i = 0 ; i < n; i++){
    if(diemTBCN(hs[i]) >= 5)
      xuat(hs[i]);
  }

  cout << "HIEN THI DANH SACH HOC SINH LUU BAN" << endl;

  for(int i = 0 ; i < n ; i++){
    if(diemTBCN(hs[i]) < 4 && hs[i].diemTBHKI < 2 && hs[i].diemTBHKII < 2){
      xuat(hs[i]);
    }
  }

  phanTich(hs,gioi,kha,tb,kem,yeu,n);

  cout << "\n HIEN THI TI LE HOC SINH" << endl;  
  cout << "\n" << gioi * 1.0 / n * 100 << " % hoc sinh gioi" << endl;
  cout << "\n" << kha * 1.0/ n * 100 << " % hoc sinh kha" << endl;
  cout << "\n" << tb * 1.0/ n * 100 << " % hoc sinh tb" << endl;
  cout << "\n" << yeu * 1.0/ n * 100 << " % hoc sinh yeu" << endl;
  cout << "\n" << kem * 1.0/ n * 100 << " % hoc sinh kem" << endl;

  return 0;
}