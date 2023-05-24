#include <iostream>
using namespace std;
float avg(float* arr, int n)
{
   int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }
    return sum/n;
}
int getarr(float* arr)
{
   int i = 0;
   char y_N;
    do 
    { 
        cout << "Enter the number : ";
        cin >> *(arr+i);
        i++;
        cout << "Do you want to Enter onther number (y/n)? \n";
        cin >> y_N;
    } while (y_N=='y');
    return i;
}
int main()
{
    int n;
    float number[100];
    n = getarr(number);

   cout<< avg(number, n);
    return 0;
}