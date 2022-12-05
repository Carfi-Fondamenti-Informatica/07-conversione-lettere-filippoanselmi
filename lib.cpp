#include "lib.h"

bool funzione (char &x) {
    if (((x>=65)and(x<=90))or((x>=97)and(x<=122))) {
        if ((x>=65)and(x<=90)) {
            x=x+32;
        } else if ((x>=97)and(x<=122)) {
            x=x-32;
        }
        return true;
    } else {
        return false;
    }
}
