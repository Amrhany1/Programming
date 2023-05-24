#include <iostream>
using namespace std;
int main()
{
    int A[6] = {31,41,59,26,41,58};
    int key;
    for (int i = 1; i  <6; i++)
    {
        key = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] < key)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
    for (int i = 0; i < 6; i++)
        cout << A[i]<<"\n";
    return 0;
}
