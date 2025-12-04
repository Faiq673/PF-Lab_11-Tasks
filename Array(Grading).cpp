#include <iostream>
using namespace std;

int main() {
    float cgpa[6] = { 3.5, 4.0, 2.8, 3.2, 3.9, 2.5 };
    cout << "GPA Grading\n";
    cout << "<<===============>>\n";
    for (int i = 0; i < 6; i++) {
        float gpa = cgpa[i];
        char grade;
        if (gpa >= 3.6 && gpa <= 4.0)
            grade = 'A';
        else if (gpa >= 3.1 && gpa <= 3.5)
            grade = 'B';
        else if (gpa >= 2.6 && gpa <= 3.0)
            grade = 'C';
        else if (gpa >= 2.1 && gpa <= 2.5)
            grade = 'D';
        else
            grade = 'F';
        cout << gpa << "\t" << grade << endl;
    }
    return 0;
}
