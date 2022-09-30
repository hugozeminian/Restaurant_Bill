/*
Program B: Restaurant Bill

Overview:

Write a program to split a restaurant bill evenly between a given number of
people.

Directions

Write a program for calculating and splitting restaurant bills. Your program
should ask the user how much the bill is before applying tax, what percentage
the sales tax is, what percentage tip they would like to add, and how many
people are splitting the bill. Calculate the final cost of the bill by first
adding the sales tax, then adding the tip. Find the cost per person by dividing
the bill by the number provided. Print each value to the console: the bill
before tax, the bill after tax, the bill after tip, and the bill per person.

The listing below shows an example of what the input and output for this program
might look like. Input by the user is listed in blue.

Sample Input/Output:

How much is the bill? 57.75
How much is the tax (%)? 5
How much is the tip (%)? 20
How many people are paying? 3
Bill before tax: 57.75
Bill after tax:  60.64
Bill after tip:  72.76
Bill per person: 24.26

*/

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  float bill, tax, tip;
  int numOfPeople;
  cout << "How much is the bill?" << endl;
  cin >> bill;
  cout << "How much is the tax (%)?" << endl;
  cin >> tax;
  cout << "How much is the tip (%)?" << endl;
  cin >> tip;
  cout << "How many people are paying?" << endl;
  cin >> numOfPeople;
  // ToDo

  return 0;
}
