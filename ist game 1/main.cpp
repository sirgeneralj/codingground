#include <iostream>

using namespace std;

int main()
{
   string fname;
   string lname;
   string name;
   short int age;
   string job;
   cout << "Welcome to the Matrix, You have been placed here for your own protection as part as our new witness protection program" << endl;
   cout << "As the system is relatively new we need to ask a few questions" <<endl << "Please enter your first name: ";
   cin >> fname;
   cout << "\nNow please enter your last name: ";
   cin >> lname;
   cout << "\nAnd now your age: ";
   cin >> age;
   name = fname + " " + lname;
   cout << "\nOkay " << name << " What was your occupation before you were integrated: ";
   getline (cin, job);
   cout << "\nThankyou for logging onto our system, we will now read  your brain waves to create your profile ";
   return 0;
}

