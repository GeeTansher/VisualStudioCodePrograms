#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    ofstream abc;
    abc.open("abc.txt");
    if (!abc)
    {
        cout << "File not created";
    }
    else
    {
        string str;
        int alpha = 0, num = 0, vow = 0, cons = 0;
        cout << "Enter the string to write in file:";
        getline(cin, str);
        abc << str;
        abc.close();
        ifstream xyz;
        xyz.open("abc.txt");
        char ch;
        xyz >> ch;
        while (!xyz.eof())
        {
            if (isalpha(ch))
            {
                alpha++;
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                    vow++;
                else
                    cons++;
            }
            if (isdigit(ch))
                num++;
            xyz >> ch;
        }
        cout << "No. of Alphabets:" << alpha << "\nNo. of Numbers:" << num << "\nNo. of Vowels:" << vow << "\nNo. of Consonants:" << cons << endl;
        xyz.close();
    }
    return 0;
}
