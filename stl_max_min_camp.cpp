// #include <iostream>
// #include <vector>
// #include <utility>
// #include <algorithm>

// using namespace std;

// struct point
// {
//     int x, y;
//     point(int i, int k)
//     {
//         x = i;
//         y = k;
//     }
// };

// bool mycamp(point p1, point p2)
// {
//     return p1.x < p2.x;
// }

// int main()
// {
//     vector<point> v = {{12, 4}, {23, 6}, {78, 1}, {4, 3}};
//     auto it = max_element(v.begin(), v.end(),mycamp);
//     cout << it->x << " " << it->y << endl;
//     it = min_element(v.begin(), v.end(),mycamp);
//     cout << it->x << " " << it->y << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

// struct point
// {
//     int x, y;
//     point(int i, int k)
//     {
//         x = i;
//         y = k;
//     }
// };

bool mycamp(pair<int,int> p1,pair<int,int> p2)
{
    return p1.first < p2.first;
}

int main()
{
    vector<pair<int,int>> v = {{12, 4}, {23, 6}, {78, 1}, {4, 3}};
    auto it = max_element(v.begin(), v.end(),mycamp);
    cout << it->first << " " << it->second << endl;
    it = min_element(v.begin(), v.end(),mycamp);
    cout << it->first << " " << it->second << endl;

    return 0;
}