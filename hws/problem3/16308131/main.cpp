#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inFile;

    string fileName;
    char x;
    int i=1;

    cout << "Enter the input file name: ";
    getline(cin , fileName);

    inFile.open(fileName.c_str());

    do
    {
        inFile.ignore(999 , ',');
        inFile.get(x);
        do
        {
            inFile.get(x);
            if(x != ',')
            {
                if(x != ' ')
                {
                    cout << x;
                }
                else
                {
                    cout << endl;
                }
            }
            else
            {
                cout << endl;
                inFile.get(x);
                inFile.get(x);
                if(x != ' ')
                {
                    cout << x;
                }
                else
                {
                    cout << endl;
                }
                i++;
            }
        }while(x != ' ' && x != ',');
        i++;
    }while(i <= 3);

    return 0;
}
