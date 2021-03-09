#include <iostream>
#include <cstdio>

using namespace std;

class Prostokat
{
private:
int a, b;
public: 
void val(int l, int w)
{
    a = l;
    b = w;
}

int Prostokat_area()
{
    return a*b;
}
int Prostokat_perimeter()
{
    return 2*(a+b);
}
};

class Trojkat
{
private:
int p, r, s, h;
public: 
void val(int f, int se, int t, int hi)
{
    p = f;
    r = se;
    s = t;
    h = hi;
}

int Trojkat_area()
{
    return p*h/2;
}
int Trojkat_perimeter()
{
    return (p+r+s);
}
};

class ProstoKwadrat 
{
    int a,b;
    public:
    ProstoKwadrat(int a, int b)
    {
        this->a = a;
        this->b = b;
        cout<<"Prostokat"<<endl;
    }
    ProstoKwadrat(int a)
    {
        this->a = a;
        cout<<"Kwadrat"<<endl;
    }
    
}

class Trojkaty
{
    int a, b, c;
    public: 
    Trojkaty(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    Trojkaty(int a)
    {
        this->a = a;
    }
}

int main()
{
    Trojkat obj1;
    Prostokat obj2;
    obj1.val(2, 3, 5, 6);
    cout<<obj1.Trojkat_area()<<endl<<obj1.Trojkat_perimeter()<<endl;
    obj2.val(6,8);
    cout<<obj2.Prostokat_area()<<endl<<obj2.Prostokat_perimeter()<<endl;
    return 0;
}
