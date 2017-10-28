#include <iostream>
#include <string>

using namespace std;
int main(){

}

string guess(string message){
   string x;
   int counter = 0;
   cout << "Enter a non vowel letter: ";
   getline(cin,x);
   for(int i = 0; i <= message.length(); i++){
      if(x == message.at(i)){
	 cout << "The non vowel letter is at " << message.length(i) << endl;
	 counter += 1;
      }


   }
}
