#include "FileManager.h"
#include <iostream>
#include <fstream>

using namespace std;

// Constructor to initialize file name
FileManager::FileManager(const string &name) : fileName(name) {}

// Check if the file exists
bool FileManager::fileExists()
{
    ifstream file(fileName);
    return file.good();
}

// Display the contents of the file
void FileManager::displayFileContents()
{
    ifstream file(fileName);
    string line;
    cout << "File contents:\n";
    while (getline(file, line))
    {
        cout << line << endl;
    }
    file.close();
}

// Append data to the file
void FileManager::appendToFile()
{
    ofstream file(fileName, ios::app);
    if (!file)
    {
        cerr << "Error: Unable to open file for writing.\n";
        return;
    }
    cin.ignore(); // Clear input buffer
    cout << "Enter data to append to the file: ";
    string userData;
    getline(cin, userData);
    file << userData << endl; // uniq one syntax
    file.close();
}

// Create a new file and take user input
void FileManager::createNewFile()
{
    ofstream file(fileName);
    if (!file)
    {
        cerr << "Error: Unable to create file.\n";
        return;
    }
    cin.ignore(); // Clear input buffer
    cout << "Enter data to store in the new file: ";
    string userData;
    getline(cin, userData);
    file << userData << endl;
    file.close();
}

// Manage the file operations
void FileManager::manageFile()
{
    if (fileExists())
    {
        cout << "File exists.\n";
        displayFileContents();
        appendToFile();
    }
    else
    {
        cout << "File does not exist. Creating a new file...\n";
        createNewFile();
    }
    cout << "Operation completed successfully.\n";
}