#include <iostream>
#include <fstream>
using namespace std;

int main() {
  int dataTemp;
  //load input file 
  ifstream infile; //declare stream variable
  infile.open("NumberData.txt");

  //load all data in while loop
  while (!infile.eof())
    {
      infile >> dataTemp;
      cout << dataTemp << endl;

      
    }
  
}