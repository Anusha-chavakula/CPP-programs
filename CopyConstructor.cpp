
#include <iostream>
using namespace std;

class Demo
{
private:
    int x, y;
public:
    Demo(int x1,int y1)
    {
        x = x1;
        y = y1;

    }
    Demo(const Demo & d2)
    {
        x = d2.x;
        y = d2.y;
    }
    void area(int l,int b)
    {
        cout << "Area of rectangle is " << l * b << endl;
    }
    void area(int l)
    {
        cout << "Area of square is " << l * l << endl;
    }

    
};
int main()
{
    int l, b;
    cout << "Enter length and breadth \n";
    cin >> l >> b;
    Demo d1(l,b);
    Demo d2=d1;
    d2.area(l,b);
    d2.area(b);
}
