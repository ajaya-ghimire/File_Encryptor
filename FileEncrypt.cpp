#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string Name_Of_file, encrypt;
    char ch;

    cout << "Enter the name of the file to encrypt: ";
    cin  >> Name_Of_file;
    cout << "Enter name for encrypted file: ";
    cin  >> encrypt;

    fstream inFile(Name_Of_file, ios::in);
    if (!inFile)
    {
        cout << "Error opening file \"" << Name_Of_file << "\".\n";
        return 0;
    }

    fstream outFile(encrypt, ios::out);

    while (!inFile.fail())
    {
        inFile.get(ch);
        ch += 10;
        outFile << ch;
    }

    inFile.close();
    outFile.close();
    return 0;
}
