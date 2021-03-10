//
// Created by usuario on 5/3/21.
//
#include <iostream>
#include "Node.h"
#include<stdlib.h>
#include "Collector.h"

using namespace std;

/**
 * Constructor de la clase Node, inicaliza el atributo value segun el valor otorgado como parametro
 * @param value
 */
Node::Node(int value) : value(value) {}

/**
 * Funcion que retorna el value de Node
 * @return
 */
int Node::getValue() const {
    return value;
}
/**
 * Funcion que asigna un valor deseado al atributo value
 * @param value
 */
void Node::setValue(int value) {
    Node::value = value;
}
/**
 * Funcion que retorna el pointer de Node
 * @return
 */
Node *Node::getPointer() const {
    return pointer;
}
/**
 * Funcion que asigna un valor deseado al atributo pointer
 * @param pointer
 */

void Node::setPointer(Node *pointer) {
   Node::pointer = pointer;
}
/**
 * Funcion sobrecargada de el operador new para la clase Node, esta revisa si hay espacios de memoria disponibles en Collector
 * y si los hay, es utilizado ese espacio de memoria, si no, se crea uno y se utiliza la funcionalidad normal del operador new
 * @param size
 * @return
 */
void *Node::operator new(size_t size)  {
   Collector *collector = Collector::GetInstance();
   if (collector->getHead() != NULL){

       return collector->remove();
   }
   else{
       void * p = malloc(size);
       cout<< "Normal operator new with direction: " << p <<  endl;
       return p;
   }


}
/**
 * Funcion sobrecargada del operador delete para la clase Node, que envia los espacios de memoria liberados hacia el Collector
 * para que este los guarde
 * @param p
 */
void Node::operator delete(void *p){
   cout<< "Overloading delete operator in direction: " << p <<endl;
   Collector *collector = Collector::GetInstance();
   collector->add(p);
}





