#include <iostream>
using namespace std;
void order(int* var1, int* var2)
{
    if (*var1 > *var2)
    {
        int temp = *var1;
        *var1 = *var2;
        *var2 = temp;
    }
}
void bsort(int* arr, int n)
{
    for (int i=0; i<n-1;i++)
        for (int j = i + 1; j < n; j++)
        {
            order(arr + i, arr + j);
        }
}
int main()
{
    int arr[10] = {5,6,4,3,9,2,1,20,16,10};
    bsort(arr, 10);
    for (int i = 0; i < 10; i++)
        cout << arr[i]<<endl;
    return 0;
}