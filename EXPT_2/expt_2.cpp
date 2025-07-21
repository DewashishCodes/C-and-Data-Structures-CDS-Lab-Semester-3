#include <iostream>
using namespace std;

int externVar = 50;

void showStatic() {
    static int s = 0;
    s++;
    cout << "Static variable: " << s << endl;
}

int main() {
    char c;
    int i;
    float f;
    double d;
    bool b;
    long l;
    long long ll;

    cout << "Enter a character: ";
    cin >> c;
    cout << "Value: " << c << ", Size: " << sizeof(c) << " byte" << endl;

    cout << "\nEnter an integer: ";
    cin >> i;
    cout << "Value: " << i << ", Size: " << sizeof(i) << " bytes" << endl;

    cout << "\nEnter a float: ";
    cin >> f;
    cout << "Value: " << f << ", Size: " << sizeof(f) << " bytes" << endl;

    cout << "\nEnter a double: ";
    cin >> d;
    cout << "Value: " << d << ", Size: " << sizeof(d) << " bytes" << endl;

    cout << "\nEnter a boolean (0 or 1): ";
    cin >> b;
    cout << "Value: " << b << ", Size: " << sizeof(b) << " byte" << endl;

    cout << "\nEnter a long integer: ";
    cin >> l;
    cout << "Value: " << l << ", Size: " << sizeof(l) << " bytes" << endl;

    cout << "\nEnter a long long integer: ";
    cin >> ll;
    cout << "Value: " << ll << ", Size: " << sizeof(ll) << " bytes" << endl;

    int a = 5;
    cout << "\nAuto variable: " << a << endl;

    register int r = 10;
    cout << "Register variable: " << r << endl;

    showStatic();
    showStatic();

    cout << "Extern variable: " << externVar << endl;

    return 0;
}
