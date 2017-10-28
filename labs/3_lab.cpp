#include <iostream>
#include <string>

using namespace std;

int main(){
	char user(1);
	string name = "Mathew Lohr";
	char a(1);
	do{
		cout << "Does the T.A have brown hair: ";
		cin  >> a;
		if(a == 'y'){
			cout << "You got the hair color right " << endl;
		}
		else{
			cout << "You got the hair color wrong" << endl;
		}

		cout << "Does the T.A have a grey shirt: ";
		cin >> a;
		if(a == 'y'){
			cout << "You got it right " << endl;
		}
		else{
			cout << " You got shirt color wrong " << endl;
		}
		cout << "Whats the T.A's gender (Type in male or feale): ";
		cin >> name; 
		if (name == "Male"){
			cout << "you got it right" << endl; 
		}
		else{
			cout << "You got the gender wrong " << endl;
		}
		cout << "Guess the T.A's first name: ";

		cin >> name;
		if(name == "Matthew"){
			cout << "You got it right " << endl;
			
		}
		else{
			cout << "You got it wrong " << endl;
		}
	cout << "To try again enter Y: ";
	cin >> user;

	}while(user == 'Y');
}

