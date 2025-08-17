#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    double grade, credit, totalCredits = 0, totalGradePoints = 0;

    cout << fixed << setprecision(2); // for 2 decimal places

    for (int i = 1; i <= numCourses; i++) {
        cout << "\nCourse " << i << ":\n";
        cout << "Enter grade (on 10 or 4 scale): ";
        cin >> grade;
        cout << "Enter credit hours: ";
        cin >> credit;

        totalCredits += credit;
        totalGradePoints += grade * credit;

        cout << "Recorded → Grade: " << grade 
             << ", Credit Hours: " << credit << endl;
    }

    double cgpa = totalGradePoints / totalCredits;

    cout << "\n=============================\n";
    cout << "Total Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Your Final CGPA: " << cgpa << endl;
    cout << "=============================\n";

    return 0;
}
