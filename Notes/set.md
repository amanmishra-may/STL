set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for (auto val : s)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "Lower bound" << *(s.lower_bound(4)) << endl;
    cout << "Lower bound" << *(s.upper_bound(4)) << endl;


    // ------------------------>MULTI SET

    // Multi set 
    // Unordered Set
    // same as map