//
// Created by usuario on 8/3/21.
//

#include "Collector.h"
#include "Node_C.h"
#include <iostream>
using namespace std;
/**
 * Definicion del atributo instance de la clase Collector
 */
Collector* Collector::instance= NULL;
/**
 * Funcion que retorna la instancia almacenada en el atributo instance y si este mismo atributo es igual a NULL crea una instancia y la asgina a instance
 * @return
 */

Collector *Collector::GetInstance(){
    if(instance == NULL){
        instance = new Collector();
    }
    return instance;
}
/**
 * Añade un objeto Node_C al inicio de la lista Collector
 * @param value
 */

void Collector::add(void *value) {
    if (Collector::head == NULL){
        Node_C* node = new Node_C(value);
        Collector::head = node;
        Collector::size++;
    }
    else{
        Node_C* node = new Node_C(value);
        node->setPointer(Collector::head);
        Collector::head = node;
        Collector::size++;
    }

}

/**
 * Imprime el objeto Collector
 */
void Collector::printlist() {
    cout << "Collector: ";
    Node_C *i_pointer = Collector::head;
    while (i_pointer != NULL){
        cout << "-> " << i_pointer->getValue() << ' ';
        i_pointer = i_pointer->getPointer();
    }
    cout<< '\n';


}
/**
 * Funcion que retorna y elimina de la lista al primer elemento del Collector
 * @return
 */
Node_C * Collector::remove(){
    Node_C *temp = static_cast<Node_C *>(Collector::head->getValue());
    Collector::head = Collector::head->getPointer();
    cout << "Overloading operator new with direction: " << temp <<  endl;
    Collector::size--;
    return temp;
}
/**
 *  Funcion que retorna el atributo head de Collector
 * @return
 */
Node_C *Collector::getHead() const {
    return head;
}
