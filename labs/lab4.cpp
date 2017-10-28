#include <iostream>  // Wrong spelling
using namespace std; // no namespace std;

int main() {

   int x = 3, y;
   char myAnswer;

   y = x;
   cout << "y is set to: " << y << endl;

   //cout << "Please input a number: ";
   //cin >> y;  // wrong operator direction
   int again = true;  // no again type declared and no semi colon at the end
   while (again) {
      cout << "Please input a number: ";
      cin >> y;  // wrong operator direction
      if (x > y) {  // no curly braces, causing faulty else 
	 cout << "X is greater than Y\n";
	 cout << "would you like to input another number ?" << endl;   // No quotes over here and wrong sided '>>'
	 cin >> again;
      }
      else {
	 cout << "X is less than Y" << endl;
	 cout << "would you like to input another number?" << endl;   // wrong sided ">>"
	 cin >> again;
      }
   }
   for (x = 0; x < 10; x = x + 1) {   // what is for loop running missing curly brackets
      cout << x << endl;
   }
   int num;    // was'nt declared
   cout << "What number would you like to find the factorial for? " << endl;
   cin >> num;        // no num declared and missing semicolon
   for (int x = num; x > 0; x--) {
      x = x * x;
   }
   cin.clear();
   cin.ignore(256,'\n');
   cout << "The factorial is: " << x;
   char myanswer;
   cout << "Are you enjoying cs161? (y or n) ";
   cin >> myanswer;  // my answer not declared
   if (myanswer == 'y'){   // missing single quotes for y 
      cout << "YAY" << endl;
   }
   else{
      cout << "YOU WILL SOON!" << endl;
   }
   return 0;

}
