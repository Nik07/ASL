#include "Integer.h"


Integer::Integer() {}
Integer::Integer(int v) : value(v) {}
Integer::~Integer() {}

bool Integer::isInteger() const {
    return true;
}

Thing* Integer::mod(Thing* rhs) const {
    return nullptr;
}

Thing* Integer::toDouble() const {
    return nullptr;
}

Integer operator+(const Integer &lhs, const Integer &rhs) {
    return Integer(lhs.value + rhs.value);
}
