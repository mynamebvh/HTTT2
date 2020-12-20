#include<iostream>
#include<math.h>
using namespace std;
int nhapn(){
	
}

double nhapx(){

}

void nhap(int &n, double &x){
	do{
		cout<<"Nhap n= ";
		cin>>n;
	}
	while(n<=0);
	cout<<"nhap x= ";
	cin>>x;
}

double tinhf(int n, float x){
	int s=1;
	double f = x; 
	if(n<=20){
		for(int i = 1 ; i <= n; i++){
			s *= i; 
			f += s/(2*i-1);	
		}
	}
	else{
		f = 2020 * sqrt(n*n + x);
	}
	return f;
}
int main(){
	int n;
	double x;
	nhap(n,x);
	cout<<"gia tri f= "<< tinhf(n,x);
	return 0;
}
