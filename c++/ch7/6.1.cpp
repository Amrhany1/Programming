#include<iostream>
#include<cstring>
using namespace std;
int const MAX = 50;
char word[MAX];
void reversit(char word[50]);
int main()
{
	cout << "Enter the word the string that you want : ";
	cin.get(word, MAX);
	reversit(word);
	return 0;
}
void reversit(char word[50])
{
	int len = strlen(word);
	int n = len;
	char str1[50];
	for (int i = 0; i <= len; i++)
	{
		str1[i] = word[--n];
	}
	cout<< str1;
}