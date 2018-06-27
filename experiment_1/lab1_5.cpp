#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, char const *argv[])
{
    if (argc <= 1)
    {
        exit(1);
    }
    const char *filename = argv[1];
    char *buffer;
    long size;
    ifstream in(filename, ios::in | ios::binary | ios::ate);
    size = in.tellg();
    in.seekg(0, ios::beg);
    buffer = new char[size];
    in.read(buffer, size);
    in.close();
    cout << "the complete file is in a buffer"<<endl;
    cout << buffer << endl;
    delete[] buffer;
    return 0;
}
