queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;


priority_queue<int> qe;
    priority_queue<int, vector<int>, greater<int>> q 
        q.push(5);
    q.push(3);
    q.push(10);
    q.push(4);

    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}


priority_queue<int, vector<int>, greater<int>> q --> functor(function object)