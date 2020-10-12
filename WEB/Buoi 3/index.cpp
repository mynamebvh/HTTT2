#include <iostream>
#include <string>

using namespace std;

int main(){

  string hmm = "hihi";
  // gets(hmm);

  hmm.erase(1,4);
  cout << hmm;
  return 0;
}