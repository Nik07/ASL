#pragma once
#include "../Atom.h"
#include "Double.h"

class Double;

class Integer : public Atom {
public:
    Integer();
    Integer(int v);
    ~Integer();

    friend Integer operator+ (const Integer& lhs, const Integer& rhs);
    friend Double operator+ (const Integer& lhs, const Double& rhs);
    friend Double operator+ (const Double& lhs, const Integer& rhs);

    bool isInteger() const final;
    Thing* mod(Thing* rhs) const;
    Thing* toDouble() const;

private:
    int value;
};
