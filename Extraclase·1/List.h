//
// Created by usuario on 5/3/21.
//

#ifndef EXTRACLASE_1_LIST_H
#define EXTRACLASE_1_LIST_H

#include "Node.h"
/**
 *Clase implementada como una lista simple contruida por objetos Node
 */
class List {
private:
    Node *head;
    int size;
public:
    List();

    Node *getHead() const;

    void setHead(Node *head);

    void add(int value);

    void printlist();

    void remove(int i);
};


#endif //EXTRACLASE_1_LIST_H
