//
// Created by usuario on 8/3/21.
//

#ifndef EXTRACLASE_1_NODE_C_H
#define EXTRACLASE_1_NODE_C_H
#include "iostream"
/**
 *Clase implementada como una nodo para Collector
 */
class Node_C {
private:
    void *value;
    Node_C *pointer = NULL;
public:
    Node_C(void *value);

    void *getValue() const;

    void setValue(void *value);

    Node_C *getPointer() const;

    void setPointer(Node_C *pointer);

};


#endif //EXTRACLASE_1_NODE_C_H
