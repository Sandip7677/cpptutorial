#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

bool mycamp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

int main()
{
    vector<pair<int, int>> v = {{1, 5}, {46, 3}, {2,45}, {8, 34}};
    sort(v.begin(), v.end());
    pair<int,int> p={2,45};
    if (binary_search(v.begin(), v.end(), p,mycamp))
        cout << "found" << endl;
    else
        cout << "not found";
    return 0;
}
