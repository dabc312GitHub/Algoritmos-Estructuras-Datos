// LinkedList.cpp: define el punto de entrada de la aplicación de consola.
//

#include "linkedList.h"

int main()
{
	//linkedList<int, menor<int>>* lista = new linkedList<int, menor<int>>;
	CDLinkedList<int, menor<int>>* lista = new CDLinkedList<int, menor<int>>;
	lista->insert(1);
	lista->print();
	lista->insert(2);
	lista->print();
	lista->insert(3);
	lista->print();
	lista->insert(4);
	lista->print();
	lista->insert(5);
	lista->print();
		

	lista->erase(3);
	lista->print();
	lista->erase(1);
	lista->print();
	lista->erase(5);
	lista->print();
	lista->erase(2);
	lista->print();
	lista->erase(4);
	lista->print();



	
	delete lista;

    return 0;
}

