#include <iostream>
using namespace std;
class Sample
{
public:
    Sample(int a)
    {
        a++;
        cout << "After increament of a is:" << a;
    }
    Sample(int a, int b)
    {
        int y = a * b;
        cout << "\nMultiplication of a,b is:" << y;
    }
};
int area(int x)
{
    return x * x;
}
int area(int x, int y)
{
    return x * y;
}
int main()
{
    int a, b;
    cout << "Enter the value of a and b";
    cin >> a >> b;
    Sample obj(a);
    Sample obj1(a, b);
    int z = area(a);
    cout << "\nArea of square:" << z;
    int s = area(a, b);
    cout << "\nArea of the rectangle is:" << s;
    return 0;
}