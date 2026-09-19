stack<int> s2;
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;

    s2.swap(s);

    cout << "s1 size :" << s.size();
    cout << "s2 size :" << s2.size();
