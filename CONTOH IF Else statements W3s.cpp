#include <iostream>
using namespace std;

int main()
{
    char name;
    int password;

    cout << "Enter the name: "; cin >> name;
    cout << " Enter your password: "; cin >> password;
    if (name == 'DANIEL') {
        if (password == 1346) {
            cout << "Login successful";
        }
        else {
            cout << "Incorrect PASSWORD, Try again.";
        }
    }
    else {
        cout << " Incorrect Login Details, Try again.";
    }
}
