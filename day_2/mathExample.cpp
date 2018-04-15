#include <iostream>
using namespace std;

// Declare a function
int DemoConsoleOutput();

int main()
{
    // Call the function
    DemoConsoleOutput();

    return 0;
}

//Define the function that was declared
int DemoConsoleOutput()
{
    cout << "This is a simple string literal" << endl;
    cout << "Writing number five: " << 5 << endl;
    cout << "Performing division 10/5=" << 10/5 << endl;
    cout << "Pi when approximated using 22/7 =" << 22/7 << endl;
    cout << "Pi is 22/7 = " << 22.0/7 << endl;

  //Lines added for quiz
    cout << "Performing subtraction 10-5 = " << 10-5 << endl;
    cout << "Performing multiplication 5*20 = " << 5*20 << endl;

return 0;
}
