// zeyad osama hassan   20206620 
#include<iostream>
#include <map>
using namespace std;
map<char, char> lookup_table = {
    { 'A', 'Z' }, { 'B', 'Y' }, { 'C', 'X' }, { 'D', 'W' },
    { 'E', 'V' }, { 'F', 'U' }, { 'G', 'T' }, { 'H', 'S' },
    { 'I', 'R' }, { 'J', 'Q' }, { 'K', 'P' }, { 'L', 'O' },
    { 'M', 'N' }, { 'N', 'M' }, { 'O', 'L' }, { 'P', 'K' },
    { 'Q', 'J' }, { 'R', 'I' }, { 'S', 'H' }, { 'T', 'G' },
    { 'U', 'F' }, { 'V', 'E' }, { 'W', 'D' }, { 'X', 'C' },
    { 'Y', 'B' }, { 'Z', 'A' }
};

string atbash(string message)
{
    string cipher = "";
    for (char letter : message) {
       
        if (letter != ' ') {
           
            cipher += lookup_table[toupper(letter)];
        }
        else {
            cipher += ' ';
        }
    }
    return cipher;
}

int main()
{
    cout << "enter plain text !\n";
    char message[50];
    cin.getline(message,50 );
    cout << atbash(message) << "\n";
    return 0;
}