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
    string temp = Nstg;
    for(int i=0;i<temp.size();i++) {
        temp[i]=temp[i] + 4;
    }
    return temp;

}

string DecryptStg(string Nstg)
{
    string temp = Nstg;
    for(int i=0;i<temp.size();i++) {
        temp[i]=temp[i] - 4;
    }
    return temp;

}

int main()
{
    cout << "Enter a string: ";
    string stg,encryptedstring,decryptedstring,e2n;
    getline(cin,stg);
    int choice;
    bool cond=1;
    while(cond) {
    cout<<endl<<endl<<endl;
    cout<<endl<<"Press 1 to Print the entered string.";
    cout<<endl<<"Press 2 to Encrypt the Entered string;";
    cout<<endl<<"Press 3 to print the saved encrypted string";
    cout<<endl<<"Press 4 to Decrypt the saved encrypted string.";
    cout<<endl<<"Press 5 to Print the Decrypted String";
    cout<<endl<<"Press 0 exit";
    cout<<endl<<"Enter your choice: ";
    cin>>choice;
    cout<<endl<<endl<<endl;
    switch (choice)
    {
    case 1:
    cout<<stg<<endl<<endl;
        break;

    case 2:
        encryptedstring=EncryptStg(stg);
        cout<<"Encryption Done!"<<endl<<endl<<endl;
        break;

    case 3:
        cout<<encryptedstring;
        cout<<endl<<endl<<endl;
        break;

    case 4:
        decryptedstring=DecryptStg(encryptedstring);
        cout<<"Decryption Done!"<<endl<<endl<<endl;
        break;

    case 5:
        cout<<decryptedstring;
        cout<<endl<<endl<<endl;
        break;

    case 0:
        cond=0;
        break;

    default:
        cout<<"Enter a valid Choice!!";
        break;
    }
    }//upload

}
