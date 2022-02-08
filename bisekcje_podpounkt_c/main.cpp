#include <iostream>
#include <cmath>
using namespace std;

float f(float x)
{
    return sin(2*x);
}

float bisekcja(float a, float b, float d)
{
    if(f(a) == 0.0)
        return a;
    if(f(b) == 0.0)
        return b;
    
    float s;
    
    while(b - a > d)
    {
        s = (a + b) / 2;
        if(f(s) == 0.0f)
            return s;
        if(f(a) * f(s) < 0) b = s;
        else a = s;
    }
    return (a+b) / 2;
}

int main() {
    float a=0;
    float b=0;
    float d=0;
    
    cout << "Podaj a" << endl;
    cin >> a;
    cout << "Podaj b" << endl;
    cin >> b;
    cout << "Podaj dokladnosc" << endl;
    cin >> d;
    
    cout << bisekcja(a, b, d) << endl;
    
    
    return 0;
}
