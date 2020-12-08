#include <iostream>
#include<string>
using namespace std;
class student
{
    string std;
    string name;
    string mark;

public:
    void indata(void);
    void printdata(void);
};
void student ::indata()
{
    cout << "input student name" << endl;
    cin >> name;
    cout << "input student standard" << endl;
    cin >> std;
    cout << "input student marks" << endl;
    cin >> mark;
}
void student ::printdata()
{
    cout << "student name ,std and marks are given below" << endl;
    cout << name << endl<< std << endl<< mark << endl<< endl;
}
int main()
{
    student stnd[10];
    for (int i = 0; i < 10; i++)
    {
        stnd[i].indata();
    }
     for (int i = 0; i < 10; i++)
    {
        stnd[i].printdata();
    }

    return 0;
}