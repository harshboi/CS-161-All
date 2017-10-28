#include <iostream>
#include <string>

using namespace std;

void get_string(string *input){
   cout << "Enter the string: ";
   getline(cin,*input);

}

void set_replace_string(string input,string *replica){
   for(int i = 0;i<input.length();i++){
      cout << "IN" << endl;
      *replica = input;
      cout << i << endl;
      cout << replica;
      if(input.at(i) != ' '){
	 replica[i] = '-';
      }
      else if(input.at(i) == ' '){
	 replica[i] = ' ';
      }
   }
}

int get_search_replace(string input, string &replica){
   char x;
   cout << "Enter a letter: ";
   cin >> x;
   for(int i = 0;input.length()>i;i++){
      if(input.at(i) == x){
	 replica[x] = input[x];
      }
   }
   cout << replica << endl;
}

int main(){
   string input;
   get_string(&input);
   string replica;
   set_replace_string(input,&replica);
   get_search_replace(input,replica);



}
