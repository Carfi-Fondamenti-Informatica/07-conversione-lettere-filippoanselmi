#include <iostream>
#include "lib.h"
using namespace std;

int main(){
   char n=0; cin >> n;
    if (funzione(n)==true) {
    cout << n;
    } else if (funzione(n)==false) {
        cout << "errore";
    }
  return 0;
} 
