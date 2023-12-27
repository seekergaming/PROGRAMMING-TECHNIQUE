/*
NAME : MUHAMMAD ADAM BIN RAZALI
SECTION 02
MATRIC NO : A23CS0116
SUBMISSION DATE : 24 DECEMBER 2023
*/

#include<iostream>
#include<cstring>
using namespace std;

void dispStatus(int);
void getInput(int*, int*, int*, int*);
void dispOutput(int);
int calcAverage(int, int);




int main(){
	
	
	int num_case = 0, new_cases = 0, total_death = 0, total_rec = 0, sum_cases = 0, num_state = 0, highest_cases = 0;
	char choose;
	string statname, high_stat;

	do{
		cout << "<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>" << endl;
		cout << "State name : ";
		getline(cin, statname);
		getline(cin, statname);


		getInput(&num_case, &new_cases, &total_death, &total_rec);
		
		cout << "\n\n";
		
		int act_cases = num_case + new_cases - total_death - total_rec;
		if(act_cases < 0)
		act_cases = 0;
		dispOutput(act_cases);
		
		sum_cases += act_cases;
		num_state++;
		
		if(act_cases > highest_cases){
		highest_cases = act_cases;
		high_stat = statname;
		}
		
		cout << "\n\n";
		
		cout << "Press any key to continue or 'N' to finish : ";
		cin >> choose;
		choose = toupper(choose);
		
		
		cout << "\n\n";
		
	
	}while(choose != 'N' );

	cout << "<<<<<<<<< ACTIVE CASES >>>>>>>>>>" << endl;
	cout << "Total : " << sum_cases << endl;
	cout << "Highest : " << highest_cases << "  (" << high_stat << ")" << endl;
	cout << "Average for " << num_state << " state : " << calcAverage(sum_cases, num_state);
	
	return 0;
	
}

void dispStatus(int act_cases){
	
	cout << "<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>\n" <<endl;
	cout << "Active cases : " << act_cases << endl;
	cout << "Status       : ";
	if(act_cases > 40)
	cout << "Red zone"<< endl;
	else if(act_cases >= 21 && act_cases <= 40)
	cout << "Orange zone" << endl;
	else if(act_cases >= 1 && act_cases <= 20)
	cout << "Yellow zone"<< endl;
	else
	cout << "Green zone"<< endl;
}


void getInput(int* num_case, int* new_cases, int* total_death, int* total_rec){
	
	cout << "Total cases : ";
	cin >> *num_case;
	cout << "New cases : ";
	cin >> *new_cases;
	cout << "Total death : ";
	cin >> *total_death;
	cout  << "Total recovered : ";
	cin >> *total_rec;
}

void dispOutput(int act_cases){
	
	dispStatus(act_cases);

	
}

int calcAverage(int sum_cases, int num_state){
	int avg_cases = sum_cases/num_state;
	return avg_cases;
}
