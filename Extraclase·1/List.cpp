//
// Created by usuario on 5/3/21.
//
#include <iostream>
#include "List.h"
#include "Node.h"
using namespace std;

/**
 * Constructor de la clase List, incializa el atributo head en NULL y el tamañano en 0
 */
List::List() {
    List::head = NULL;
    List::size = 0;
}
/**
 *  Funcion que retorna el atributo head de List
 * @return
 */
Node *List::getHead() const {
    return head;
}
/**
 * Funcion que asigna un valor deseado al atributo head
 * @param head
 */
void List::setHead(Node *head) {
    List::head = head;
}
/**
 * Añade un objeto Node al inicio de la lista Collector
 * @param value
 */
void List::add(int value) {
    if (List::head == NULL){
        Node* node = new Node(value);
        List::head = node;
        List::size++;
    }
    else{
        Node* node = new Node(value);
        node->setPointer(List::head);
        List::head = node;
        List::size++;
    }

}
/**
 * Imprime el objeto List
 */
void List::printlist() {
    cout << "Lista: ";
    Node *i_pointer = List::head;
    while (i_pointer != NULL){
        cout << "-> " << i_pointer->getValue() << ' ';
        i_pointer = i_pointer->getPointer();
    }
    cout<< '\n';


}
/**
 * Funcion que elimina un elemento de la lista dependiendo del indice i dado
 * @param i
 */
void List::remove(int i){
    if (i==0){
        Node *temp = List::head;
        List::head = List::head->getPointer();
        delete temp;
        List::size--;
    }
    else{
        if (i>=List::size){
            cout << "El indice indicado no existe en la lista"<< endl ;
        }
        else{
            int k = 0;
            Node *actual = List::head;
            while (k<i){
                if (k==i-1){
                    Node *temp = actual->getPointer();
                    actual->setPointer(actual->getPointer()->getPointer());
                    delete temp;
                    List::size--;
                }
                k++;
                actual = actual->getPointer();
            }
        }
        }
    }


