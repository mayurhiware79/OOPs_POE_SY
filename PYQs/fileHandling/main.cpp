#include "FileManager.h"
#include <iostream>

using namespace std;

int main()
{
    string fileName;
    cout << "Enter the file name: ";
    cin >> fileName;

    // Create a FileManager object and manage the file
    FileManager fileManager(fileName);
    fileManager.manageFile();

    return 0;
}