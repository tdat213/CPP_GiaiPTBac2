#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, delta, x1, x2;
    cout << "Nhap a: ";
    cin >> a;

    if (a == 0) {
        cout << "PT vo nghiem";
        return 0;
    }

    cout << "Nhap b: ";
    cin >> b;

    cout << "Nhap c: ";
    cin >> c;

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        cout << "PT vo nghiem";
    }
    else if (delta == 0) {
        x1 = -b / (2 * a);
        cout << "PT co nghiem kep x = " << x1;
    }
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "PT co hai nghiem phan biet: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 ;
    }
    return 0;
}



