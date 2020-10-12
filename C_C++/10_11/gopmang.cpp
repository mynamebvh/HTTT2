#include <iostream>
using namespace std;

void gopMang(int A[], int B[], int nA, int nB){
  int nC = nA + nB;

  int C[100];
  int iC = 0 , iA = 0, iB = 0;

  for(int i = 0 ; i < nC; i++){

    if(i % 2 != 0 && iB >= nB){
      C[iC] = A[iA];
      iC++;
      iA++;
      continue;
    };

    if(i % 2 == 0 && iA >= nA){
      C[iC] = B[iB];
      iC++;
      iB++;
      continue;
    }

    if(i % 2 == 0 && iB < nB){
      C[iC] = B[iB];
      iB++; iC++;
    }
  
    if(i % 2 != 0 && iA < nA) {
      C[iC] = A[iA];
      iA++; iC++;
    }
  }
    
  for(int i = 0 ; i< nC; i++){
    cout << C[i] << " ";
  }
    
}

  

int main() {
  int A[100] = {1, 3, 5, 7, 9};
  int B[100] = {2, 4, 6 ,8};

  gopMang(A,B,7,4);
  return 0;
}