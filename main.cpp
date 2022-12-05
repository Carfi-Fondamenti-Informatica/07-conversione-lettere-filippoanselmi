#include <iostream>
#inlcude "lib.h"

int main(){
   char n=0; cin >> n;
    if (tecci(n)==true) {
    cout << n;
    } else if (tecci(n)==false) {
        cout << "errore";
    }
  return 0;
}
