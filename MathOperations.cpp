//Paul Barrett - CS216 - Section 1
#include <iostream>
using namespace std;
#include "MathOperations.h"

 //Default constructor
  MathOperations::MathOperations(){
  operand1=0;
  operand2=0;
  answer=-1;
 }

 // set the private data members: operand1 and operand2
 // to op1 and op2 respectively
 void MathOperations::setOperands(int op1, int op2){ 
  operand1=op1;
  operand2=op2;
 }

 // return the value of the data member: answer
 int MathOperations::getAnswer() const{
  return answer;
 }

 // apply the addition operation to operand1 and operand2
 // set the answer equal to operand1 + operand2
 void MathOperations::Addition(){
  answer=operand1+operand2;
 }

 // apply the subtraction operation to operand1 and operand2
 // set the answer equal to operand1 - operand2
 void MathOperations::Subtraction(){
  answer=operand1-operand2;
 }

 // apply the multiplication operation to operand1 and operand2
 // set the answer equal to operand1 * operand2
 void MathOperations::Multiplication(){
  answer=operand1*operand2;
 }

 // apply the (integer) division operation to operand1 and operand2
 // set the answer equal to operand1 / operand2
 void MathOperations::Division(){
  answer=operand1/operand2;
 }

 // if answer == response, print a message of congratulations
 // otherwise display the correct answer
 void MathOperations::checkAnswer(int response) const{
  if(answer==response){
	cout<<"\nCongratulations! That's right."<<endl<<endl;
  } else {
	cout<<"\nSorry, the correct answer is "<<answer<<"."<<endl<<endl;
  }
 }
