#include <iostream>
using namespace std;
class Temperature
{
public:
    float temp;
    void setTempData(float t1)
    {
        temp = t1;
    }
    virtual void changeTemp() = 0;
};

class Fahrenheit : public Temperature
{
public:
    float ctemp;
    void changeTemp()
    {
        ctemp = (5.0 / 9.0) * (temp - 32);
        temp = ctemp;
        cout << "The Temperature in Celsius is :" << ctemp << endl;
    }
};

class Celsius : public Temperature
{
public:
    float ftemp;
    void changeTemp()
    {
        ftemp = (9.0 / 5.0) * (temp) + 32;
        cout << "The Temperature in Fahrenheit is :" << ftemp;
    }
};

int main()
{
    float temp;
    cout << "Enter the Temperature in Fahrenheit:";
    cin >> temp;
    Fahrenheit o2;
    o2.setTempData(temp);
    o2.changeTemp();
    Celsius o3;
    cout << "Enter the Temperature in Celsius:";
    cin >> temp;
    o3.setTempData(temp);
    o3.changeTemp();
    return 0;
}
