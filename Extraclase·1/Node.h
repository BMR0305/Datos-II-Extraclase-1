//
// Created by usuario on 5/3/21.
//

#ifndef EXTRACLASE_1_NODE_H
#define EXTRACLASE_1_NODE_H

/**
 *Clase implementada como una nodo para List
 */
class Node {

private:
    int value;
    Node *pointer;
public:

    Node(int value);

    int getValue() const;

    void setValue(int value);

    Node *getPointer() const;

    void setPointer(Node *pointer);

    void * operator new(size_t size);

    void operator delete(void *p);


};


#endif //EXTRACLASE_1_NODE_H
