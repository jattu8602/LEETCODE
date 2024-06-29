//wap of calculator using multiple functions of subtraction division and multiplication and addition
#include <iostream>
using namespace std;

// function to subtract two numbers
int subtract(int a, int b){
 return a - b;
}

// function to multiply two numbers
int multiply(int a, int b){
 return a * b;
}

// function to divide two numbers
int divide(int a, int b){
 if(b!= 0){
  return a / b;
 }
 else{
  cout << "Error: Division by zero is not allowed." << endl;
  return -1; // return -1 to indicate error
 }
}

// function to add two numbers
int add(int a, int b){
 return a + b;
}



int main(){
  int num1, num2;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  // perform calculations
  int subResult = subtract(num1, num2);
  int mulResult = multiply(num1, num2);
  int divResult = divide(num1, num2);
  int addResult = add(num1, num2);

  // display results
  cout << "Subtraction is: " << subResult << endl;
  cout << "Multiplication is: " << mulResult << endl;
  cout << "Division is: " << divResult << endl;
  cout << "Addition is: " << addResult << endl;




return 0;
}