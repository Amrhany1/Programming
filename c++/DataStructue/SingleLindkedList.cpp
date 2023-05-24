#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node* next;
    Node() {}
    Node(int val, Node* n) :value(val), next(n)
    {}
};
class linklist
{
public:
    Node* head;
    int listcounter = 0;
    linklist()
    {
        head = new Node();
        head->value = NULL;
        head->next = NULL;
    }
    void printlist()
    {
        int counter = 0;
        Node* pointer = head;
        while (pointer)
        {
            cout << "Node <" << counter << "> is " << pointer->value << endl;
            counter++;
            pointer = pointer->next;
        }
        cout << endl;
    }
    int getlistlength()
    {
        int count = 0;
        Node* temp = head;
        while (temp->next != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
    void push(int value)
    {
        if (head->next == NULL)
        {
            head->value = value;
        }
        else
        {
            Node* newnode = new Node();
            newnode->value = value;
            newnode->next = head;
            head = newnode;
        }
    }
    void insertafter(int index, int value)
    {
        Node* newnode = new Node();
        newnode->value = value;
        Node* prev = head;
        int count = 0;
        while (count != index)
        {
            prev = prev->next;
            count++;
        }
        newnode->next = prev->next;
        prev->next = newnode;
    }
    void append(int value)
    {
        Node* newnode = new Node();
        newnode->value = value;
        Node* prev = head;
        while (prev->next != NULL)
        {
            prev = prev->next;
        }
        prev->next = newnode;
        newnode->next = NULL;
    }
    void clear()
    {
        Node* current = head;
        Node* next = NULL;
        while (current->next != NULL)
        {
            next = current->next;
            delete current;
            current = next;
        }
        head = NULL;
    }
    //void deletenode(int index, int c)
    //{
    //    Node* temp;
    //    Node* prev;
    //    temp = head;
    //    prev = head;
    //    //if position on the head node
    //    for (int i = 0; i < index; i++) {
    //        if (i == 0 && index == 1) {
    //            head = head->next;
    //            free(temp);
    //        }
    //        else {
    //            if (i == index - 1 && temp) {//current not null
    //                prev->next = temp->next;
    //                free(temp);
    //            }
    //            else {
    //                prev = temp;

    //                // index was greater than
    //                // number of nodes in the list
    //                if (prev == NULL)
    //                    break;
    //                temp = temp->next;
    //            }
    //        }
    //    }
    //}
    void deletenode(int key)
    {
        Node* current = head;
        Node* prev = NULL;
        if (current != NULL && current->value == key)
        {
            head = current->next;
            delete current;
            return;
        }
        while (current != NULL && current->value != key)
        {
            prev = current;
            current = current->next;
        }
        if (current == NULL)
        {
            cout << "KEY NOT FOUND !";
            return;
        }
        prev->next = current->next;
        delete current;
    }
    int getnodevalue(int index)
    {
        if (getlistlength() < index)
        {
            cout << "Error index is out of range !";
            exit(0);
        }
        int count = 0;
        Node* current = head;
        while (count != index)
        {
            count++;
            current = current->next;
        }
        return current->value;
    }
    void sortlist()
    {
        Node* i, * j;
        for (i = head; i->next != NULL; i = i->next)
            for (j = i->next; j != NULL; j = j->next)
            {
                if (i->value > j->value)
                {
                    int temp = i->value;
                    i->value = j->value;
                    j->value = temp;
                }
            }
    }
    void reverse()
    {
        Node* current = head, * prev = NULL, * next = NULL;

        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }


};
int main()
{
    linklist l1;
    l1.push(111);
    l1.append(333);
    l1.insertafter(0, 222);
    l1.printlist();
    cout << "length of list " << l1.getlistlength() + 1 << endl;
    l1.push(123);
    l1.push(19);
    // l1.printlist();
    // l1.deletenode(123);
   //  l1.printlist();

    l1.printlist();
    l1.sortlist();
    l1.printlist();
    l1.reverse();
    l1.printlist();
    //cout << "node 1 is ->" << l1.getnodevalue(1) << endl;


    return 0;
}