#include<iostream>
using namespace std;
int maxint(int arr[], int n);
int main()
{
	int n;
	int arr[50];
	cout << "Enter the numbers of elements : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the number of elment No." << i + 1 << " : ";
		cin >> arr[i];
	}
	cout << "the biggest number is " <<arr[maxint(arr, n)]<< "\tthe biggest number index is  : " << maxint(arr, n);
	return 0;
}
int maxint(int arr[50], int n)
{
	int large=arr[0], index;
	for (int i = 0; i < n; i++)
	{
		if (large < arr[i])
		{
				large = arr[i];
				index = i;
		}
	}
	return index ;
}