#include <iostream>
using namespace std;
#include <vector>

int main()
{

    vector<int> vec = {1, 2, 3, 4, 5};

    vec.clear();

    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << vec.size() << " " << vec.capacity();
    return 0;
}