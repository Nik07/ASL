#include "Node.h"


Node::Node() {}

// constructor for lists
Node::Node(std::string type) {
    node_type = type;
}

// constructor for atoms
Node::Node(std::string type, Thing* value) {
    node_type = type;
    this->value = value;
}

// constructor for ASL or custom function call by name
Node::Node(std::string type, Thing* qname, Node* expr_list) {
    node_type = type;
    value = qname;
    this->arg1 = expr_list;
}

// counstructor for base arifmetic functions
Node::Node(std::string type, std::string name, Node* arg1, Node* arg2) {
    node_type = type;
    function_name = name;
    this->arg1 = arg1;
    this->arg2 = arg2;
}


void Node::add_var(Node* n) {
    vars_list.push_back(n);
}


void Node::add_expr(Node* n) {
    expr_list.push_back(n);
}


void Node::add_assign(Node* lhs, Node* rhs) {
    arg1->add_expr(lhs);
    arg2->add_expr(rhs);
}
