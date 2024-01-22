#include <fstream>
#include <random>
#include <iostream>

using namespace std;

int main(){
    cout << "Generating number..." << endl;
    srand(clock());
    ifstream inFile;
    ofstream outFile;
    inFile.open("prng-service.txt");

    string command;
    getline(inFile, command);

    inFile.close();
    outFile.open("prng-service.txt");

    if (command == "run"){
        int randomNumber = rand();
        string random = to_string(randomNumber);
        outFile << random << flush;
    }

    outFile.close();

    return 0;
}