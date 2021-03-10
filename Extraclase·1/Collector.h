//
// Created by usuario on 8/3/21.
//

#ifndef EXTRACLASE_1_COLLECTOR_H
#define EXTRACLASE_1_COLLECTOR_H
#include "Node_C.h"

/**
 *Clase implementada como una lista simple contruida por objetos Node_C
 */
class Collector {
private:
    Node_C *head;
    int size;

protected:

    Collector() {
        head = NULL;
        size = 0;
    }

    static Collector* instance;


public:
    Collector(Collector &other) = delete;

    void operator=(const Collector &) = delete;

    static Collector *GetInstance();

    Node_C *getHead() const;

    void add(void *value);

    void printlist();

    Node_C * remove();

};


#endif //EXTRACLASE_1_COLLECTOR_H
