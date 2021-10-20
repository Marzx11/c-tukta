#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;
char *months(int m);
int main()
{
    string m;
    char sm[];
    char slash;
    int date,month,year;
    cout << "Input Date(dd/mm/yyy) : ";
    cin >> date >> slash >> month >> slash >> year;
    cout << date << month << year;
    months(month);
    cout << "Month name : " << sm[month-1] << endl;
    return(0);
}
char *months(int month)
{
    char* sm[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    return sm[month-1];
}
