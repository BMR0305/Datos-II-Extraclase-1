#include <iostream>
#include "List.h"
#include "Collector.h"

int main() {
    Collector *collector = Collector::GetInstance();
    List* lista = new List();
    lista->printlist();
    collector->printlist();
    lista->add(5); lista->add(6);lista->add(4);
    lista->printlist(); collector->printlist();
    lista->remove(1); lista->remove(0);
    lista->printlist();
    collector->printlist();
    lista->add(7);
    lista->printlist();
    collector->printlist();
    lista->add(8);
    lista->printlist();
    collector->printlist();
    lista->add(9);
    lista->printlist();
    collector->printlist();
    return 0;
}