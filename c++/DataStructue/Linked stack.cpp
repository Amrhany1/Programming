#include <iostream>
using namespace std;
class Node
{
public :
    int value;
    Node* next;
    Node() :value(NULL), next(NULL)
    {}
    Node(int v, Node* n) :value(v), next(n)
    {}
};
class stack
{
private:
   Node* top=NULL;
public :
   void push(int val)
   {
       Node* newnode = new Node();
       newnode->value = val;
        newnode->next = top;
        top=newnode;
   }
   bool isempty()
   {
       return top == NULL;
   }
   void pop()
   {
       if (isempty())
       {
           cout << "Erorr the stack is empty ! " << endl;
           return;
       }
       else
       {
           Node* temp = top;
           top=top->next;
           delete temp;
       }
   }
   void pop(int &val)
   {
       if (isempty())
       {
           cout << "Erorr the stack is empty ! " << endl;
           return;
       }
       else
       {
           Node* temp = top;
           val = temp->value;
           top=top->next;
           delete temp;
       }
   }
   int gettopval()
   {
       if (isempty())
       {
           cout << "Erorr the stack is empty it will return 0 !" << endl;
           return 0;
       }
       else
       return top->value;
   }
   void printstack()
   {
       Node* ptrtop = top;
       cout << "[ " ;
       while (ptrtop)
       {
           cout << ptrtop->value << "  ";
           ptrtop = ptrtop->next;
       }
       cout << " ]" << endl;
   }
};
int main()
{
    stack s1;
    int n;
    s1.push(12);
    cout << s1.isempty()<<endl;
    s1.push(13);
    s1.push(14);
    s1.push(15);
    s1.push(16);
    s1.pop(n);
    s1.printstack();
    return 0;
}