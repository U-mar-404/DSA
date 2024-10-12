#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

string ReverseString(string Nstg)
{
    string temp = Nstg;
    reverse(temp.begin(), temp.end());
    return temp;
}

string EncryptStg(string Nstg)
{
}

int main()
{
    cout << "Enter a string: ";
    string stg;
    getline(cin,stg);
    cout << ReverseString(stg);
}
