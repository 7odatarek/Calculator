# include <iostream>
#include <cmath>
using namespace std;
#define pi 3.14159265
void ope();
void calc_add(long double, long double);
void calc_sub(long double, long double);
void calc_mul(long double, long double);
void calc_div(long double , long double );
void calc_mod(long double, long double);
void calc_power(long double);
void square_root(long double);
void root(long double);
void calc_fac(long double);
void trig_fun(long double x);
void calc_1(int);
void calc_2(int);

int main() {
    char ans;
    do {
        ope();
        cout << "Do you want to exit ? (y / n)\n";
        cin >> ans;
    } while (ans == 'n' || ans == 'N');
    return 0;
}

void ope()
{
    int op;
    cout << "Choose an operator \n 1) +\n 2) -\n 3) *\n 4) /\n 5) %\n 6) Power\n 7) Square root\n 8) root\n 9) factorial\n 10) Trigonometric functions\n ";
    cin >> op;
    if (op < 6)
        calc_1(op);
    else if (op > 5 && op < 11)
        calc_2(op);
    else
        cout << "Wrong choose \n";
}

void calc_add(long double x, long double y)
{
    cout << x << " + " << y<< "="<< x + y << endl;
}
void calc_sub(long double x, long double y)
{
    cout << x << " - " << y << " = " << x - y << endl;;
}
void calc_mul(long double x, long double y)
{
    cout << x << " * " << y << " = " << x * y << endl;
}
void calc_div(long double x, long double y)

{
    cout << x << " / " << y << " = " << x / y << endl;
}
void calc_mod(long double x, long double y)
{
    cout << x << " % " << y << " = " << fmod(x, y) << endl;
}
void calc_power(long double x)
{
    float p;
    cout << "Enter the power\n";
    cin >> p;
    cout << x << " ^ " << p << " = " << pow(x, p) << endl;
}
void square_root(long double x)
{
    if (x < 0)
        cout << " the number can not be smaller than 0 !\n";
    else
        cout << "The square root of " << x << " = " << sqrt(x) << endl;
}
void root(long double x)
{
    long double index;
    cout << "Enter the index of the root \n";
    cin >> index;
    cout << "The " << index << "th root of " << x << " = " << pow(x, 1 / index) << endl;
}
void  calc_fac(long double x)
{
    long double sum = 1;
    if (x == 0 )
        x = 1;
    while (x > 0) {
        sum *= x;
        x = --x;
    }
    cout << " = " << sum << endl;
}
void trig_fun(long double x)
{
    int complet = 0;
    int ang = x, num;
    do
    {
        cout << endl << " enter the number of function you want" << endl;
        cout << "1- sin\n" << "2- cos\n" << "3- tan\n" << "4- sec\n" << "5- csc\n" << "6- cot\n" << endl;
        cout << "or press -1 for back\n";
        cin >> num;
        if (num == -1)
            break;
        if (ang >= 360)
            ang = ang % 360;
        switch (num)
        {
        case 1:
            if (ang == 180)
            {
                cout << '0' << endl;
                break;
            }
            cout << endl <<"sin ("<< ang <<')'<<" = "<< sin(ang * pi / 180);
            break;
        case 2:
            if (ang == 90)
            {
                cout << '0' << endl;
                break;
            }
            cout << endl << "cos (" << ang << ')' << " = "<< cos(ang * pi / 180);
            break;
        case 3:
            if (ang == 90 || ang == 270)
            {
                cout << " wrong" << endl;
                break;
            }
            cout << endl << "tan (" << ang << ')' << " = " <<tan(ang * pi / 180);
            break;
        case 4:
            if (ang == 90)
            {
                cout << '0' << endl;
                break;
            }
            cout << endl << "sec (" << ang << ')' << " = " <<1 / (cos(ang * pi / 180));
            break;
        case 5:
            if (ang == 180)
            {
                cout << '0' << endl;
                break;
            }
            cout << endl << sin(ang * pi / 180);
            break;
        case 6:
            if (ang == 180 || ang == 0)
            {
                cout << " wrong" << endl;
                break;
            }
            cout << endl << 1 / (tan(ang * pi / 180));
            break;
        default:
            cout << " wrong choose" << endl;
            break;
        }

    } while (complet == 0);
}
void calc_1(int op)
{
    long double x, y;
    cout << "Enter two numbers\n";
    cin >> x >> y;
    switch (op)
    {
    case 1:
        calc_add(x, y);
        break;
    case 2:
        calc_sub(x, y);
        break;
    case 3:
        calc_mul(x, y);
        break;
    case 4:
        calc_div(x, y);
        break;
    case 5:
        calc_mod(x, y);
        break;
    }
}
void calc_2(int op)
{
    long double x;
    cout << "Enter a number or an angle in degrees \n ";
    cin >> x;
    switch (op) {

    case 6:
        calc_power(x);
        break;
    case 7:
        square_root(x);
        break;
    case 8:
        root(x);
        break;
    case 9:
        calc_fac(x);
        break;
    case 10:
        trig_fun(x);
        break;
    }
}