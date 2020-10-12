#include <iostream>
#include <string.h>
using namespace std;

int main(){

  string str = "    hoang      Bui   viet    ";
  

  

  while(str[0] == ' '){
    
    // str.erase(str.begin(), str.begin() + 1);
    strcpy(&str[0],&str[1]);
  }

  
  while(str[str.length() - 1] == ' ' ){
    strcpy(&str[str.length() - 1],&str[str.length()]);
  }
  
  for(int i = 0 ; i < str.length() ; i++){
    if(str[i] == ' ' && str[i+1] == ' '){
      strcpy(&str[i],&str[i+1]);
      i--;
    }
  }
  // strlwr(str);     
  for(int i = 0 ; i < str.length(); i++){
    if(str[i] >= 'A' && str[i] <= 'Z'){
      str[i] += 32;
    }
  }

  str[0] -=32;
  for(int i = 0 ; i < str.length(); i++){
    if(str[i] == ' ' && str[i+1] != ' ' ){
      str[i+1] -= 32;
    }
  }

  str[str.length()] = '\0';

  cout << str;
  
  return 0;
}