#include <iostream>
#define MAX_SIZE 100 // Maximum size of the string
using namespace std;
void addarrays(int* arr, int* arr2, int* arrd)
{

    int* ptr = arrd;
    for (int i = 0; i < 10; i++)
        *(ptr++) = *(arr + i) ;
    for (int i = 0; i < 10 ; i++)
        *(ptr++) = *(arr2 + i);

}
int main() {
  
    int arr[MAX_SIZE]={1,2,3,4,5,6,7,8,9,10};
    int arr2[MAX_SIZE] = { 10,20,30,40,50,60,70,80,90,100 };
    int arrd[MAX_SIZE];
    addarrays(arr, arr2, arrd);
    for (int i = 0; i<20; i++)
        cout << arrd[i] << endl;
    return 0;
}