#include <iostream>

class Node
{
public:
  Node *prev;
  int value;
  Node *next;
};

void print_foward(Node *traverser)
{
  while (traverser != nullptr)
  {
    std::cout << traverser->value << '\n';
    traverser = traverser->next;
  }
}

void print_backward(Node *traverser)
{
  while (traverser != nullptr)
  {
    std::cout << traverser->value << '\n';
    traverser = traverser->prev;
  }
}

int main()
{
  Node *head;
  Node *tail;
  Node *node = new Node();

//head
  node->value = 4;
  node->next = nullptr;
  node->prev = nullptr;
  head = node;
  tail = node;

  // Second
  node = new Node();
  node->value = 5;
  node->next = nullptr;
  node->prev = tail;
  tail->next = node;
  tail = node;

  // Third
  node = new Node();
  node->value = 6;
  node->next = nullptr;
  node->prev = tail;
  tail->next = node;
  tail = node;

  // fourth (tail)
  node = new Node();
  node->value = 7;
  node->next = nullptr;
  node->prev = tail;
  tail->next = node;
  tail = node;

  print_foward(head);
  print_backward(tail);
  return 0;
}


/*
Pasos primer nodo: 
  1.- Crear un nuevo NODO
  2.- Asignar el valor del nodo. Ej.: node->value = 4;
  3.- Asignar node->next = nullptr; si es el úlimo nodo,
  node->previous = nullptr; si es el primero.
  4.- Asignar head = node y tail= node si el nodo es único. Es decir, es cabeza y cola a la vez. 

  Pasos insertar segundo nodo:
  1.- Crear un nuevo nodo.
  2.- Asignar el valor del nodo. Ej.: node->value = 5;
  3.- Ya que, por ahora, el nodo es TAIL, se asigna node->next = nullptr
  y node->previous = tail (tail todavia tiene el valor del nodo anterior)
  4.- Se asigna tail->next = node; ya que node es el nuevo NODO y se le está diciendo al primer
  elemento que apunte al segundo.
  5.- Se asigna tail  = node para hacer al nuevo nodo la cola de la lista.
*/