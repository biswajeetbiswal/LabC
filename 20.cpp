#include <iostream>
using namespace std;
class square
{
public:
    void display(int x)
    {
        int z = x * x;
        int p = 4 * x;
        cout << "\nArea of square:" << z << "\nPerimeter of square:" << p;
    }
};
class rectangle : public square
{
public:
    void show(int x, int y)
    {
        int z = x * y;
        int p = 2 * (x + y);
        cout << "\nArea of rectangle:" << z << "\nPerimeter of rectangle:" << p;
    }
};
class triangle : public rectangle
{
public:
    void row(int x, int y, int z)
    {
        float s = (x * y) / 2;
        int p = x + y + z;
        cout << "\nArea of triangle:" << s << "\nPerimeter of triangle:" << p;
    }
};
int main()
{
    int x, y, z;
    cout << "Enter the value of x,y,z";
    cin >> x >> y >> z;
    triangle t;
    t.row(x, y, z);
    t.show(x, y);
    t.display(x);
    return 0;
}
