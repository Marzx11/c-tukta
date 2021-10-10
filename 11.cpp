#include<iostream>
#include <iomanip> 
#include<string.h>
using namespace std; 
void getdataidname(string (&idname)[5][2]);
void getdat_test(float scoretest1[],float scoretest2[],float scoretest3[]);
void cal_test(float scoretest1[],float scoretest2[],float scoretest3[],float scora1[],float scora2[],float scora3[],float total[]);
void sortdata(float a[]){;
void cal_test(float scora1[],float scora2[],float scora3[],float total[],float avg[]);
void cal_test(float scora1[],float scora2[],float scora3[],float total[],float avg[]);

int main() 
{  
    std::string idname[5][2];
    getdataidname(idname);
    
}

void getdataidname(string (&idname)[5][2])
{
    int r = 5,c = 2;
     for(int i=0;i<r;i++)  
    {
        for(int j=0;j<c;j++)
        {
        cout << i+1 << ". Enter id&name : ";
        cin >> idname[i][j];
        }
        cout << "----------------------------------\n";
    }
}
void getdat_test(float scoretest1[],float scoretest2[],float scoretest3[])
{
    srand(time(0));
    int r = 5,c = 3;
     for(int i=0;i<r;i++)  
    {
        scoretest1[i] = rand() % 100 + 1;
        scoretest2[i] = rand() % 100 + 1;
        scoretest3[i] = rand() % 100 + 1;
    }
}
void cal_test(float scoretest1[],float scoretest2[],float scoretest3[],float scora1[],float scora2[],float scora3[],float total[])
{
    int r = 5;
     for(int i=0;i<r;i++)  
    {
        scora1[i] = scoretest1*0.25;
        scora2[i] = scoretest2*0.25;
        scora3[i] = scoretest3*0.50;
        sortdata(scora1);
        sortdata(scora2);
        sortdata(scora3);
    }
    for(int i = 0; i < 5; i++){
		total[i] = scora1[i] + scora2[i] + scora3[i];
	}
}
void sortdata(float a[]){
	int i, k, j;
    for (i = 1; i < 20; i++) {
        k = a[i];
        j = i - 1;
        while (j >= 0 && a[j] < k) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = k;
    }
}
void cal_test(float scora1[],float scora2[],float scora3[],float total[],float avg[])
{
    for (int i = 0; i < 4; i++) {
        avg[i] = 0;
    }
    for (int i = 0; i < 5; i++) {
        avg[0] += scora1[i];
        avg[1] += scora2[i];
        avg[2] += scora3[i];
        avg[3] += total[i];
    }
}

void displaydata(string (&idname)[5][2],float scora1[],float scora2[],float scora3[],float total[],float avg[]) 
{
	int n = 20;
    cout << " ----------------------------------------------------------------------------------" << endl;
    cout << "  NO.    ID       NAME          Test1(25%)    Test2(25%)    Test3(50%)   Total(100%)" << endl;
    cout << " ----------------------------------------------------------------------------------" << endl;
  
}