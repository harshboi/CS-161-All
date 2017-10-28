/*********************************************************************
 * Program Filename: 5thassignment.cpp
 * Author: Harhsvardhan Singh
 * Date: 3-5-2017
 * Description: Bowling Game
 * Input: Names of different players
 * Output: Scores of all the players 
 **********************************************************************/  
#include <iostream>
#include <vector>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <cmath>
#define m 10
#define n 10

// test to check if data persists
// test failed
// retest

// Create the printing board;
// Create the enter and next bowl thing

using namespace std;

int spin_for_strike(int );
void print_board(char **,char **,int ,int [m][n]);

void name(char **names,int j){
    spin_for_strike()
    char fname[50];
    cout << "What is your name: ";
    cin.getline(fname,50);  
    for(int i = 0;i<strlen(fname);i++){
	names[j][i] = fname[i];
	//cout << "Value of j is: " << j << endl;
	//cout << "value of i is: " << i << endl;
    }
    //cout <<"SCESS";
}


void create_array(int ***bowl_scores,int num){
    *bowl_scores = new int* [num];
    spin_for_strike()
    for(int i=0;i<num;i++){
	//cout << "REACHED";
	*bowl_scores[i] = new int[50]; // Creates a num*50 2-D array
    }
}
/*
   int spare(int sum,int **summ){
   if(sum == 10){
//sum  
} 


}
*/

/*
   void bowl(int **bowl_scores,int num,int **summ){
   int i = 0;
   int num_spins = 0;
   int rounds = 9;
   int k = 0;
   int sum = 0;
   int x = 0,spp = 0,sp = 0;
   for(int j = 0;j<rounds;j++){
   x = x + 2;
   for(int i = 0;i<num;i++){
   if(i==num){
   i = 0;
   }
   sum = 0;
   for(int turns=0;turns<2;turns++){
   cout << "Turn number is: " << k;
   k+=1;
//int sp = spin();
spp = sp;
sp = spin(spp,&x);    // Arrays are summ and bowl_scores
int num_spins = x;
sum = sum + sp;
spare(sum,summ);         // If spare i.e. 10
//cout << "Spins is " << sp << endl;
x += 1;
bowl_scores[i][num_spins] = sp;
cin.clear();
cin.ignore();
//if sum
}
//sum = 0;
x = x-2;
}
}
/*  cout << "Round number is " << j << endl;
cout << "Player number is " << i << endl;
}*/
/*
   for(int i=0;i<num;i++){
   for(int j = 0;j<18;j++){
   cout << "Bowling score is "  << bowl_scores[i][j] << endl;
   cout << "Player num is " << i << endl;
   }
//}
}


*/

//void spare(int **summ,int sum,int **turns,int i,int spp,int x){

void finale_update(){}

void spare(int summ[m][n],int sum,int **turns,int i,int spp,int x){
    sum = summ[i][0];
    x = x - spp;
    x = fabs(x);
    sum = sum + 10;
    summ[i][0] = sum;
    cout << "Voila" << endl;
}

void finale(char **bowl_sores,int num_of_players,int summ[m][n]){
    for(int i = 0;i<num_of_players;i++){
        int spun = 0,j = 18,str = 0;
        int x = 0,sum = 0;
        spun = spin_for_strike(x);
        sum += spun;
        if(spun == 10){
            bowl_scores[i][j] = 'X';
            summ[i][0] +=10;
	    }
        else{
            bowl_scores[i][j] = spun + '0';
            summ[i][0] += spun;
        }
        j += 1;
    	if(sum == 10){
            // cout << "Inside second sum " << endl;
            int abc = 11;
            spun = spin_for_strike(abc);
            if(spun == 10){
            bowl_scores[i][j] ='X';
            summ[i][0] += 10;
            }
            else{
            bowl_scores[i][j] = spun + '0';
            }
            summ[i][0] += spun;
            sum = 0;
            str = 1;
            }
            else{
            spun = fabs(spin_for_strike(x)-1);
            summ[i][0] += spun;
            bowl_scores[i][j] = spun + '0';
        }
        j += 1;
        if(str == 1){
            // cout << "Inside third sum " << endl;
            spun = fabs(spin_for_strike(x)-1);
            summ[i][0] += spun;
            bowl_scores[i][j] = spun + '0';
        }
    }
}

int spin_for_strike(int y){
    int a;
    int aab = y;
    srand(time(NULL));
    a = rand()%11;
    if(a == 0){
	a += 1;
    }
    //cout << "Inside" << endl;
    return(a);
}

void strike(int summ[m][n],int &sum,int **turns,int i,int spp,int **luck,char **bowl_scores,int **j,int **change_x){
    **luck = 1;
    //cout << "Inside" << endl;
    bowl_scores[i][**j] = 'X';
    int x = 0;
    int spun = spin_for_strike(x);
    if(spun == 10){
	summ[i][0] += 10;  // Change made over here.
    }
    //cout << "NO SRG fault inside" << endl;
    //cout << "Inside" << endl;
    //bowl_scores[i][0] = 'X';
    /*
     **j = **j + 1;
     summ[i][0] = summ[i][0] + spun;
     bowl_scores[i][**j] = spun + '0';
    /*x = spun - 10;
    x = fabs(x);
    spun = spin_for_strike(x);
     **j++;
     summ[i][0] = summ[i][0] + spun;
     bowl_scores[i][2] = spun + '0';
     */
    **j = **j + 1;
    bowl_scores[i][**j] = ' ';
    **turns = 2;
    **change_x += 2;

}

//int spin(int **summ,int sum,int *turns,int i,int spp){
int spin(int summ[m][n],int &sum,int *turns,int i,int spp,int *luck,char **bowl_scores,int *j,int *change_x,int &summation)
{
    int x;
    //cout << "Beginning spp is " << spp << endl;
    if(spp != 0)
    {
	    spp = 11 - spp;
    }
    else{
	    spp = 11;
    }
    //cout << "Beginning spp is " << spp << endl;
    spp = fabs(spp);
    srand(time(NULL)); 
    x = rand()%spp;
    summation += x;
    //cout << "Test spin is: " << x << endl;
    //x = x-spp;
    if(x == 10 and *turns == 0){  //Spare calculation
        sum = summ[i][0];
        sum = sum + 10;
        summ[i][0] = sum;
        //*turns = 0;
        strike(summ,sum,&turns,i,spp,&luck,bowl_scores,&j,&change_x);
    }
    else if(*turns != 0){
	//cout << "INSIDE";
	//x = x - spp;
        if(summation == 10){
                //cout << "INSIDEnibnbhngf";
                spare(summ,sum,&turns,i,spp,x);
        }
        }
    //cout << "The value of x is " << x;
    return(x);
}

void update_scores(char **bowl_scores,int i,int j,int sp,int turns,int ssp){
    char score[1];
    score[0] = (char) sp;
    //cout << "CHECK "  <<score[1] << endl;
    //if(sp == 10 and turns == 0){
    // bowl_scores[i][j] = 'X';
    //}
    if(ssp == 10 and turns != 0){
	    bowl_scores[i][j] = '/';
    }
    else if(sp != 0){
        for(int k = 0;k < 1;k++){
            char cast = static_cast<char>(sp);
            //	 cout << "Cst is " << cast << endl;
            bowl_scores[i][j] = sp + '0'; //static_cast<char>(sp);
            //cout << "Inside";
            // bowl_scores[1][17] = '3';
        }
        cout << "SP is " << sp << endl;
    }
    else if(sp == 0){
	    bowl_scores[i][j] = '-';
    }
    //cout << "Bowling scores are " << bowl_scores[i][j] << endl;
    //cout << endl;
    //cout << "The value of i is " << i << " and the value of j is " << j << endl;
    cout << endl;

}

//void bowl(char **bowl_scores,int num_of_players,int **summ){
void bowl(char **bowl_scores,int num_of_players,int summ[m][n],char **names){
    int pi = 0,j = 0,rounds = 9,x = 0,ssp = 0;
    for(int i=0;i<num_of_players;i++){
	    summ[i][0] = 0;
    }
    //cout << "INSIDE BOWL" << endl;
    for(int roun = 0;roun < rounds;roun++){
    	int player_no = 1;

        for(int i = 0;i<num_of_players;i++){
            int sum = 0,spp = 0,ssp = 0,luck = 0,summation = 0;
            j = x;
            for(int turns = 0;turns<2;turns++){

            int sp = spin(summ,sum,&turns,i,spp,&luck,bowl_scores,&j,&x,summation);
            // spp = sp;
            cout << "Player " << player_no << " results" << endl; 
            cout << "You knocked " << sp << " pins" << endl;
            if(luck == 0){
                ssp += sp;         // ssp = sum of spins
                sum = summ[i][0];
                sum = sum + sp;
                // cout << "INSIDE SUM IS " << sum << endl;
                summ[i][0] = sum;
                /*if(summation != 10){
                update_scores(bowl_scores,i,j,sp,turns,spp);
                }*/
                if(summation == 10){
                bowl_scores[i][j] = '/';
                }
                else if(summation != 10){
                update_scores(bowl_scores,i,j,sp,turns,spp);
                }
                spp = sp;
                x += 1;
                j = x;
            }
        print_board(bowl_scores,names,num_of_players,summ);
		cin.clear();
		cin.ignore(256,'\n');
		//cout << "Value of j is: " << j << endl;

	    }
	    player_no += 1;
	    x = x - 2;
	    //j = x;
	}
	x = x + 2;
    }
    finale(bowl_scores,num_of_players,summ);
    //cout << summ[0][0] << endl;
    //cout << "@@@2 " << summ[1][0] << endl;
    //cout << "!!!3 " << summ[2][0] << endl;
}

void print_name(char **names,int a){
    for(int i = 0;i < strlen(names[a]);i++){
	cout << names[a][i];
    }
}

void print_scores(char **bowl_scores,int a,int summ[m][n],int num_of_players){
    for(int i = 0;i<strlen(bowl_scores[a]);i++){
    	cout << bowl_scores[a][i] << " | ";
    }
    //for(int m = 0;m<num_of_players;m++)
    cout << endl;
    cout << "Total Score is " << summ[a][0] << " " <<endl;
    cout << endl;
}

void winners(char **bowl_scores,char ** names,int summ[m][n],int num_of_players){

}

void print_board(char **bowl_scores,char **names,int num_of_players,int summ[m][n]){
    for(int a = 0;a<num_of_players;a++){        // Error Here
	    cout << "Player " << a+1 << "s name is ";
        print_name(names,a);
        cout << endl;
        cout << "The players scorecard is " << endl;
        print_scores(bowl_scores,a,summ,num_of_players);
        // cout << "NUM OF PLAYERS IS " << num_of_players << endl;
    }
    winners(bowl_scores,names,summ,num_of_players);
}

int error(){
    bool bad_input;
    string input;
    do{
        bad_input = false;
        cout << "How many players: ";
        cin >> input;
        cin.clear();
        cin.ignore(256,'\n');
        for(int i = 0;i<input.size();i++){
            if(!(input.at(i) >= '2' && input.at(i) <='5')){
            bad_input = true;
            cout << "INSIDE";
            }
            cout << input.size() << endl;
        }
        if(bad_input == true){
            input = "as";
        }
    }while(bad_input = true and !(input.size()==1)); //< 2 or input.size() >0));
    int x = atoi(input.c_str());
    return(x);
}

int main(){

    int num;
    string input;
    int num_players = 0;
    //   cout << "How many players: ";
    // cin >> input;
    num = error();
    cin.ignore();
    char **names = NULL;
    names = new char* [num];
    for(int i = 0;i<num;i++){
    	names[i] = new char[50];
    }
    for(int i = 0;i < num;i++){
	    name(names,num_players);
	    num_players += 1;
	    //  cout << "SUCCESS" << endl;
    }
    //cout << "REAACHED";
    //int **summ = NULL;
    int summ[m][n];
    //cout << "REAACHED";
    //create_array(&summ,num);
    //cout << "REAACHED";
    char **bowl_scores = NULL;
    //bowl_scores = new int* [num];
    bowl_scores = new char* [num];
    for(int i = 0;i<num;i++){
	    bowl_scores[i] = new char[50];
    }
    //create_array(&bowl_scores,num);   
    bowl(bowl_scores,num,summ,names);
    for(int i = 0;i<strlen(bowl_scores[0]);i++){
	//  cout << bowl_scores[0][i];
    }
    print_board(bowl_scores,names,num,summ);
}
