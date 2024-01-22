#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>

using namespace std;

int main(){
    ofstream outFile;
    ifstream inFile;
    
    outFile.open("prng-service.txt");

    string input;
    cout << "Enter 'start' to display a path to a random image. ";
    cin >> input;
    if (input == "start"){
        outFile << "run" << flush;
    }

    outFile.close();

    this_thread::sleep_for(chrono::seconds(15));

    inFile.open("prng-service.txt");
    string randomNumber;
    inFile >> randomNumber;
    inFile.close();

    outFile.open("image-service.txt");
    outFile << randomNumber;
    outFile.close();

    this_thread::sleep_for(chrono::seconds(15));
    inFile.open("image-service.txt");

    string fileText;
    inFile >> fileText;
    cout << fileText;

    inFile.close();

    return 0;
}