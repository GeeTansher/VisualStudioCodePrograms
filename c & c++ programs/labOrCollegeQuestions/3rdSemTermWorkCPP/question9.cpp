#include <iostream>
#include <cstring>
using namespace std;
class OverDemo
{
public:
    void teststring(string str, int y)
    {
        int characters = 0;
        for (int i = y - 1; i >= 0; i--)
        {
            if ((str.at(i) >= 'A' && str.at(i) <= 'Z') || (str.at(i) >= 'a' && str.at(i) <= 'z'))
                characters++;
        }
        cout << "The number of characters from the right side are:" << characters << endl;
    }
    void teststring(string str)
    {
        for (int i = 0; i < str.length() / 2; i++)
        {
            if (str[i] != str[str.length() - i - 1])
            {
                cout << "It is not a Palindrome\n";
                return;
            }
        }
        cout << "It is a Palindrome\n";
    }
};

int main()
{
    OverDemo o1;
    string str;
    cout << "Enter the string:";
    getline(cin, str);
    o1.teststring(str);
    o1.teststring(str, str.length());
    return 0;
}
