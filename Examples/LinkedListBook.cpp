#include <iostream>
#include <stdlib.h>
using namespace std;

/* The Node class */
class Node
{
public:
    int get()
    {
        return object;
    };
    void set(int object)
    {
        this->object = object;
    };


    Node * getNext()
    {
        return nextNode;
    };
    void setNext(Node * nextNode)
    {
        this->nextNode = nextNode;
    };
private:
    int object;
    Node * nextNode;
};



/* The List class */
class List
{
public:
    List();
    void add (int addObject);
    int get();
    bool next();
    friend void traverse(List list);
    friend List addNodes();
private:
    int size;
    Node * headNode;
    Node * currentNode;
    Node * lastCurrentNode;
};


/* Constructor */
List::List()
{
    headNode = new Node();
    headNode->setNext(NULL);
    currentNode = NULL;
    lastCurrentNode = NULL;
    size = 0;
}


/* add() class method */
void List::add (int addObject)
{
    Node * newNode = new Node();
    newNode->set(addObject);
    if( currentNode != NULL )
    {
        newNode->setNext(currentNode->getNext());
        currentNode->setNext( newNode );
        lastCurrentNode = currentNode;
        currentNode = newNode;
    }
    else
    {
        newNode->setNext(NULL);
        headNode->setNext(newNode);
        lastCurrentNode = headNode;
        currentNode = newNode;
    }
    size ++;
}


/* get() class method */
int List::get()
{
    if (currentNode != NULL)
        return currentNode->get();
}

/* next() class method */
bool List::next()
{
    if (currentNode == NULL) return false;
    lastCurrentNode = currentNode;
    currentNode = currentNode->getNext();
    if (currentNode == NULL || size == 0)
        return false;
    else
        return true;
}


/* Friend function to traverse linked list */
void traverse(List list)
{
    Node* savedCurrentNode = list.currentNode;
    list.currentNode = list.headNode;
    for(int i = 1; list.next(); i++)
    {
        cout << "\n Element " << i << " " << list.get();
    }
    list.currentNode = savedCurrentNode;
}


/* Friend function to add Nodes into the list */
List addNodes()
{
    List list;
    list.add(2);
    list.add(6);
    list.add(8);
    list.add(7);
    list.add(1);
    cout << "\n List size = " << list.size <<'\n';
    return list;
}
main()
{
    List list = addNodes();
    traverse(list);
}
