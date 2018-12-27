#include <iostream>
#include <string>
using namespace std;
// int add(string adders){}
// int subtract(string subtracters){}
// int multiply(string multipliers){}
// int divide(string dividers){}
// int exponent(string exponenters)
void eval(string expression){//PEMDAS
  for(int i = 0; i < expression.length();i++){
     if((int)expression[i] == 94) { //ASCII value of 94 = ^

     }  
   }
  for(int i = 0; i < expression.length();i++){
    if((int)expression[i] == 42) { //ASCII value of 42 = *
       
    } 
    else if((int)expression[i] == 47){ //ASCII value of 47 = /
       
    }
  }
  for(int i = 0; i < expression.length();i++){
    if((int)expression[i] == 43) { //ASCII value of 43 = +
       
    } 
    else if((int)expression[i] == 45){ //ASCII value of 45 = -
       
    }
  }
 }
int main(){
  while(1==1){ 
	cout << "Enter expression: ";
  string expr;
  int endParenIndex;  
  getline(cin, expr);
  int nonNumVal[] = expr.length();
  string validVal = "1234567890+-*/()"
  for(int i = 0; i < expr.length();i++){
   int assVal =  (int)expr[i];
   //if(assVal < 40 || assVal == 44 || assVal == 46 || assVal > 57 && assVal != 94){
   if(validVal.find(assVal,0) == -1){
     cout << "Invalid Input. Only numbers and + - * / ^ are accepted." << endl;
     break;
   }
   if((int)expr[i] == 40){ //ASCII value of 40 = (
     for(int k = i + 1; k < expr.length();k++){
       if((int)expr[k] == 41){endParenIndex = k;}
     }
     eval(expr.substr(i+1, endParenIndex - 1));
     cout << expr.substr(i+1, endParenIndex-(i+1)) << endl;
    }
    else{
      eval(expr);
    }
  }
  }
	return 0;
}
