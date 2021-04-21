#include "Double.h"


Double::Double() {}
Double::Double(double v) : value(v) {}
Double::Double(const Double& rhs) : value(rhs.value) {}
Double::~Double() {}

bool Double::isDouble() const {
    return true;
}

Thing* Double::toInteger() const {
    return nullptr;
}

Double operator+ (const Integer& lhs, const Double& rhs) {
    return Double(lhs.value + rhs.value);
}

Double operator+ (const Double& lhs, const Integer& rhs) {
    return Double(lhs.value + rhs.value);
}

Double operator+ (const Double& lhs, const Double& rhs) {
    return Double(lhs.value + rhs.value);
}
