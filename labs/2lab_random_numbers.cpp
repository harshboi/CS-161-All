#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){

int x;
srand(time(0));
//srand(23);

x = rand()%6;
cout << "X = " << x << endl;

/*
x = rand();
cout << "X = " << x << endl;
*/

if(x == 0){
cout << " Bummer, I'm zero!!! " << endl;
}
else if(x == 1 || x == 3 || x == 5){
cout << " I'm an odd number " << endl;
}
else
cout << " I'm an even number " << endl;


}
