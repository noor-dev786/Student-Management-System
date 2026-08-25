    #include <iostream>
#include <string>
using namespace std;

int main() {
    string name[100];
    int roll[100];
    float marks[100];
    int n = 0;
    int choice;

    cout << "===== STUDENT MANAGEMENT SYSTEM =====" << endl;

    while(true) {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Show All Students" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1) {
            cout << "Enter Name: ";
            cin >> name[n];
            cout << "Enter Roll No: ";
            cin >> roll[n];
            cout << "Enter Marks: ";
            cin >> marks[n];
            n++;
            cout << "Student Added Successfully!" << endl;
        }
        else if(choice == 2) {
            cout << "\n--- STUDENT LIST ---" << endl;
            if(n == 0) {
                cout << "No students found!" << endl;
            }
            for(int i = 0; i < n; i++) {
                cout << i+1 << ". Name: " << name[i] 
                     << " | Roll: " << roll[i] 
                     << " | Marks: " << marks[i] << endl;
            }
        }
        else if(choice == 3) {
            cout << "Thank you! Exiting..." << endl;
            break;
        }
        else {
            cout << "Invalid Choice! Try Again." << endl;
        }
    }
    return 0;
}