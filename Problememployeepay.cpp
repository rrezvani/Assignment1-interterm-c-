#include <iostream> //include iostream for basic input and output services

using namespace std; // needed to use all things in the std namespace and avoid having to prefix things with std::

int main(int argc, char** argv)
{
  float hoursWorked;
  float grossPay;
  float ssTax;
  float fedIncomeTax;
  float stIncomeTax;
  float medInsurance = 10.0; //this variable is pre-determined which is why it is already assigned a value
  float netPay; //declaring our variables as ints because we know that the function will yield decimal values

  cout << "Please input how many hours you worked this week: ";
  cin >> hoursWorked;

  if (hoursWorked > 40) //if statement checking to see if the input is greater than 40
  {
    grossPay = (40.0 * 16.0) + ((hoursWorked - 40.0) * 24.0); //calculation to multiply the first 40 hours by 16, and the additional hours by 1.5 that
  }
  else
  {
    grossPay = hoursWorked * 16.0; //calculation that runs if the user worked 40 hours or less
  }

  ssTax = grossPay * 0.06;
  fedIncomeTax = grossPay * 0.14;
  stIncomeTax = grossPay * 0.05; //calculations to find all the taxes

  netPay = grossPay - ssTax - fedIncomeTax - stIncomeTax - medInsurance; //calculating netPay by subtracting all the taxes

  cout << "Pay before taxes: " << grossPay << endl << "Social Security tax: " << ssTax << endl;
  cout << "Federal income tax: " << fedIncomeTax << endl << "State income tax: " << stIncomeTax << endl << "Medical insurance: " << medInsurance << endl;
  cout << "Net take home pay: " << netPay << endl; //cout statements to output all our calculations

  return 0; //return 0 because the function int main requires an int return type
}
