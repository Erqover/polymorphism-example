#include <iostream>

using namespace std;

class Krztalt
{
    public:
    virtual void oblicz_pole() = 0;
};

class Kolo :public Krztalt
{
    private:
    float r;
    public:
    Kolo(float x)
    {
        r=x;
    }
    virtual void oblicz_pole()
    {
        cout << "pole koła: " << 3.14*r*2 << endl;
    }
};

class Kwadrat :public Krztalt
{
    private:
    float a;
    public:
    Kwadrat(float x)
    {
        a=x;
    }
    virtual void oblicz_pole()
    {
        cout << "pole kwadratu: " << a*a << endl;
    }
};

int main()
{
    Kolo k(1);
    Kwadrat kw(4);

    Krztalt *wsk;
    wsk = &k;
    wsk -> oblicz_pole();

    wsk = &kw;
    wsk -> oblicz_pole();

    return 0;
}