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
    string stg,encryptedstring,decryptedstring;
    getline(cin,stg);
    int choice;
    bool cond=1;
    while(cond) {
    cout<<endl<<"Press 1 to Print the entered string."<<endl<<"Press 2 to Encrypt the Entered string;"<<endl<<"Press 3 to save the Encrypted string."<<endl<<"Press 4 to print the saved encrypted string"<<endl<<"Press 5 to Decrypt the saved encrypted string."<<"Press 6 to save the Decrypted string."<<endl<<"Press 7 to Print the Decrypted String"<<endl<<"Press 0 exit"<<endl<<"Enter your choice: ";
    cin>>choice;
    switch (choice)
    {
    case 1:
    cout<<stg<<endl<<endl;
        break;

    case 2:
        encryptedstring=EncryptStg(stg);
        encryptedstring=ReverseString(encryptedstring);
        cout<<"Encryption Done!"<<endl<<endl<<endl;
        break;

    case 3:
        cout<<"Encryption Saved!"<<endl<<endl<<endl;
        break;

    case 4:
        cout<<encryptedstring;
        cout<<endl<<endl<<endl;
        break;

    case 5:
        decryptedstring=ReverseString(encryptedstring);
        decryptedstring=DecryptStg(encryptedstring);
        cout<<"Decryption Done!"<<endl<<endl<<endl;
        break;

    case 6:
        cout<<"Decryption Saved!"<<endl<<endl<<endl;
        break;

    case 7:
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
    }

}
