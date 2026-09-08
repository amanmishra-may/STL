#include <iostream>
using namespace std;
#include <utility>
int main()
{

    pair<int, int> p = {1, 4};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> pa = {1, {3, 4}};

    cout << pa.first << pa.second.first << pa.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second;

    return 0;
}