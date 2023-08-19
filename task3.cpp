#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inFile;
    string fileName;
    string word;
    int count = 0;

    cout << "Please enter the file name ";
    getline(cin, fileName);

    inFile.open(fileName.c_str());

    while (!inFile.eof())
    {
        inFile >> word;
        count++;
    }

    cout << "Number of words in the given file is " << count;
    inFile.close();
    return 0;
}