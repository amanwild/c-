#include <iostream>
#include <math.h>
using namespace std;

class point
{
    int x, y;
    static int z;
    friend void add(point, point);

public:
    void set(int x1, int y1)
    {
        x = x1;
        y = y1;
        z++;
    }
    // point(int,int);

    void get()
    {

        for (int i = 0; i < z; i++)
        {

            cout << "given point no. " << z << " is (" << x << " , " << y << ")" << endl;
        }
    };
};
void add(point p1, point p2)
{
    int res = ((p1.x + p2.x) ,(p1.y+p2.y));
    cout << res;
}

// point :: point(int x1,int y1){
//     x=x1;y=y1;
// }
int point ::z;
int main()
{
    int p, q, r, n;
    cout << "enter no. of points:";
    cin >> n;
    point a;
    for (r = 0; r < n; r++)
    {
        cout << "enter value of x for point " << r + 1 << " : ";
        cin >> p;
        cout << "enter value of y for point " << r + 1 << " : ";
        cin >> q;
        a.set(p, q);
    }
    a.get();
    void add();
    a.get();

    return 0;
}