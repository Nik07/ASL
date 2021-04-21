#pragma once
#include "../Atom.h"
#include <string>


class QName : public Atom {
public:
    QName(std::string name, bool is_simple);
    ~QName();

    bool isQName() const final;
private:
    std::string value;
    bool is_simple = true;
};
