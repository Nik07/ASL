#include "QName.h"


QName::QName(std::string name, bool is_simple) : value(name), is_simple(is_simple) {}
QName::~QName() {}

bool QName::isQName() const {
    return true;
}
