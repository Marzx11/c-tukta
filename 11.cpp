#include<iostream>
#include <iomanip> 
#include<string.h>
using namespace std; 
void getdataidname(string (&idname)[5][2]);
void getdat_test(float scoretest1[5],float scoretest2[5],float scoretest3[5]);
void cal_test(float scoretest1[5],float scoretest2[5],float scoretest3[5],float scora1[5],float scora2[5],float scora3[5],float total[5]);
void sortdata(float a[5]);
void cal_avg(float scora1[5],float scora2[5],float scora3[5],float total[5],float avg[5]);
void displaydata(string (&idname)[5][2],float scora1[5],float scora2[5],float scora3[5],float total[5],float avg[4]);

int main() 
{  
    std::string idname[5][2];
    float scoretest1[5],scoretest2[5],scoretest3[5],scora1[5],scora2[5],scora3[5],total[5],avg[4];
    getdataidname(idname);
    getdat_test(scoretest1,scoretest2,scoretest3);
    cal_test(scoretest1,scoretest2,scoretest3,scora1,scora2,scora3,total);
    cal_avg(scora1,scora2,scora3,total,avg);
    displaydata(idname,scora1,scora2,scora3,total,avg);
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
void getdat_test(float scoretest1[5],float scoretest2[5],float scoretest3[5])
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
void cal_test(float scoretest1[5],float scoretest2[5],float scoretest3[5],float scora1[5],float scora2[5],float scora3[5],float total[5])
{
    int r = 5;
     for(int i=0;i<r;i++)  
    {
        scora1[i] = scoretest1[i]*0.25;
        scora2[i] = scoretest2[i]*0.25;
        scora3[i] = scoretest3[i]*0.50;
        sortdata(scora1);
        sortdata(scora2);
        sortdata(scora3);
    }
    for(int i = 0; i < 5; i++)
    {
		total[i] = scora1[i] + scora2[i] + scora3[i];
	}
}
void sortdata(float a[5]){
	int i, k, j;
    for (i = 1; i < 5; i++) {
        k = a[i];
        j = i - 1;
        while (j >= 0 && a[j] < k) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = k;
    }
}
void cal_avg(float scora1[5],float scora2[5],float scora3[5],float total[5],float avg[4])
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

void displaydata(string (&idname)[5][2],float scora1[5],float scora2[5],float scora3[5],float total[5],float avg[4]) 
{
	int n = 5,c=2;
    cout << " ----------------------------------------------------------------------------------" << endl;
    cout << "  NO.    ID       NAME          Test1(25%)    Test2(25%)    Test3(50%)   Total(100%)" << endl;
    cout << " ----------------------------------------------------------------------------------" << endl;
    for(int i=0;i<n;i++)
    {
        cout << i+1 << ". ";
        for(int j=0;j<c;j++)
        {
            cout <<"\t" << idname[i][j];
        }
        cout << "\t" << scora1[i] << "\t" << scora2[i] << "\t" << scora3[i] << "\t" << total[i] << endl;
    }
        cout << " ----------------------------------------------------------------------------------" << endl;
        cout << "Average of mark " << "\t" << avg[0]/n << "\t" << avg[1]/n << "\t" << avg[2]/n << "\t" << avg[3]/n;
}