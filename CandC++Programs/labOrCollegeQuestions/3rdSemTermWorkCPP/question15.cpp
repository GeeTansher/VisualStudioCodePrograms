#include <iostream>
#include <cmath>
#include <iomanip>
const float PI = 3.14;
using namespace std;
class Cal_Volume
{
public:
    float r, h;
    Cal_Volume()
    {
        r = 0;
        h = 0;
    }
    void getdata()
    {
        cout << "Enter radius and height:" << endl;
        cin >> r >> h;
    }
    virtual void display_volume() = 0;
};

class Cone : public Cal_Volume
{
public:
    void display_volume()
    {
        cout << "Volume of Cone " << (1 / (float)3) * PI * r * r * h << endl;
    }
};

class Hemisphere : public Cal_Volume
{
public:
    void display_volume()
    {
        cout << "Volume of Hemisphere " << (2 / (float)3) * PI * r * r * r << endl;
    }
};

class Cylinder : public Cal_Volume
{
public:
    void display_volume()
    {
        cout << "Volume of Cylinder " << PI * r * r * h << endl;
    }
};

int main()
{
    Cal_Volume *ca;
    Cone co;
    Cylinder cy;
    Hemisphere h;
    ca = &co;
    ca->getdata();
    ca->display_volume();
    ca = &cy;
    ca->getdata();
    ca->display_volume();
    ca = &h;
    ca->getdata();
    ca->display_volume();
    return 0;
}
