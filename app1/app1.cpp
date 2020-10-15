#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int read_int()
{
    int x;
    cin >> x;
    return x;
}

int main()
{
    cout << "How many numbers do you want to write?" << endl;
    int totalNumbers = read_int();

    vector<int> values;

    for (int i = 0; i < totalNumbers; i++)
    {
        int tmp = read_int();
        values.push_back(tmp);
    }

    ofstream file;
    file.open("values.txt");// /Users/Cryst/Desktop/polsl/repos/FOCB_lab2/app1/test.txt
    
    for (int i = 0; i < totalNumbers; i++)
    {
        file << values[i]<<"\n";
    }

    file.close();
    
    vector<int> readValues;

    ifstream new_file("values.txt");

    if (new_file.is_open())
    {
        string line;

        while (getline(new_file,line)) {

            readValues.push_back(std::stoi(line, nullptr,10));
        }

        new_file.close();
    }
    else {
        cout << "There was a problem with opening the file!";
    }

    float sum = 0;

    for (int i = 0; i < totalNumbers; i++) {
        sum += readValues[i];
    }

    float mean = sum / totalNumbers;
    cout << "Mean= " <<mean<< endl;
}