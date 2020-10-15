#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
    
    ofstream file;
    file.open("new_file.txt");// /Users/Cryst/Desktop/polsl/repos/FOCB_lab2/app1/test.txt
    file << "This is the first line!\n";
    file << "This is the first second!\n";
    file << "This is the first thrid!\n";
    file.close();

    ifstream new_file("new_file.txt");

    if (new_file.is_open())
    {
        int selected_line=1;
        int counter = 0;

        string line;
        while (getline(new_file,line)) {
            if (counter == selected_line)
            {
                cout << line << endl;
            }
            counter++;
        }
        new_file.close();
    }
    else {
        cout << "There was a problem with opening the file!";
    }

}