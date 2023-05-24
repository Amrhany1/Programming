#include <iostream>
using namespace std;
int const MAX_SZ = 100;
class stack
{
private:
    int top;
    int arr[MAX_SZ];
public:
    stack() :top(-1) {}
    void push(int element)
    {
        if (top > MAX_SZ)
        {
            cout << "Stack is full ! " << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = element;
        }
    }
    bool isempty()
    {
        return top == -1;
    }
    void pop()
    {
        if (isempty())
        {
            cout << "stack is empty ! " << endl;
            return;
        }
        else
            top--;
    }
    void pop(int& el)
    {
        if (isempty())
        {
            cout << "stack is empty ! " << endl;
            return;
        }
        else
        {
            el = arr[top];
            top--;
        }
    }
    void gettop(int& el)
    {
        if (isempty())
        {
            cout << "stack is empty ! " << endl;
        }
        else
            el = arr[top];
    }
    int gettop()
    {
        return arr[top];
    }
    void printstack()
    {
        cout << "[ ";
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << " ]" << endl;
    }
};
int main()
{
    stack s1;
    s1.push(10);
    s1.push(11);
    s1.push(12);
    s1.push(13);
    s1.pop();
    int val;
    s1.gettop(val);
    cout << "value = " << val << endl;

    s1.printstack();

    return 0;
}