#include <iostream>
#include <string>
using namespace std;
void get_sentence(string &);

int main(){
   string sentence;
   get_sentence(sentence);
   cout << sentence <<endl;
}

void get_sentence(string &s){
   string x;
   cout << "Enter your input: ";
   getline(cin,x);
   s = x;
}
