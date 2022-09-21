#include <iostream>
#include <fstream>
using namespace std;

int main() {
  int dataTemp, sumData = 0, counter = 0;
  //load input file 
  ifstream infile; //declare stream variable
  infile.open("NumberData.txt");

  //load all data in while loop
  while (infile >> dataTemp)
    {
      //infile >> dataTemp;
      //cout << dataTemp << endl;
      //check to see if data is vaild 
      if (dataTemp >= 0)
      {
        // update cumulative calue of all data and number of data points loaded 
        sumData = sumData + dataTemp;
        counter++;
      }
      else // the value is negative and we should exit
      {
        cout << "Negtive value enccounted " << dataTemp << "." << endl;
        cout << "Will not use rest of the data..." << endl;
        break;
      }
      
      
    }
  cout << "The sum of vaild data is: " << sumData << endl;
  cout << "The number of vaild data points is: " << counter << endl;
  cout << "The average of the vaild data is: " << (static_cast<double>(sumData)/counter) << endl;
  return 0;
}