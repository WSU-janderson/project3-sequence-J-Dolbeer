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

// Creates a (deep) copy of sequence s
Sequence::Sequence(const Sequence& s) {
    numElts = s.numElts;
    if (numElts == 0) {
        data = nullptr;
    } else {
        data = new std::string[numElts];
        for (size_t i = 0; i < numElts; i++) {
            data[i] = s.data[i];
        }
    }
}

// Destroys all items in the sequence and release the memory
// associated with the sequence
Sequence::~Sequence() {
    delete[] data;
    data = nullptr;
    numElts = 0;
}

// The current sequence is released and replaced by a (deep) copy of sequence
// s. A reference to the copied sequence is returned (return *this;).
Sequence& Sequence::operator=(const Sequence& s) {
    if (this == &s) {
        return *this;
    }
    delete[] data;
    numElts = s.numElts;
    if (numElts == 0) {
        data = nullptr;
    } else {
        data = new std::string[numElts];
        for (size_t i = 0; i < numElts; i++) {
            data[i] = s.data[i];
        }
    }
    return *this;
}