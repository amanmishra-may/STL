bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if(p1.second>p2.second)
        return false;
    if(p1.first<p2.first)
        return true;
    else
        return false;
}

int main()
{
    int arr[5] = {3, 5, 1, 8, 2};
    sort(arr, arr + 5);

    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    vector<int> vec = {3, 5, 1, 8, 2};
    sort(vec.begin(), vec.end(), greater<int>()); // greater<int> --> functor or comparitor
    for (auto val1 : vec)
    {
        cout << val1 << " ";
    }
    cout << endl;

    vector<pair<int, int>> vp = {{4, 5}, {3, 2}, {1, 1}};

    sort(vp.begin(), vp.end(), comparator); // greater<int> --> functor or comparitor and this one is custom comparator
    for (auto val2 : vp)
    {
        cout << val2.first << val2.second << endl;
    }
    cout << endl;

    return 0;
}
