//
// Created by usuario on 8/3/21.
//

#include "Node_C.h"
using namespace std;

/**
 * Constructor de la clase Node, inicaliza el atributo value segun el valor otorgado como parametro
 * @param value
 */
Node_C::Node_C(void *value) : value(value) {
}

void *Node_C::getValue() const {
    return value;
}

void Node_C::setValue(void *value) {
    Node_C::value = value;
}

Node_C *Node_C::getPointer() const {
    return pointer;
}

void Node_C::setPointer(Node_C *pointer) {
    Node_C::pointer = pointer;
}

