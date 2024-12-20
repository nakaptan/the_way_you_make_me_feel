#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	char grade;
	int numofstudents;
	do{
		cout << "Student [" << numofstudents + 1 << "]: ";
		cin >> grade;
		if(grade == 'A'){
			count[0]++;
			numofstudents++;
		}
		else if(grade == 'B'){
			count[1]++;
			numofstudents++;
		}
		else if(grade == 'C'){
			count[2]++;
			numofstudents++;
		}
		else if(grade == 'D'){
			count[3]++;
			numofstudents++;
        }
		else if(grade == 'F'){
			count[4]++;
			numofstudents++;
        }
		else if(grade == '0'){
			numofstudents++;
            break;
        }
		else{
			cout << "Wrong input. Please input again.\n";
		} 
	}while(true);
	
	
	cout << "In total " << numofstudents-1 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";    
    cout << "D = " << count[3] <<", ";    
    cout << "F = " << count[4];
	
	return 0;
}