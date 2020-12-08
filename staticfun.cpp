#include <iostream>
using namespace std;

class exam
{
    char name[20];
    int marks;
    static int count;

public:
    static void counter(void)
    {
        count++;
        cout << count << endl;
    }
    void getdata(void);
    void printdata(void);
};
void exam ::getdata()
{
    cout << "put student name " << endl;
    cin >> name;
    cout << "put student marks " << endl;
    cin >> marks;
    cout << endl;
}
void exam ::printdata()
{

    cout << "student name is " << endl;
    cout << name << endl;
    cout << "student marks is " << endl;
    cout << marks << endl;
    cout << endl<< endl;
}
int exam ::count;
int main()
{
    exam std1, std2, std3;
    std1.getdata();
    exam :: counter();
    std1.printdata();
    std2.getdata();
    exam ::counter();
    std2.printdata();
    std3.getdata();
    exam :: counter();
    std3.printdata();
    return 0;
}