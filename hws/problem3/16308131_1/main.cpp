#include <iostream>
#include <fstream>

using namespace std;

int main() {
  //declarations
  ifstream inFile;
  string filename;
  char x;//for testing and output
  const string InvalidChars = ",./\"'~[]{}()?!<> ";

  //let user input the file name
  cout << "Enter the input file name: ";
  cin >> filename;
  inFile.open(filename.c_str());

  //failure report
  if (!inFile) {
      cout << "Input Failure!" << endl;
      return -1;
  }

  //for output 3 times
  for (int i=1 ; i<=3 ; i++) {
    //to solve x being swollen by the previous loop
    if (x != ',') {
      inFile.ignore(999 , ',');
    }
    //inFile.get until valid
    for (;;) {
      inFile.get(x);
      if (InvalidChars.find(x) == string::npos) {
        break;
      }
    }
    //output valid chars and terminate at the invalid
    cout << x;
    for (;;) {
      inFile.get(x);
      if (InvalidChars.find(x) == string::npos) {
        cout << x;
      } else {
        break;
      }
    }
    cout << endl;
  }
  inFile.close();
  return 0;
}
