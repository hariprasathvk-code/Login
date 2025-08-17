#include <iostream>
#include <string>
using namespace std;

const string USERNAME = "admin";
const string PASSWORD = "1234";
int attempts = 0;
bool accountLocked = false;

// Function prototypes
void Attempts();
void Login();
void LockAccount();
void GrantAccess();

int main() {
    Attempts(); // Start the process
    return 0;
}

// Function to check attempts
void Attempts() {
    if (attempts >= 5) {
        LockAccount();
    } else {
        Login();
    }
}



// Function to lock account
void LockAccount() {
    accountLocked = true;
    cout << "\nAccount Locked due to too many failed attempts!" << endl;
    cout << "Alert: User has been notified." << endl;
}

// Function to grant access
void GrantAccess() {
    cout << "\nLogin Successful! Access Granted." << endl;
}
