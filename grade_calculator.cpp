#include <iostream>
using namespace std;

int main() {
    double mark1, mark2, mark3;
    double total, average;

    cout << "Enter marks for 3 subjects: ";
    cin >> mark1 >> mark2 >> mark3;

    if (mark1 < 0  mark1 > 100||mark2 < 0  mark2 > 100 ||mark3 < 0 || mark3 > 100)
    {
        cout << "Invalid marks!";
        return 0;
    }

    total = mark1 + mark2 + mark3;
    average = total / 3;

    cout << "Total Marks: " << total << endl;
    cout << "Average: " << average << endl;

    if (average >= 80)
        cout << "Grade: A+";
    else if (average >= 70)
        cout << "Grade: A";
    else if (average >= 60)
        cout << "Grade: A-";
    else if (average >= 50)
        cout << "Grade: B";
    else if (average >= 40)
        cout << "Grade: C";
    else if (average >= 33)
        cout << "Grade: D";
    else
        cout << "Grade: F";

    return 0;
}
