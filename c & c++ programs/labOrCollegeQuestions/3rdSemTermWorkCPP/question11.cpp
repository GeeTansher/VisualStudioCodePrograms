// with friend function

// #include <iostream>
// using namespace std;

// class UnaryFriend
// {
//     int a;
//     int b;

// public:
//     void getvalues()
//     {
//         cout << "Enter values of A & B\n";
//         cin >> a >> b;
//     }

//     void show()
//     {
//         cout << "A:" << a << "\n" << "B:" << b << "\n" << endl;
//     }

//     void friend operator-(UnaryFriend &x);
//     void friend operator++(UnaryFriend &);
//     void friend operator--(UnaryFriend &);
//     void friend operator++(UnaryFriend &, int);
//     void friend operator--(UnaryFriend &, int);
// };

// void operator-(UnaryFriend &x)
// {
//     x.a = -x.a;
//     x.b = -x.b;
// }

// void operator++(UnaryFriend &x)
// {
//     ++x.a;
//     ++x.b;
// }

// void operator--(UnaryFriend &x)
// {
//     --x.a;
//     --x.b;
// }
// void operator++(UnaryFriend &x, int q)
// {
//     x.a++;
//     x.b++;
// }

// void operator--(UnaryFriend &x, int q)
// {
//     x.a--;
//     x.b--;
// }
// int main()
// {
//     UnaryFriend x1;
//     UnaryFriend x2;
//     x1.getvalues();
//     cout << "Before Overloading\n";
//     x1.show();
//     -x1;
//     cout << "After Overloading \n";
//     x1.show();
//     x2.getvalues();
//     cout << "Before Post increment Overloading\n";
//     x2.show();
//     x2++;
//     x2++;
//     cout << "After Post increment Overloading \n";
//     x2.show();
//     cout << "Before Pre increment Overloading\n";
//     x2.show();
//     ++x2;
//     cout << "After Pre increment Overloading \n";
//     x2.show();
//     x1.getvalues();
//     cout << "Before Post decrement Overloading\n";
//     x1.show();
//     x1--;
//     cout << "After Post decrement Overloading \n";
//     x1.show();
//     cout << "Before Pre decrement Overloading\n";
//     x1.show();
//     --x1;
//     cout << "After Pre decrement Overloading \n";
//     x1.show();
//     return 0;
// }

// without friend function

#include <iostream>
using namespace std;

class UnaryFriend
{
    int a;
    int b;

public:
    void getvalues()
    {
        cout << "Enter values of A & B\n";
        cin >> a >> b;
    }

    void show()
    {
        cout << "A:" << a << "\n"
             << "B:" << b << "\n"
             << endl;
    }
    void operator-()
    {
        a = -a;
        b = -b;
    }

    void operator++()
    {
        ++a;
        ++b;
    }

    void operator--()
    {
        --a;
        --b;
    }
    void operator++(int q)
    {
        a++;
        b++;
    }

    void operator--(int q)
    {
        a--;
        b--;
    }
};

int main()
{
    UnaryFriend x1;
    UnaryFriend x2;
    x1.getvalues();
    cout << "Before Overloading\n";
    x1.show();
    -x1;
    cout << "After Overloading \n";
    x1.show();
    x2.getvalues();
    cout << "Before Post increment Overloading\n";
    x2.show();
    x2++;
    x2++;
    cout << "After Post increment Overloading \n";
    x2.show();
    cout << "Before Pre increment Overloading\n";
    x2.show();
    ++x2;
    cout << "After Pre increment Overloading \n";
    x2.show();
    x1.getvalues();
    cout << "Before Post decrement Overloading\n";
    x1.show();
    x1--;
    cout << "After Post decrement Overloading \n";
    x1.show();
    cout << "Before Pre decrement Overloading\n";
    x1.show();
    --x1;
    cout << "After Pre decrement Overloading \n";
    x1.show();
    return 0;
}
