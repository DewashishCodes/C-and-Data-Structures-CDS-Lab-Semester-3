#include <iostream>
using namespace std;

int main() {
    // Part 1: Number Sign Checker
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
        cout << "The number is positive." << endl;
    else if (num < 0)
        cout << "The number is negative." << endl;
    else
        cout << "The number is zero." << endl;

    cout << endl;

    // Part 2: Marks to Grade Converter
    int marks;
    cout << "Enter student marks (0-100): ";
    cin >> marks;

    if (marks >= 90)
        cout << "Grade: A" << endl;
    else if (marks >= 80)
        cout << "Grade: B" << endl;
    else if (marks >= 70)
        cout << "Grade: C" << endl;
    else if (marks >= 60)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;

    cout << endl;

    // Part 3: Coordinate Quadrant Checker
    int x, y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    if (x > 0 && y > 0)
        cout << "Point is in Quadrant I" << endl;
    else if (x < 0 && y > 0)
        cout << "Point is in Quadrant II" << endl;
    else if (x < 0 && y < 0)
        cout << "Point is in Quadrant III" << endl;
    else if (x > 0 && y < 0)
        cout << "Point is in Quadrant IV" << endl;
    else if (x == 0 && y == 0)
        cout << "Point is at Origin" << endl;
    else if (x == 0)
        cout << "Point lies on Y-axis" << endl;
    else
        cout << "Point lies on X-axis" << endl;

    return 0;
}
