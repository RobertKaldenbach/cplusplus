//preprocessor directives have # in front of them and their purpose is to have additional code appended before being compilied.  This code is usually c++ or user created libraries
#include <iostream>
#include <string>

//namespaces are used to define what library or file that should be used to find certain funcitons.  Namespaces can have broader or narrower scopes depending on use.

using namespace std;


//int main is the start of the actual program.  It will almost always return a value to the OS
int main(){
    //Declare a variable to store an integeter
    int inputNumber;

//cout and cin are streams.  cout outputs data while cin will store data to a variable.

    cout << "Enter an integer:";

    //store integer given user input
    cin >> inputNumber;

    // The same with text i.e. string data
    cout << "Enter your name:";
    string inputName;
    cin >> inputName;

    //Output string
    cout << inputName << " entered " << inputNumber << endl;

//This is the return of int main.
    return 0;

}
