#include<iostream>
using namespace std;

//Node class

class Node
{
public:
    void set(int Data) // set the data item
    {
        this -> Data = Data;
    }

    Node *getNext() // returns pointer to the next data item
    {
        return ptrNextData;
    }

    void setNext (Node *ptrNextData) // Sets pointer to the next data item
    {
        this -> ptrNextData = ptrNextData;
    }

    int get() // returns data element
    {
        return Data;
    }

private:
    int Data;
    Node *ptrNextData;
};



class List
{
private:
    int size;
    Node *currentNode;
    Node *headNode;
    Node *lastCurrentNode;

public:
    bool next();
    friend void traverse(List list);

    /* get() class method */
    int get()
    {
        if (currentNode != NULL)
            return currentNode->get();
    }

    List()
    {
        headNode = new Node();
        headNode->setNext(NULL);
        currentNode = NULL;
        lastCurrentNode = NULL;
        size = 0;

    }

    void add (int addData)
    {
        Node *newNode = new Node();
        newNode -> set(addData);
        if (currentNode != NULL)
        {
            newNode -> setNext (currentNode -> getNext());
            currentNode -> setNext(newNode);
            lastCurrentNode = currentNode;
            currentNode = newNode;
        }
        else
        {
            newNode -> setNext(NULL);
            headNode -> setNext (newNode);
            lastCurrentNode = headNode;
            currentNode = newNode;
        }
        size++;
    }

};


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

int main()
{
    List list;

    list.add(2);
    list.add(6);
    list.add(8);
    list.add(1);

    traverse(list);
}
