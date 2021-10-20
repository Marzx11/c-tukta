#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// Prototype
string format(string);
int main()
{
// The following string will hold the user's input.
string userDate;
// The following string will hold the formatted date.
string formattedDate;
// Get a date from the user.
cout << "Enter a date in the form dd/mm/yyyy: ";
cin >> userDate;
// Format the date.
formattedDate = format(userDate);
// Display the formatted date.
cout << "You entered " << formattedDate << endl;
return 0;
}
// The format function accepts a date in the form mm/dd/yyyy
// as a string, and returns the date in the form March 12, 2014.
string format(string date)
{
int month; // To hold the numeric month
string temp; // Temporary storage
string result; // To hold the formatted date
// The following string array holds the names of
// the months.
string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September",
"October", "November", "December" };
  
std::string str2 = date.substr (0,2); // "month"
temp = date.substr (3,2)+" , "+ date.substr (6,4); // "day , year"
istringstream ( str2 ) >> month; // convert string to int type
result = months[month-1]+" "+temp;
return result;
}