#include <iostream>
using namespace std;
void printarry(int arr[],int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
}
// merge arr[9] = { 5,6,7,2,4,9,1,8,3 }
void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int *L = new int[n1];
    int *R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[i+l];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + j + 1];

    int i = 0,j=0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] < R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else 
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++; k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++; k++;
    }
}
void mergesort(int arr[], int l, int r)
{
   
    if (l<r)
    {
        int m = l + (r - l) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[9] = { 5,6,7,2,4,9,1,8,3 };

//bublesort 
   /* int temp;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printarry(arr, 9);*/
//selctionsort   { 5,6,7,2,4,9,1,8,3 } 
  /*  for (int i = 0; i < 9 - 1; i++) 
    {
        int index = i;
        for (int j = i + 1; j < 9; j++)
        { 
            if (arr[j] < arr[index])
                index = j;
        }
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    printarry(arr, 9);*/
//insertionsort { 5,6,7,2,4,9,1,8,3 } 
 /*   int key;
    for (int i = 1; i < 9; i++)
    {
        key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printarry(arr, 9);*/
    mergesort(arr, 0, 8);
    printarry(arr, 9);
    
    return 0;
}