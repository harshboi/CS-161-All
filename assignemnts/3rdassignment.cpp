/****************************************************** 
 ** Program: 3rdassignment.cpp 
 ** Author: Harhvardhan Singh
 ** Date: 2/5/2017 
 ** Description: Program for calculating your grade  
 ** Input: Input will be your grades for the respective 
 **       assignments
 ** Output: Will be the percentage score for each sybject
 **        or for the entire class according to the user
 *******************************************************/ 

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

float start_calculator(int,float,int);
float is_positive_float();
float is_in_range(int,int);
float calculate_lab_average();
float calculate_recitation_average();
float case1(int);
float case0(int);
float is_input(string);
int error_handler(string);
float start_calc(float,float,float,int,int,int);
float is_recitation();
float final_calc(float,float,float,float,float,float,float,float);
float is_class(float,float,float,float);

/*****************************************************
 * Function Name: is_labs()
 * Function use: Takes the weight in for each type and
 * calls the is_input function
 * **************************************************/
//int is_assignments(){}
//int is_tests(){}
float is_labs(){
   float sum;
   //int weight;
   string type = "Labs";
   //cout << "Whats the weight for the labs: ";
   //cin >> weight;
   cin.clear();
   cin.ignore(256,'\n');
   sum = is_input(type);
   cout << "Success is " <<sum;
   return sum;
   // Add a weight calculator

}

float is_assignments(){
   int weight;
   float sum;
   string type = "Assignments";
   //cout << "What is the weight of the assignments: ";
   //cin >> weight;
   cin.clear();
   cin.ignore(256,'\n');
   sum = is_input(type);
   cout << sum;
   return sum;

   //
   // add a weight calculator
}

float is_tests(){
   int weight;
   string type = "Tests";
   cout << "What is the weight of the tests: ";
   cin >> weight;
   cin.clear();
   cin.ignore(256,'\n');
   float sum = is_input(type);
   return(sum);
   // return and weight calculator
}

float the_class(){}
/*************************************************
 *Function: Takes input and also asks the user whether
 *the function has varying max_points
 ************************************************/
float is_input(string type){
   string numm, inp_vary;
   float sum;
   int vary;
   int x = 0;
   cout <<"How many " << type <<"?";
   getline(cin,numm);
   int num = error_handler(numm);
   //cout <<"value of y is " << num << endl;
   do{
      cout << "Do the point values vary (0 - NO , 1 - Yes)? ";
      getline(cin,inp_vary);
      vary = error_handler(inp_vary);
      //cout << "vary is " << vary;
   }while(!(vary == 1 || vary == 0));     // Why does (vary != 0 or vary != 1) work
   //cout << num;
   if(vary==0){
      sum = case0(num);
      cout << "sum is "  << sum << endl;
   }
   else if(vary == 1){
      sum = case1(num);
      cout << "Sum is: " << sum << endl;
   }
   //cout << "Before uccess sum " <<sum;
   return(sum);
}
/*********************************************************
 *Function: Takes the input for non varying max marks
 *Takes in number of times the test, quiz or assignment
 *is done
 * ******************************************************/
float case0(int num){ 
   int max_points = 0;
   int points_obtained = 0;
   float finall = 0;
   string inp_maxp, inp_poi_obt;
   //cin >> max_points;
   do{
      cout << "Out of how many points? ";
      getline(cin,inp_maxp);
      max_points = error_handler(inp_maxp);
   }while(max_points<=0);
   // Have a function to check whether your score exceeds the maximum points in a test
   for(int i = 0;i<num;i++){
      do{
	 cout << "Points obtained? ";
	 getline(cin,inp_poi_obt);
	 points_obtained = error_handler(inp_poi_obt);
      }while(points_obtained > max_points);
      //cin >> points_obtained;
      // points_obtained += points_obtained;	
      //	float a = start_calculator(max_points, points_obtained);
      finall = finall + points_obtained; 
   }
   max_points = max_points * num;
   cout << "max_points is: " << max_points;
   float sum = start_calculator(max_points,finall,num);
   return(sum);
}

float is_in_range(int max_points, int points_obtained){
   string correct;
   int c_correct;
   if(max_points < points_obtained){
      cout << "Enter the correct value for the points obtained: ";
      getline(cin,correct);
      c_correct = error_handler(correct);
      return(is_in_range(max_points,c_correct));
   }
}


float case1(int num){
   int max_points = 0;
   float points_obtained = 0,final_ob = 0,final_max = 0;
   string pp_ob,pp_fo;
   for(int i = 0;i<num;i++){
      do{
	 cout << "Out of how many points? ";
	 getline(cin,pp_ob);
	 max_points = error_handler(pp_ob);
	 //max_points += max_points;
	 cout << "What are the points obtained? ";
	 getline(cin,pp_fo);
	 points_obtained = error_handler(pp_fo);
      }while(points_obtained>max_points);
      //points_obtained += points_obtained;
      final_ob += points_obtained;
      final_max += max_points; 
   }
   float sum = start_calculator(final_max,final_ob,num);
   return(sum);

}


float start_calculator(int max_points,float points_obtained, int num){
   float summ = points_obtained/max_points*100;
   cout << "The final score is: " << summ;
   return(summ);
   //   cout << summ;
}


int error_handler(string inp){
   bool bad_input= false;
   int y;
   for(int i=0;i<inp.size();i++){
      if(!(inp.at(i) >= '0' && inp.at(i)<= '9')){
	 bad_input = true;
	 cout << "Enter the correct number please " << endl;
      }
   }
   if(bad_input == true){
      //   string inp;
      cout << "Enter the right input";
      getline(cin,inp);
      return error_handler(inp);          // calling error_handler
   }
   else if(bad_input == false){
      //cout << "inp is " << inp << endl;
      //y =  atoi(inp.c_str());
      //cout <<"y is  " << y << endl;         // Junk value given
      return(atoi(inp.c_str()));           // Why does returning y not work when removing the comments for the line above the previous line 
   }
   //cout << y << endl;
   //return(y); Why does this return change the value
}


int main(){
   //Create 4 variables over here that will be initialized to 0 and will store the percentage scores from the previous labs.
   float labs = 0,assignments= 0,recitations = 0,tests = 0;
   int user = 1;
   do{
      int x;
      cout << "Would you like to calculate the average for 1)Labs, 2)Assignments, 3)Recitations, 4) Tests, 5) The Class or 0) to Quit? ";
      cin >> x;
      if(x==1){
	 float sum = is_labs();
	 labs = sum;
	 //   store_var(labs,assignments,recitations,tests);
      }
      else if(x==2){
	 float sum = is_assignments();
	 assignments = sum;
	 // store_var(labs,assignments,recitations,tests);
      }
      else if(x==3){
	 float sum = is_recitation();
	 recitations = sum;
	 //store_var(labs,assignments,recitations,tests);
      }
      else if(x==4){
	 float sum = is_tests();
	 tests = sum;
	 // store_var(labs,assignments,recitations,tests);
      }
      else if(x==5){
	 float sum = is_class(labs,assignments,recitations,tests);
      }
      else if(x==6){

      }
      //store_var(labs,assignments,recitations,tests);
      else{
	 cout << "Enter the right number!!!!";
      }
      cout << "Do you want to quit(Yes: 0, No:1): ";
      cin>>user;

   }while(user == 1);
}

/*float store_var(float labs,float assignments,float recitations,float tests){
  if(labs == 0){

  }

  }*/

float is_recitation(){
   cin.clear();cin.ignore(256,'\n');
   string q_weight,d_wee,c_weight,type_q,type_d,type_c;
   int q,d,c;
   do{
      cin.clear();cin.ignore(256,'\n');
      cout << "Enter the weight for the quiz: ";
      getline(cin,q_weight);
      cout << "Enter the weight for the design: ";
      getline(cin,d_wee);
      cout << "Enter the weight for the critique: ";
      getline(cin,c_weight);
      q = error_handler(q_weight);
      d = error_handler(d_wee);
      c = error_handler(c_weight);
      if(q+d+c != 100){
	 cout << "Wrong input, try again" << endl;
      }
   }while(q+d+c != 100);
   type_q = "quiz";
   type_d = "design";
   type_c = "critique";
   int quiz = is_input(type_q);
   int design = is_input(type_d);
   int critique = is_input(type_c);  
   float sum = start_calc(quiz, design, critique,q,d,c);
   return sum;
}

float start_calc(float quiz,float design,float critique,int q,int d,int c){
   quiz = quiz*q/100;
   design = design*d/100;
   critique = critique*c/100;
   float sum = quiz+design+critique;
   cout <<"The recitation score is: " << sum;
   return(sum);
}

float is_class(float labs,float assignments, float recitation, float tests){
   cin.clear();cin.ignore(256,'\n');
   string w_labs,w_assignments,w_recitation,w_tests;
   float weight_l,weight_a,weight_r,weight_t,total;
   do{
      cout << "What is the weight for labs";
      getline(cin,w_labs);
      weight_l = error_handler(w_labs);
      cout << "What is the weight for assignments";
      getline(cin,w_assignments);
      weight_a = error_handler(w_assignments);
      cout << "What is the weight for recitation's";
      getline(cin,w_recitation);
      weight_r = error_handler(w_recitation);
      cout << "What is the weight for test's";
      getline(cin,w_tests);
      weight_t = error_handler(w_tests);
      total = weight_l+weight_a+weight_r+weight_t;
   }while(!(total == 100));
   //cout << "weight is " << weight_l << endl;
   float sum = final_calc(labs,assignments,recitation,tests,weight_l,weight_a,weight_r,weight_t);
   return(sum);

}
float final_calc(float labs,float assignments,float recitation,float tests,float weight_l,float weight_a,float weight_r,float weight_t){
   cout << "Labs is:" << labs << endl;
   cout << "weight for labs is" << weight_l << endl;
   labs = (labs*weight_l)/100;
   cout << "Labs is: " << labs << endl;
   assignments *= weight_a/100;
   cout << "Assignments is: " << assignments << endl;
   recitation *= weight_r/100;
   cout << "Recitation is: " << recitation << endl;
   tests *= weight_t/100;
   cout << "Tests is: " << tests << endl;
   float sum = labs+assignments+recitation+tests;
   cout << endl << "The final is" << sum << endl;
   return(sum);
}
