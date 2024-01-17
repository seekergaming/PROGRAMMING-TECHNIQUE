////////////////////// Test 2, 2023/2024 (Sem 1) //////////////////////
//// QUESTION 2
//// Name:MUHAMMAD ADAM BIN RAZALI
//// Matric No:A23CS0116
//// Date / Day: 1/4/24/THURSDAY
///////////////////////////////////////////////////////////////////////

// Task 7. Directives, library, header, etc.
#include<iostream>
#include<cctype>
#include<cstring>
// Task 6. Function prototypes
using namespace std;
void displayMenu();
void getUserInput(int&);
void displayLibraryInfo();
double displayLateFees(int);

// Task 5. Main function
int main(){
	
	
	
	int bookoverdue,  q = 0;
	double totfees;
	do{
		int choice = 0;
	
	while(choice < 1 || choice > 3){
		displayMenu();
		cout << "Enter your choice (1 - 3) : ";
		cin >> choice;
		
		if (choice < 1 || choice > 3){
			cout << "Invalid Choice. Please Enter a number between 1 and 3" << endl;
			continue;
		}
	}
	
	
	if(choice == 1){
	getUserInput(bookoverdue);
	totfees = displayLateFees(bookoverdue);
	cout << "Late Fees : RM " << totfees << endl;
	}
	else if(choice == 2)
	displayLibraryInfo();
	else{
	cout << "Exiting the program. Thank you!";
	q = 1;
	}
		
	}while( q != 1);
	
	return 0;
		
	
}

// Task 4. Function getUserInput with reference parameter
void getUserInput(int &bookoverdue){
	
	cout << "Enter the number of the days the book is overdue : ";
	cin >> bookoverdue;
	
	
}

// Task 2. Function displayMenu 
void displayMenu(){
	
	cout << "********* Library Book Checkout System **********\n" << endl;
	cout << "1. Calculate Late Fees" << endl;
	cout << "2. Display Library Information" << endl;
	cout << "3. Quit\n" << endl;
	
}
// Task 1. Function calculateLateFees  
double displayLateFees(int bookoverdue){
	
	double totfees;
	if(bookoverdue > 0 && bookoverdue <= 7){
		totfees = 0.50 * bookoverdue;
	}
	else if(bookoverdue > 7 && bookoverdue <= 14){
		totfees = 3.5 + (1.00 * (bookoverdue - 7));
	}
	else
	totfees = 3.5 + 7 + (2 *(bookoverdue - 14));
	
	return totfees;
	
}

// Task 3. Function displayLibraryInfo 
void displayLibraryInfo(){
	
	cout << "********** Library Information **********" << endl;
	cout << "\nLibrary Name : UTM Library" << endl;
	cout << "Address : Skudai, Johor" << endl;
	cout << "Contact : (123) 456 7890" << endl;
}













