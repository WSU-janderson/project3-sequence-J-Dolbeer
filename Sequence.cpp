#include "Sequence.h"

// Creates an empty sequence (numElts == 0) or  a sequence of numElts items
// indexed from 0 ... (numElts - 1).
Sequence::Sequence(size_t sz) {
    numElts = sz;
    if (sz == 0) {
        data = nullptr;
    } else {
        data = new std::string[sz];
    }
}