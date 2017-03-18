#include <iostream>
#include<fstream>

using namespace std;

int main(int argc, char *argv[])
{
    ofstream outFile;
    outFile.open("text.txt");
    outFile << " Taras Krutoi chubs";
    outFile << " 5";
    cout << "Hello World!" << endl;
    return 0;
}
