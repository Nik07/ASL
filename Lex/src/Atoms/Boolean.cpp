#include "Boolean.h"


Boolean::Boolean(bool val) : value(val) {}


bool Boolean::isBoolean() const {
    return true;
}

Thing* Boolean::Not() const {
    return nullptr;
}

Thing* And(std::vector<Thing*> params) {
    return nullptr;
}

Thing* Or(std::vector<Thing*> params) {
    return nullptr;
}
