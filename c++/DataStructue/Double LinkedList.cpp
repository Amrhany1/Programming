#include <iostream>
using namespace std;
class Node
{
public :
    int value;
    Node* next;
    Node* prev;
    Node() :value(NULL), next(NULL), prev(NULL)
    {}
    Node(int v, Node* n, Node* p) :value(v), next(n), prev(p)
    {}
};
class DLL
{
public:
    Node* head = NULL;
    static int length;
    
    void printforwardList()
    {
        cout << "Print forward list :-" << endl;
        Node* current=head;
        if (current == NULL)
            cout << "[  ]" << endl;
        cout << "[ ";
        while (current)
        {
            cout <<  " " << current->value << "  ";
           current= current->next;
        }
        cout << " ]"<<endl;
    }
    void PrintBackwardList()
    {
        Node* current = head;
        if (current == NULL)
            cout << "[  ]" << endl;
        else
        {
            while (current->next)
            {
                current = current->next;

            }
            cout << "Print backward list :-" << endl;
            cout << "[ ";
            while (current)
            {
                cout << " " << current->value << "  ";
                current = current->prev;
            }
            cout << " ]" << endl;
        }
    }
    void Printlist()
    {
        int n;
        cout << "If you want to print forward Enter 1 print backward Enter 2 :  "; cin >> n;
        (n == 1) ? printforwardList() : PrintBackwardList();
    }
    int  GetListLength()
    {   
        return length-1;
    }
    void push(int value)
    {
        Node* newnode = new Node();
        newnode->value = value;
        if (head == NULL)
        {
            head = newnode;
            head->prev = NULL;
            head->next = NULL;
        }
        else
        {
            newnode->next = head;
            head->prev=newnode;
            newnode->prev = NULL;
            head = newnode;
                
        }
            length++;
    }
    void insertAfter(int index,int newvalue )
    {
        if (index > GetListLength()&&index>0) {
            cout << "inedx that you enterd is out of bound !" << endl;
            return;
        }
        else {
            Node* newnode = new Node();
            Node* prevnode = head;
            newnode->value = newvalue;
            int counter = 0;
            while (counter != index)
            {
                prevnode = prevnode->next;
                counter++;
            }
            newnode->next = prevnode->next;
            prevnode->next = newnode;
            newnode->prev = prevnode;

            if (newnode->next) 
                newnode->next->prev = newnode;
        }
        length++;
    }
    void append(int value)
    {
        if (head  ==NULL)
        {
            cout << "Error DLL is empty ! ";
            return;
        }
        else
        {
            Node* newnode = new Node();
            Node* oldLastNode = head;
            newnode->value = value;
            newnode->next = NULL;
            while (oldLastNode->next)
            {
                oldLastNode = oldLastNode->next;
            }
            newnode->prev = oldLastNode;
            oldLastNode->next = newnode;
        }
        length++;
    }
    bool linearsearch(int key)
    {
        Node* current = head;
        int index = 0;
        while (current->next!=NULL)
        {
            index++;
            current = current->next;
            if (current->value == key)
            {
                break;
            }
            
        }
        if (current->next==NULL) {
            cout << "Not found ! " << endl; return false;
        }
        else {
            cout << "Found ! index is : " << index << endl;
            return true;
        }
    }
    int getnodevalue(int index)
    {
        if (index > GetListLength() && index > 0) {
            cout << "index that you enterd is out of bound !" << endl;
            return -1;
        }
        else 
        {
            Node* current = head;
            int counter = 0;
            while (counter != index)
            {
                current = current->next;
                counter++;
            }
            return current->value;
        }
    }
    void setNodeValue(int index, int newvalue)
    {
        if (index > GetListLength() && index > 0) {
            cout << "index that you enterd is out of bound !" << endl;
            return;
        }
        else
        {
            Node* current = head;
            int counter = 0;
            while (counter != index)
            {
                current = current->next;
                counter++;
            }
            current->value = newvalue;
        }
    }
    void clear()
    {
        Node* current = head;
        Node* next=NULL;
        while (current)
        {
            next = current->next;
            delete current;
            current = next;
        }
        head = NULL;
        length = 0;
    }
    void deleteBegin()
    {
        Node* current = head;
        head = current->next;
        head->prev = NULL;
        delete current;
        length--;
    }
    void deleteEnd()
    {
        Node* current = head;
        while (current->next!= NULL)
        {
            current = current->next;
        }
        current->prev->next = NULL;
        delete current;
        length--;
    }
    void deleteNode(int index)
    {
        if (index == 0)
            deleteBegin();
        else if (index == GetListLength())
            deleteEnd();
        else
        {
            Node* current = head;
            int i = 0;
            while (i!=index)
            {
                current = current->next;
                i++;
            }
            current->prev->next = current->next;
            current->next->prev = current->prev;
            delete current;
            length--;
        }
    }
    void reverse()
    {
        Node* temp=NULL;
        Node* current = head;
        if (GetListLength() == 0)
        {
            cout << "Error list is empty or just have 1 node ! " << endl;
            return;
        }
        else
        {
            while (current)
            {
                temp = current->prev;
                current->prev = current->next;
                current->next = temp;
                current = current->prev;
            }
               if (temp != NULL) //moving head to the tail !
                 head = temp->prev; 
        }
    }
    void swapNodeValue(int indexDest, int indexLocal)
    {
        Node* n1 = NULL;Node *n2 = NULL;
        Node* current = head;
        if ((indexDest > GetListLength() || indexLocal > GetListLength())&& (indexDest > 0 && indexLocal>0) )
        {
            cout << "index that you enterd is out of bound !" << endl;
            return;
        }
        else if (indexLocal == indexDest)
        {
            cout << "Error you same index in the parameter ! " << endl;
            return;
        }
        else
        {
            int counter = 0;
            while (current->next)
            {
                if (counter == indexLocal)
                    n1 = current;
                
                else if (counter == indexDest)
                    n2 = current;
                current=current->next;
                counter++;
            }
                int temp = n1->value;
                n1->value = n2->value;
                n2->value = temp;
        }
    }

};
int DLL::length = 0;
int main()
{
    DLL *dl = new DLL();
   dl->push(11);
    dl->Printlist();
    dl->push(33);
    dl->push(12);
    dl->push(165);
    cout << "lenth of list is : " << dl->GetListLength();
    dl->insertAfter(2, 88);
    dl->Printlist();
    dl->Printlist();
    dl->append(76);
    dl->append(67);
    dl->Printlist();
    dl->Printlist();
    dl->linearsearch(2);
    dl->linearsearch(88);
    cout << "the value of this node is : " << dl->getnodevalue(2) << endl;
    cout << "length of list is : " << dl->GetListLength()<<endl;
    dl->clear();
    dl->Printlist();
    dl->deleteNode(3);
    dl->clear();
    dl->Printlist();
    dl->setNodeValue(2, 90);
    dl->Printlist();
    dl->swapNodeValue(2, 3);
    dl->Printlist();
    return 0;
}