#include <iostream>
#include <string.h>
using namespace std;

int main(){
  char a[100],na;
  fflush(stdin);

  do{
    gets(a);
    na = strlen(a);
  }while(na > 100);
  
  while(a[0] == ' '){
    strcpy(&a[0],&a[1]);
  }

  while(a[na] == ' '){
    strcpy(&a[na], &a[na+1]);
  }

  for(int i = 0 ; i < na; i++){
    if(a[i] == ' ' && a[i+1] == ' '){
      strcpy(&a[i], &a[i+1]);
      --i;
    }
  }

  for(int i = 0 ; i < na; i++){
    if(a[i] >= 'A' && a[i] <= 'Z'){
      a[i] += 32;
    }
  }


  a[0] -= 32;

  for(int i = 0 ; i < na; i++){
    if(a[i] == ' ' && a[i+1] != ' '){
      a[i+1] -= 32;
    }
  };
  
  a[na] = '\0';
  for(int i = 0 ; i < na; i++){
    cout << a[i];
  }
  
  
  return 0;


}