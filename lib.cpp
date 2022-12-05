#include "lib.h"

bool funzione (char &x) {
    if (((x>=65)&&(x<=90))||((x>=97)&&(x<=122))) {
        if ((x>=65)&&(x<=90)) {
            x=x+32;
        } else if ((x>=97)&&(x<=122)) {
            x=x-32;
        }
        return true;
    } else {
        return false;
    }
}
