#include <iostream>
#include <math.h>
using namespace std;
const double pi = 3.14;
int main()
{
    ////////////////////Begin1//////////////////////////////////
    size_t a1; cin >> a1;
    size_t P1 = 4*a1; cout << P1;
    ////////////////////Begin2//////////////////////////////////
    size_t a2; cin >> a2;
    size_t S2 = a2*a2; cout << S2;
    ////////////////////Begin3//////////////////////////////////
    size_t a3, b3; cin >> a3;
                   cin >> b3;
    size_t S3 = a3*b3; cout << S3;
    size_t P3 = 2*(a3+b3); cout << P3;
    ////////////////////Begin4//////////////////////////////////
    double d4; cin >> d4;
    double L4 = pi*d4; cout << L4;
    ////////////////////Begin5//////////////////////////////////
    size_t a5; cin >> a5;
    size_t V5 = pow(a5, 3); cout << V5;
    size_t S5 = 6*pow(a5, 2); cout << S5;
    ////////////////////Begin6//////////////////////////////////
    size_t a6, b6, c6; cin >> a6;
                       cin >> b6;
                       cin >> c6;
    size_t V6 = a6*b6*c6; cout << V6;
    size_t S6 = 2*(a6*b6+b6*c6+a6*c6); cout <<  S6;
    ////////////////////Begin7//////////////////////////////////
    double R7; cin >> R7;
    double L7 = 2*pi*R7; cout << L7;
    double S7 = pi*pow(R7, 2); cout <<S7;
    ////////////////////Begin8//////////////////////////////////
    double a8, b8; cin >> a8;
                   cin >> b8;
    double af8 = (a8+b8)/2; cout << af8;
    ////////////////////Begin9//////////////////////////////////
    unsigned double a9, b9; cin >> a9;
                            cin >> b9;
    double sq9 = sqrt(a9*b9);
    ////////////////////Begin10//////////////////////////////////
    unsigned double a10, b10; cin >> a10;
                              cin >> b10;
    cout << a10*a10 + b10*b10;
    cout << a10*a10 - b10*b10;
    cout << a10*a10 * b10*b10;
    cout << a10*a10 / b10*b10;
    ////////////////////Begin11//////////////////////////////////
    unsigned double a11, b11; cin >> a11;
                              cin >> b11;
    cout << abs(a11*a11 + b11*b11);
    cout << abs(a11*a11 - b11*b11);
    cout << abs(a11*a11 * b11*b11);
    cout << abs(a11*a11 / b11*b11);
    ////////////////////Begin12//////////////////////////////////
    unsigned double a12, b12; cin >> a12;
                              cin >> b12;
    double c12 = sqrt(a12*a12 + b12*b12);
                             cout << c12;
    double P12 = a12 + b12 + c12;
                             cout << P12;
    return 0;
}
