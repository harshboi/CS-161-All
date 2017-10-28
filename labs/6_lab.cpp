#include <iostream>
#include <string>

using namespace std;

void get_string(string *);
void set_replace_string(string &,string *);
int get_search_replace(string &, string &);

int main(){
   string letter;
   get_string(&letter);
   string replica;
   set_replace_string(replica,&letter);
   get_search_replace(replica,letter);
}

void get_string(string *letter){
   cout << "Enter the string: ";
   getline(cin,*letter);
   string replica;
}

void set_replace_string(string &replica, string *letter){
   replica = *letter;
   int x = replica.length();
   for(int i = 0;i < x;i++){
      if(replica.at(i)!= ' '){
      	replica[i] = '-';
      }
      else if(replica.at(i) == ' '){
      replica[i] = ' ';
      }
   }cout << replica << endl;
}

int get_search_replace(string &replica, string &letter){
   cout << "Enter the letter you want to search for";
   char x;
   cin >> x;
   cout << endl;
  /* for(int i = 0;i <= replica.length();i++){
      if(letter.at(i) != ' ' and letter.at(i) != (char) replica){
         cout << "_ ";
      }
      else if(letter.at(i) == ' '){
	 cout << "  ";
      }
      else if(letter.at(i) == replica){
	 cout << replica;
      }
   return 0;
   
   }
*/
   for(int i = 0; i < letter.length();i++){
   	if(letter.at(i) == x){
	   replica[i] = x;
	}
   }
cout << replica;
}
