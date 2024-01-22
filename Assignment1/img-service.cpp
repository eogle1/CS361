#include <fstream>
#include <iostream>

using namespace std;

int main(){
    cout << "Finding image... " << endl;
    ifstream inFile;
    ofstream outFile;
    inFile.open("image-service.txt");

    string randomNumber;
    inFile >> randomNumber;

    inFile.close();
    outFile.open("image-service.txt");

    int pictureNumber = (stoi(randomNumber) % 8) + 1;
    outFile << "images/image-";
    outFile << pictureNumber;
    outFile << ".png";

    outFile.close();
    return 0;
}