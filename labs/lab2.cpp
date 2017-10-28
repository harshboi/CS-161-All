#include <iostream>
#include <cmath>
#define NUM_BITS_IN_BYTE 100
using namespace std;

int main(){
cout << "A char takes up " << 8 * sizeof(char) << " bits of data" << endl;
cout << "A int takes up " << 8 * sizeof(int) << " bits of data" << endl;
cout << "A long takes up " << 8 * sizeof(long) << " bits of data" << endl;
cout << "A short takes up " << 8 * sizeof(short) << " bits of data" << endl;
cout << "A float takes up " << 8 * sizeof(float) << " bits of data" << endl;
cout << "A double takes up " << 8 * sizeof(double) << " bits of data" << endl;
cout << "A bool takes up " << 8 * sizeof(bool) << " bits of data" << endl;

cout << pow(2,32) + 1 << endl;
cout << pow(5,3) << endl;
cout << sqrt(25) << endl;
cout << fmod(34,5) << endl;
cout << fabs(-50) << endl;
cout << sqrt(pow(2,64)) << endl;

return 0;
}
