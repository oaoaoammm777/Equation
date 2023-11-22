#include <iostream>
#include <cmath>
using namespace std;

class Normal {
private:
    double a;
    double b;
    double c;
public:
    void checkout(double a, double b, double c){
        double D;
        D = pow(b, 2) - 4*a*c;
         double root1 = (-b + sqrt(D)) / (2 * a);
         double root2 = (-b - sqrt(D)) / (2 * a);
         if (D > 0) {
             cout << " " << root1 << " " << root2 << endl;
        }
         if (D == 0) {
             cout << " " << root1 << endl;
         }if (D < 0) { cout << "Нет корней"<<endl;  }

        
    }
};
void solve_equation(int a, int b, int c) {
    int D = pow(b, 2) - 4 * a * c;
    if (D > 0) {
        int root1 = (-b + sqrt(D)) / 2 * a;
        int root2 = (-b - sqrt(D)) / 2 * a;
        if (a > 0 && b > 0 && c > 0)
            cout << a << "x^2" << "+" << b << "x" << "+" << c << endl;
        if (a > 0 && b > 0 && c < 0)
            cout << a << "x^2" << "+" << b << "x" << c << endl;
        if (a > 0 && b < 0 && c > 0)
            cout << a << "x^2" << b << "x" << "+" << c << endl;
        if (a > 0 && b < 0 && c < 0)
            cout << a << "x^2" << b << "x" << c << endl;
        if (a < 0 && b > 0 && c > 0)
            cout << a << "x^2" << "+" << b << "x" << "+" << c << endl;
        if (a < 0 && b > 0 && c < 0)
            cout << a << "x^2" << "+" << b << "x" << c << endl;
        if (a < 0 && b < 0 && c > 0)
            cout << a << "x^2" << b << "x" << "+" << c << endl;
        if (a < 0 && b < 0 && c < 0)
            cout << a << "x^2" << b << "x" << c << endl;
    }
    else if (D == 0)
    {
        int root1 = (-b) / 2 * a;
        if (a > 0 && b > 0 && c > 0)
            cout << a << "x^2" << "+" << b << "x" << "+" << c << endl;
        if (a > 0 && b > 0 && c < 0)
            cout << a << "x^2" << "+" << b << "x" << c << endl;
        if (a > 0 && b < 0 && c > 0)
            cout << a << "x^2" << b << "x" << "+" << c << endl;
        if (a > 0 && b < 0 && c < 0)
            cout << a << "x^2" << b << "x" << c << endl;
        if (a < 0 && b > 0 && c > 0)
            cout << a << "x^2" << "+" << b << "x" << "+" << c << endl;
        if (a < 0 && b > 0 && c < 0)
            cout << a << "x^2" << "+" << b << "x" << c << endl;
        if (a < 0 && b < 0 && c > 0)
            cout << a << "x^2" << b << "x" << "+" << c << endl;
        if (a < 0 && b < 0 && c < 0)
            cout << a << "x^2" << b << "x" << c << endl;
    }
    else cout << "Нет решений" << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int D = 0;
    int root1 = 0;
    int root2 = 0;
    double x, y, z;
    char n;
    cin >> x;
    cin >> y;
    cin >> z;
    Normal result;
    cout << "Обычный" << endl;
    result.checkout(x, y, z);
    solve_equation(x, y, z);
    cout << "Would you like to see detailed solve? -Y/N" << endl;
    cin >> n;
    D = pow(y, 2) - 4 * x * z;
    root1 = (-y + sqrt(D)) / 2 * x;
    root2 = (-y - sqrt(D)) / 2 * x;
    if (n == 'y' || n == 'Y')
    {
        if (D > 0) {
            cout << "D = " << "b^2 - 4*a*c = " << D << endl;
            cout << "x1 = " << "-b + sqrt(D)/2a=" << root1 << endl;
            cout << "x2 = " << "-b - sqrt(D)/2a=" << root2 << endl;
        }
        else if (D == 0) { cout << "x1 = " << "-b/2a=" << root1 << endl; }
    }else cout << "Thank you for using app!";
}

