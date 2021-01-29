#include <iostream> //include iostream for basic input and output services

using namespace std; // needed to use all things in the std namespace and avoid having to prefix things with std::

int main(int argc, char** argv)
{
  float metricTon = 35273.92;
  float userInput;  //declaring our variables

  cout << "Please input the weight of a package of cereal in ounces: "; //asking for user input
  cin >> userInput; //storing the user's input into our variable

  cout << "The weight of this package of cereal in tons is " << (userInput / metricTon) << endl; //print statement that includes our calculation
  cout << "Number of boxes needed to yield one ton of cereal: " << (metricTon / userInput) << endl; //print statement that includes our calculation

  return 0; //return 0 because the function int main requires an int return type


}
