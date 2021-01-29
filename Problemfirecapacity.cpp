#include <iostream> //include iostream for basic input and output services

using namespace std; // needed to use all things in the std namespace and avoid having to prefix things with std::

int main(int argc, char** argv)
{
  int numPeople;
  int maxCapacity; //declaring our variables

  cout << "Input the number of people at the event: ";
  cin >> numPeople; //asking for input and storing it in our variable

  cout << "Input the maximum capacity of the room: ";
  cin >> maxCapacity; //asking for another variable and storing it as well

  if (numPeople <= maxCapacity) //if statement checking to see if maxCapacity is greater or equal to numPeople
  {
    cout << "It is legal to have this many people! You may also have an additional " << (maxCapacity - numPeople) << " people if you wish." << endl; //runs this cout statement if the above condition is true
  }
  else if (numPeople > maxCapacity) //else if statement to see if numPeople is greater than maxCapacity
  {
    cout << "It is illegal to have this many people! You have to remove " << (numPeople - maxCapacity) << " people if you wish to hold this event." << endl; //runs this cout statement if the above condition is true
  }

  return 0; //return 0 because the function int main requires an int return type
}
