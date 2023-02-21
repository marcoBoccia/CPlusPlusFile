#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream fileInput("../maggio.txt"); // apro il file in lettura
    ofstream fileOutput("../output.txt"); // apro il file in scrittura

    if (fileInput.is_open())
    {
        cout << "File in lettura aperto correttamente." << endl;
    }else
    {
        cout << "File in lettura non aperto correttamente." << endl;
    }
    if (fileOutput.is_open()){
        cout<< "File in scrittura aperto correttamente." << endl;
    }else
    {
        cout<< "File in scrittura non aperto correttamente." << endl;
    }

    int i = 1;
    string riga;
    while (getline(fileInput, riga))
    {
        if (riga != ""){
            fileOutput<<i<<" - "<< endl;
            i++;
            cout<<i<<"-"<<riga<<endl;
        }
    }
    fileInput.close();
    fileOutput.close();
}
