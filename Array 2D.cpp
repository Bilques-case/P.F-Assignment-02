#include <iostream>
#include <string>
using namespace std;

int main() {
    // 2D array to store names of students and their roll numbers
    string students[6][2] = {
        {"Arshad", "01"},{"Ali", "02"},{"Majid", "03"},{"Usman" , "04"},{"Farhan", "05"},{"Ayesha" , "06"},
    }

    // Display header
   ; cout << "Name of Students\tRoll Number\n";
    cout << "________________________________\n";

    //Display each name and their  roll number
    for (int i = 0; i < 6; i++) {
        cout << students[i][0] << "\t\t\t" << students[i][1] << "\n";
    }

    return 0;
}

