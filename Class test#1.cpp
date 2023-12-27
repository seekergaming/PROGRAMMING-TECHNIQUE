#include<iostream>
using namespace std;

class Student{

public :
	
	string Name;
	int Age;
	float Height, Weight;
	
	Student(){
	}

	Student(string name, int age, float height, float weight){
		
		Name = name;
		age = age;
		Height = height;
		Weight = weight;
		
	}
};


int main(){
	
	int num_classmate;
	cout << "Numbers of classmates : ";
	cin >> num_classmate;
	
	string name;
	int age;
	float height, weight;
	
	
	Student students[num_classmate];
	
	for(int i = 0; i < num_classmate; i++){
		
		cout << "Classmate number " << i+1 << endl;
		cout << "Name : ";
		cin >> name;
		cout << "Age : ";
		cin >> age;
		cout << "Height : ";
		cin >> height;
		cout << "Weight : ";
		cin >> weight;
		
		Student studentbio = Student(name, age, height, weight);
		students[i] = studentbio;
		cout << students[i].Name;
	}
	
	return 0;
}
