#include <iostream>
#include <string>
using namespace std;
int main(){
    // Array of student names
    string names[3] = {"Arshad", "Ali", "Majid"};
    int rollNumbers[3] = {01, 02, 03}; // Include roll numbers for each student

    // Loop 
    for (int i = 0; i < 3; i++) {
        cout << "Name of student: " << names[i] << "\n Roll Number: " << rollNumbers[i] << "\n";
    }

return 0;
}
