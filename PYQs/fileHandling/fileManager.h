#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>
using namespace std;

class FileManager
{
private:
    string fileName;

    bool fileExists();
    void displayFileContents();
    void appendToFile();
    void createNewFile();

public:
    FileManager(const string &name);
    void manageFile();
};

#endif // FILEMANAGER_H