#include<iostream>
using namespace std;
class Array
{
private:
	int* A;
	int size;
	int length;
public:
	Array()
	{
		size = 10;
		A = new int[size];
		length = 0;
	}
	Array(int sz )
	{
		size = sz;
		A = new int[size];
		length = 0;
	}
	~Array()
	{
		delete []A;
	}
	void swap(int* a, int* b);
	void display();
	void Append(int x);
	void Insert(int x, int index);
	int Delete(int index);
	int linearSearch(int key);
	int move_to_head(int key);
	int binary_search(int key);
	int Get(int index);
	void Set(int index, int new_value);
	int Max();
	int Min();
	int Sum();
	int Avg();
	void Reverse();
	bool Is_Sorted();
	void Sorted_insert(int element);
	Array merge(Array* arr2);
	Array Union(Array* arr2);
	Array Intersection(Array* arr2);
	Array Difference(Array* arr2);
};
void Array::swap(int* a, int* b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
	void Array::display()
	{
		cout << "the following Array is :- \n";
		for (int i = 0; i < length; i++)
			cout << A[i] << "  ";
		cout << endl;
	}
	void Array::Append( int x) //pass by pointer to make sure its modified
		//with out making a copy or make in-line function in case of pass by reference   
	{
		if (length > size)
			cout << "Error the length exceeded the size !\n";
		else
			A[length++] = x;
	}
	void Array::Insert( int x, int index)
	{
		int i;
		if (length > size || length <= index)
			cout << "Error the length exceeded the size !\n";
		else if (index < 0)
			cout << "Error index is negative !\n";
		else {
			for (i = length; i > index; i--)
			{
				A[i] = A[i - 1];
			}
			A[i] = x;
			length++;
		}
	}
	int Array::Delete( int index)
	{
		int x = A[index];
		if (index >= 0 && index < length)
			for (int i = index; i < length - 1; i++)
				A[i] = A[i + 1];
		length--;
		return x;
	}
	int Array::linearSearch(int key)
	{
		for (int i = 0; i < length; i++)
			if (A[i] == key)
				return i;
			else
		        return -1;
	}
	int Array::move_to_head( int key)
	{
		for (int i = 0; i < length; i++)
			if (A[i] == key)
			{
				swap(&A[0], &A[i]);
				return 0;
			}
		return -1;
	}
	int Array::binary_search( int key)
	{
		int l = 0, h = length - 1;
		int mid;
		while (l <= h)
		{
			mid = (h + l) / 2;
			if (key == A[mid])
				return mid;
			else if (key > A[mid])
				l = mid + 1;
			else
				h = mid - 1;
		}
		return -1;
	}
	int Array::Get( int index)
	{
		if (index > 0 && index >length)
			cout << "Error you exceeded the length\n";
		else
			return A[index];
	}
	void Array::Set(int index, int new_value)
	{
		if (index > 0 && index > length)
			cout << "Error you exceeded the length\n";
		else
			A[index] = new_value;
	}
	int Array::Max()
	{
		int max = A[0];
		for (int i = 1; i < length; i++)
			if (A[i] > max)
				max = A[i];
		return max;
	}
	int Array::Min()
	{
		int min = A[0];
		for (int i = 1; i < length; i++)
			if (A[i] < min)
				min = A[i];
		return min;
	}
	int Array::Sum()
	{
		int sum = 0;
		for (int i = 0; i < length; i++)
			sum += A[i];
		return sum;
	}
	int Array::Avg()
	{
		int sum = 0;
		for (int i = 0; i < length; i++)
			sum += A[i];
		return sum / length;
	}
	void Array::Reverse()
	{
		int j, i;
		for (i = 0, j = length - 1; i < j; i++, j--)
			swap(&A[i], &A[j]);
	}
	bool Array::Is_Sorted()
	{
		for (int i = 0; i < length - 1; i++)
			if (A[i] > A[i + 1])
				return false;
			return true;
	}
	void Array::Sorted_insert( int element)
	{
		int i = length - 1;
		if (length == size)
			return;
		while (i > 0 && A[i] > element)
		{
			A[i + 1] = A[i];
			i--;
		}
		A[i + 1] = element;
		length++;
	}
	Array Array::merge( Array* arr2)
	{
		int i = 0, j = 0, k = 0;
		if (!Is_Sorted() || !arr2->Is_Sorted())
		{
			cout << "Error array is not sorted !";
			return *arr2;
		}
		else
		{
			Array arr3;
			arr3.size = length + arr2->length;
			arr3.length = arr3.size;
			arr3.A = new int[arr3.size];
			while (i < length && j < arr2->length)
			{
				if (A[i] <= arr2->A[j])
				{
					arr3.A[k] = A[i];
					i++;
				}
				else
				{
					arr3.A[k] = arr2->A[j];
					j++;
				}
				k++;
			}
			for (i; i < length; i++) {
				arr3.A[k] = A[i];
				k++;
			}
			for (j; j <= arr2->length; j++) {
				arr3.A[k] = arr2->A[j];
				k++;
			}
			return arr3;
		}
	}
	Array Array::Union(Array* arr2)
	{
		int i = 0, j = 0, k = 0;
		if (!Is_Sorted() || !arr2->Is_Sorted())
		{
			cout << "Error array is not sorted !";
			return *arr2;
		}
		else
		{
			Array arr3;
			arr3.size = size + arr2->size;
			arr3.A = new int[arr3.size];
			while (i < length && j < arr2->length)
			{
				if (A[i] < arr2->A[j])
				{
					arr3.A[k] = A[i];
					i++;
				}
				else if (A[i] == arr2->A[j])
				{
					arr3.A[k] = arr2->A[j];
					j++, i++;
				}
				else
				{
					arr3.A[k] = arr2->A[j];
					j++;
				}
				k++;
			}
			for (i; i < length; i++) {
				arr3.A[k] = A[i];
				k++;
			}
			for (j; j <= arr2->length; j++) {
				arr3.A[k] = arr2->A[j];
				k++;
			}
			arr3.length = k - 1;
			return arr3;
		}
	}
	Array Array::Intersection(Array* arr2)
	{
		int i = 0, j = 0, k = 0;
		if (!Is_Sorted() || !arr2->Is_Sorted())
		{
			cout << "Error array is not sorted !";
			return *arr2;
		}
		else
		{
			Array arr3;
			arr3.size = size + arr2->size;
			arr3.A = new int[arr3.size];
			while (i < length && j < arr2->length)
			{
				if (A[i] < arr2->A[j])
					i++;

				else if (A[i] == arr2->A[j])
				{
					arr3.A[k] = arr2->A[j];
					j++, i++, k++;
				}
				else
					j++;

			}
			arr3.length = k;
			return arr3;
		}
	}
	Array Array::Difference( Array* arr2)
	{
		int i = 0, j = 0, k = 0;
		if (!Is_Sorted() || !arr2->Is_Sorted())
		{
			cout << "Error array is not sorted !";
			return *arr2;
		}
		else
		{
			Array arr3;
			arr3.size = size + arr2->size;
			arr3.A = new int[arr3.size];
			while (i < length && j < arr2->length)
			{
				if (A[i] < arr2->A[j])
				{
					arr3.A[k] = A[i];
					i++; k++;
				}
				else if (A[i] == arr2->A[j])
					j++, i++;
				else
					j++;
			}
			for (i; i < length; i++) {
				arr3.A[k] = A[i];
				k++;
			}
			arr3.length = k;
			return arr3;
		}
	}
	int main()
	{
		Array* arr1;
		int  sz,ch,element,index;
		cout << "Enter Size of Array\n";
		cin >> sz;
		arr1 = new Array(sz);

		do
		{
			cout << "\n\nMenu\n";
			cout << "1. Append\n";
			cout << "2. Delete\n";
			cout << "3. BinarySearch\n";
			cout << "4. LinearSearch\n";
			cout << "5. Sum\n";
			cout << "6. min\n";
			cout << "7. max\n";
			cout << "8. Avg\n";
			cout << "9. Reverse\n";
			cout << "10. Check if it sorted or not?\n";
			cout << "11. Display\n";
			cout << "12. Insert\n";
			cout << "13. Exit\n";
			cout << "Enter you choice :  ";
			cin >> ch;
			switch (ch)
			{
			case 1: cout << "Enter an element to Append ";
				cin >> element;
				arr1->Append(element);
				break;
			case 2: cout << "Enter index ";
				cin >> index;
				element = arr1->Delete(index);
				cout << "Deleted Element is" << element;
				break;
			case 3:cout << "Enter element to search ";
				cin >> element;
				index = arr1->binary_search(element);
				cout << "Element index " << index;
				break;
			case 4:cout << "Enter element to search ";
				cin >> element;
				index = arr1->linearSearch(element);
				cout << "Element index " << index;
				break;
			case 5:cout << "The sum of the array is :  "<<arr1->Sum()<<endl;
				break;
			case 6:cout << "The min of the array is :  " << arr1->Min() << endl;
				break;
			case 7:cout << "The Max of the array is :  " << arr1->Max() << endl;
				break;
			case 8:cout << "The Avg of the array is :  " << arr1->Avg() << endl;
				break;
			case 9:cout << "The array is reversed \n";
				arr1->Reverse();
				break;
			case 10:(arr1->Is_Sorted()) ? cout << "Is sorted \n" : cout << "Is not sorted \n";
				break;
			case 11:arr1->display();
				break;
			case 12:cout << "Enter the element then index :- "<< endl;
				cin >> element >> index;
				arr1->Insert(element, index);
				break;
			case 13:
				ch = 100;
				break;
			}
		} while (ch < 13);
		return 0;
	}