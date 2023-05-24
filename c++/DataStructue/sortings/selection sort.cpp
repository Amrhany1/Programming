#include <iostream>
using namespace std;
int main()
{
    int A[6] = {31,41,59,26,41,58};
    for (int i = 0; i < 6-1; i++)
    {
        int minindex=i;
        for (int j=i+1; j < 6; j++) 
        {
            if (A[j] < A[minindex])
            {
                minindex = j;
            }
        }
        int temp = A[i];
        A[i] = A[minindex];
        A[minindex]=temp;
    }
    for (int i = 0; i < 6; i++)
        cout << A[i]<<"\n";
    return 0;
}