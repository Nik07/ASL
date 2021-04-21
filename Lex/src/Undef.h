#pragma once
#include "Thing.h"

class Undef : public Thing {
public:
    Undef();
    ~Undef() final;

    // for Thing
    bool isAtom() const final;
    bool isAttributon() const final;
    bool isBoolean() const override;
    bool isInteger() const override;
    bool isDouble() const override;
    bool isString() const override;
    bool isQName() const override;

    Undef* copyDeep() const override;
    Undef* copyShallow() const override;

    bool eq(Thing *rhs) const override;
    bool neq(Thing *rhs) const override;
    bool eqDeep(Thing *rhs) const override;
    bool eqShallow(std::vector<Thing*> params) const override;

    Thing* read(std::vector<Thing*> params) const override;

    bool toBoolean() const override;
    Thing* toString() const override;

    // for Attributon
    Undef* aref(std::vector<Thing*> params) const;
    Undef* aset(std::vector<Thing*> params) const;
    Undef* conz(std::vector<Thing*> params) const;

    // Sequence
    Thing* copySeq() const final;
    Thing* eqSeq(std::vector<Thing*> params) const final;
    void seqCons(Thing* rhs) const final;
    Thing* seqCopy() const final;
    Thing* seqCreate(std::vector<Thing*> params) const final;
    Thing* seqFirst() const final;
    int seqLength() const final;
    Thing* seqPrepend(std::vector<Thing*> params) const final;
    Thing* seqRest() const final;
    Thing* seqReverse() const final;

    // Jump
    Thing* coalesce(std::vector<Thing*> params) const final;
    bool isDef() const final;
    bool isUndef() const final;
    Thing* undef() const final;

    // Console
    void print() const override;
    void println() const override;
};
