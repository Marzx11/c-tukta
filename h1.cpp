#include<iostream>
#include<string.h>
#include <time.h>
using namespace std;

struct  Student {
	string id;
	string name;
	float test[3], total; // test [4];
};

void inputData(Student stu[]);
void displayData(Student stu[]);
void sumTest(Student stu[]);
void sortdata(struct Student stu[]);

int main() {
	int n = 5;
	struct Student stu[5];
	inputData(stu);
	sumTest(stu);
	sortdata(stu);
	displayData(stu);
	
	return 0;
}

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
	for(int n = 0; n < 5; n++) {
		stu[n].total = 0.0f;
		for(int m = 0; m < 3; m++) {
			stu[n].total = stu[n].total + stu[n].test[m];
		}
	}
}

void sortdata(Student stu[])
{
	int i,j;
	struct Student temp;
	for (i = 1; i < 5-1; i++)
    {
        for (j = i+1; j < 5; j++)
        {
            if (stu[j].total < stu[j].total)
            {
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            } 
        }
    }
}
void displayData(Student stu[]) {
	for(int n = 0; n < 5; n++) {
		cout << stu[n].id << "\t" << stu[n].name << "\t";
		for(int m = 0; m < 3; m++) {
			cout << stu[n].test[m] << "\t";
		}
		cout << stu[n].total  << endl;
	}
}