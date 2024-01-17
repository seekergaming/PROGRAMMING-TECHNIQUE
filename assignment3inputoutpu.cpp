/*
NAME : MUHAMMAD ADAM BIN RAZALI 
SECTION : 02
MATRIC NUMBER : A23CS0116
*/
#include <iostream>
#include <fstream>
#include<iomanip>
using namespace std;

void readFile(double storenumF[], int& numcount) {
    ifstream infile("input.txt");
    numcount = 0;
    while (numcount < 8 && infile >> storenumF[numcount]) {
        numcount++;
    }
    infile.close();
}

void computeC(double storenumF[], double storenumC[], int numcount) {
    for (int i = 0; i < numcount; i++) {
        storenumC[i] = 5.0 / 9.0 * (storenumF[i] - 32);
    }
}

double average(double storenumC[], int numcount){
    double tot;
    for (int i = 0 ; i < numcount; i++){
        tot+= storenumC[i];
    }
    tot = tot/numcount;
    return tot;
}

void grade(double storenumC[], char gradeC[], int numcount, int &h, int &m, int &l){
    for(int i = 0; i < numcount; i++){
        if(storenumC[i] >= 35){
            gradeC[i] = 'H';
            h++;
        }
        else if(storenumC[i] >= 20 && storenumC[i] < 35){
            gradeC[i] = 'M';
            m++;
        }
        else if(storenumC[i] < 20){
            gradeC[i] = 'L';
            l++;
        }
    }
}

void writeFile(double storenumC[], double storenumF[], char gradeC[], int numcount){
    
    ofstream outfile("output.txt");
    outfile << "C(Celsius)        F(Fahrenheit)       D(Description)\n";
    outfile << "----------        -------------       --------------\n";
    for(int i = 0; i < numcount; i ++){
    outfile << fixed << setprecision(2) << storenumC[i] << "                 " << right << setw(6) << storenumF[i] << "            " << right << setw(5) << gradeC[i] << "\n";
    }
    outfile.close();
}



int main() {
    char gradeC[8];
    int numcount = 0, h = 0, m = 0, l = 0;
    double storenumF[8], storenumC[8], averageC = 0;

    readFile(storenumF, numcount);
    computeC(storenumF, storenumC, numcount);


   averageC = average(storenumC, numcount);
   grade(storenumC, gradeC, numcount, h, m, l);

    

    writeFile(storenumC, storenumF, gradeC, numcount);

   cout << "Average of the temperature in Celcius: " << fixed << setprecision(2) << averageC << endl; 
   cout << "Number of high temperature: " << h << endl;
   cout << "Number of medium temperature: " << m << endl;
   cout << "Number of low temperature: " << l << endl;
   

    return 0;
}
