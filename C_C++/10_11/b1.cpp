#include <iostream>
using namespace std;

int main(){

  int n;
  int arr[100];

  cin >> n;

  int *p = arr; //<=> *p = &arr[0]
  int *max = arr;
  for(int i = 0 ; i < n; i++){
    cout <<"nhap phan tu thu " << i + 1 << " "; 
    cin >> *(p+i);
  }

  // 1 2 3 4 5
  for(int i = 0 ; i < n; i++){
    for(int j = 0 ; j < n; j++){
      if(*(p+i) < *(p+j)){ //<=> arr[i] < arr[j]
        swap(*(p+i) , *(p+j)); 
      }
    }
  }
    
  for(int i = 0 ; i < n ; i++){
    for(int j = 1 ; j < n; j++){
      if(*(max) > *(p+j)){
        *max = * (p + j);
      }
    }
  }

  for(int i = 0; i < n; i++){
    cout << *(p+i) << " ";
  }
  
  cout << "\n max = " << *max;
  return 0;

}