#include<iostream>
#include<string.h>
#include <time.h>
#include<algorithm>
using namespace std;

struct  Student {
	string id;
	string name;
	float test[3], total,avg; // test [4];
};
void inputData(Student stu[]);
void sumTest(Student stu[]);
void sortdata(Student a[], int n);
void displayData(Student stu[]);

void inputData(Student stu[]) 
{
	float j[5][3];
	srand(time(0)); 
	for(int n = 0; n < 5; n++) {
		cout << "Enter Id : ";
		cin >> stu[n].id;
		cout << "Enter Name : ";
		cin >> stu[n].name;
	}
	for(int n = 0; n < 5; n++){
		for(int m = 0; m < 3 ; m++){
            j[n][m] = rand() % 100 + 1;
        }
	}
    for(int i = 0; i < 5; i++){
        for(int v = 0; v < 3 ; v++){
            if (v < 2)
			{
				stu[i].test[v] =j[i][v] * 0.25;
			}
            else
			{
				stu[i].test[v] = j[i][v] * 0.50;
			}
        }
    }
}
void sumTest(Student stu[]) 
{
	for(int n = 0; n < 5; n++) 
	{
		stu[n].total = 0.0f;
		for(int m = 0; m < 3; m++) 
		{
			stu[n].total += stu[n].test[m];
		}
	}
}
bool compareTwoStudents(Student a, Student b)
{
    // If total marks are not same then
    // returns true for higher total
    if (a.total != b.total)
        return a.total > b.total;
}
void sortdata(Student a[], int n)
{
    sort(a, a + 5, compareTwoStudents);
}

void displayData(Student stu[])
{
	float w;
	for(int i=0;i<5;i++){
		w += stu[i].total;
		stu[i].avg = 0.0f;
		for(int j=0;j<3;j++)
			stu[j].avg += stu[i].test[j];
	}
	cout << " ----------------------------------------------------------------------------------" << endl;
    cout << "  NO.    ID       NAME          Test1(25%)    Test2(25%)    Test3(50%)   Total(100%)" << endl;
    cout << " ----------------------------------------------------------------------------------" << endl;
	for(int n = 0; n < 5; n++) {
		cout << n+1 << "\t" << stu[n].id << "\t" << stu[n].name << "\t";
		for(int m = 0; m < 3; m++) {
			cout << stu[n].test[m] << "\t";
		}
		cout << stu[n].total  << endl;
	}
	cout << " ----------------------------------------------------------------------------------" << endl;
	cout << "Average of mark " << stu[0].avg/5 <<"\t" << stu[1].avg/5 <<"\t" << stu[2].avg/5  <<"\t" << w/5 <<"\t";
}

int main() {
	int n = 5;
	struct Student s[5];
	struct Student stu[5];
	inputData(stu);
	sumTest(stu);
	sortdata(stu,n);
	displayData(stu);
	return(0);
}