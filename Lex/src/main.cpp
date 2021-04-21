#include <iostream>
#include "Atom.h"
#include "Undef.h"
#include "Attributon.h"
#include "Atoms/String.h"
#include "Atoms/QName.h"
#include "Atoms/Boolean.h"
#include "Atoms/Integer.h"
#include "Atoms/Double.h"
#include "Attributons/State.h"
#include "Attributons/Multistate.h"
#include "Attributons/Function.h"
#include "Node.h"


int main() {
    std::cout << "Start init" << std::endl;
    Atom A;
    Attributon T;
    String S;
    std::cout << S.isAttributon() << std::endl;
    QName Q(std::string("fuck you"), false);
    std::cout << Q.isAtom() << std::endl;
    Boolean B(true);
    Boolean B2(false);
    Double D;
    Integer I;
    Thing* atom1 = new Integer(10);
    std::cout << atom1->isInteger() << std::endl;
    State St;
    Multistate Mst;
    Function func;
    std::cout << D.isQName() << D.isDouble() << std::endl;

    Double* dAtom = new Double(10.0);
    Integer* iAtom = new Integer(5);
    Thing* x = new Double(*iAtom + *dAtom);

    x->isDouble();

    Node* a = new Node(std::string("Atom"), iAtom);

    Undef uu;

    return 0;
}
