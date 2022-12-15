#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    Complex operator+(Complex obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.img = img + obj.img;
        return res;
    }

    Complex operator-(Complex obj)
    {
        Complex res;
        res.real = real - obj.real;
        res.img = img - obj.img;
        return res;
    }

    void display()
    {
        if (img < 0)
        {
            img = 2 * img - img;
            cout << real << " -i" << img << endl;
        }
        else
        {
            cout << real << " +i" << img << endl;
        }
    }
};

int main()
{
    Complex a(2, 5), b(3, 4), c;
    cout<<"First complex no,: ";a.display();
    cout<<"Second complex no,: ";b.display();
    c = a + b;
    cout << "Add:";
    c.display();
    c = a - b;
    cout << "Subtract:";
    c.display();
}
