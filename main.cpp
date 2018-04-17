//Paul Barrett - CS216 - Section 001
//Project 1, main.cpp
//The purpose of this program is to be used as a math tutor for a young student
//The program repeatedly displays a menu in which the student can select an
//addition, subtraction, multiplication, or division question to solve, until
//the student chooses option 5 to quit the program

using namespace std; //include necessary libraries and header file
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "MathOperations.h"

int main()
{
	int num1;	//operand 1
	int num2;	//operand 2
	int choice;	//menu selection choice from user
	int studentanswer;	//student answer
	MathOperations question;

	srand(time(0)); //seed random number generator

	do
	{
		cout<<"	 Math Tutor Menu"<<endl;	//print menu
		cout<<"==-==-==-==-==-==-==-==-==-==-==-"<<endl;
		cout<<"1. Addition problem"<<endl;
		cout<<"2. Subtraction problem"<<endl;
		cout<<"3. Multiplication problem"<<endl;
		cout<<"4. Division problem"<<endl;
		cout<<"5. Quit this program"<<endl;
		cout<<"==-==-==-==-==-==-==-==-==-==-==-"<<endl;
		cout<<"Enter your choice (1-5): ";
		cin>>choice;		//receive user input
		cout<<endl;

		while(choice<1 || choice>5)	//check validity of user input, loop if not 1-5
		{
			cout<<"The valid choices are 1, 2, 3, 4, and 5. Please choose: ";
			cin>>choice;
		}
		
		switch(choice)	//decide which operation to use according to user input
		{
			case 1: num1 = 1 + rand() % 500;	//set op1 and op2 in range 1-500
				num2 = 1 + rand() % 500;	
				question.setOperands(num1, num2); //call setOperands function
				question.Addition();		  //add the operands
				cout<<"  \t  "<<num1<<endl;	  //display addition
				cout<<"\t+ "<<num2<<endl;
				cout<<"\t ----"<<endl; cout<<"\t  ";
				cin>>studentanswer;		  //receive user answer
				question.checkAnswer(studentanswer);	//check if answer is correct
				break;
			case 2: num1 = 1 + rand() % 999;	//set op1 to range [1,999]
				num2 = 1 + rand() % num1;	//set op2 to range [1,op1] to avoid neg ans
				question.setOperands(num1, num2);	//call setOperands function
				question.Subtraction();			//subtract operand 2 from 1
				cout<<"  \t  "<<num1<<endl;		//display subtraction
				cout<<"\t- "<<num2<<endl;		
				cout<<"\t ----"<<endl; cout<<"\t  ";
				cin>>studentanswer;			//receive student answer
				question.checkAnswer(studentanswer);	//check if answer is correct
				break;
			case 3: num1 = 1 + rand() % 100;		//set op1 to [1,100] and op2 to [1,9]
				num2 = 1 + rand() % 9;
				question.setOperands(num1, num2);	//call setOperands
				question.Multiplication();		//multiply operands
				cout<<"  \t  "<<num1<<endl;		//display multiplication
                                cout<<"\t*  "<<num2<<endl;
                                cout<<"\t ----"<<endl; cout<<"\t  ";
                                cin>>studentanswer;			//receive student answer
                                question.checkAnswer(studentanswer);	//check is answer is correct
				break;
			case 4: num2 = 1 + rand() % 9;			//set op2 to [1,9]
                                num1 = num2*(1 + rand() % 20);		//set op1 to op2*[1,20]
                                question.setOperands(num1, num2);	//call setOperands
                                question.Division();			//divide operands
                                cout<<"  \t  "<<num1<<" / "<<num2<<" = ";
                                cin>>studentanswer;			//receive student answer
                                question.checkAnswer(studentanswer);	//check if answer is correct
				break;
		}
	}while(choice!=5);	//exit if user enters 5
	return 0;
}
