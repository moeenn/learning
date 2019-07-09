#include <iostream>
#include <fstream>
using namespace std;

void writeFile(string &filename, string &line ) {
    ofstream file;
    file.open(filename, ios::app);
    file << line << endl;
    file.close();
}

void readFile(string &filename) {
    ifstream file(filename);
    string line;

    if( !file ) {
        cerr << "File not found";
    } else {
        while( file ) {
            getline(file, line);
            cout << line << endl;
        }
    }
    file.close();
}

int main() {
    cout << "Enter file name: ";
    string filename;
    getline(cin, filename);
    cout << "Enter > ";
    string line;
    getline(cin, line);

    writeFile(filename, line);
    readFile(filename);

    return 0;
}
