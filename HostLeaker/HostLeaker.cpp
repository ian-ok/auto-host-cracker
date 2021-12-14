#include <iostream>
#include <Windows.h>
#include "exploit/exploit.h"

using namespace std;

int main() {
    string fileName;

    cout << "Enter a file: ";
    cin >> fileName;
    
    const bool execExploit = exploit::doExploit(fileName);

    if (execExploit) {
        cout << "Exploit done successfully!";
        Sleep(5000);
        exit(0);
    }
    else {
        cout << "File either doesn't exist or is read-only :(";
        Sleep(3000);
        exit(0);
    }
}