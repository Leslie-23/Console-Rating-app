#include <iostream>
using namespace std;

int main() {
	cout << "____________________________________________________________________________________________________" << endl;
	cout << "|                           WELCOME TO YOUR EMPLOYEE AND SERVICE RATING PAGE                        |" << endl;
	cout << "|___________________________________________________________________________________________________|\n" << endl;
	
	int rating, option;
	string name, service, position;
	cout << "CHOOSE THE OPTION THAT YOU ARE RATING \n 1. EMPLOYEE \n 2. SERVICE \n"<< endl;
	cin >> option;
	if (option > 2) {
		cout << "SELECTED OPTION IS NOT A CHOICE" << endl;
		}
	
	if (option == 1){
		cout << "1. EMPLOYEE " << endl;
		cout << " ENTER THE FIRST NAME OF THE EMPLOYEE: " << endl;
		cin >> name;
		cout << " ENTER THE POSITION OF THE EMPLOYEE: " << endl;
		cin >> position;
		cout << "RATE THE PERSON: CHOOSE BETWEEN 1 AND 5 STARS----"<< endl;
		cin >> rating;
		if (rating == 1){
		cout << " * //PERFORMANCE WAS POOR \n" << endl;
		} else if (rating == 2){
		cout << " ** //PERFORMANCE WAS NOT BAD \n" << endl;
		} else if (rating == 3){
		cout << " *** //PERFORMANCE WAS JUST FINE \n" << endl;
		} else if (rating == 4){
		cout << " **** //PERFORMANCE WAS GOOD \n" << endl;
		} else if (rating == 5){
		cout << " ***** //PERFORMANCE WAS EXCELLENT \n" << endl;
			}
	} else if (option == 2){
		cout << "2. SERVICE " << endl;
			cout << "ENTER THE TYPE OF SERVICE: " << endl;
			cin >> service;
		cout << "RATE THE SERVICE: CHOOSE BETWEEN 1 AND 5 STARS----"<< endl;
		cin >> rating;
		if (rating == 2){
		cout << " * //SERVICE WAS POOR \n" << endl;
		} else if (rating == 2){
		cout << " ** //SERVICE WAS NOT BAD \n" << endl;
		} else if (rating == 3){
		cout << " *** //SERVICE WAS JUST FINE \n" << endl;
		} else if (rating == 4){
		cout << " **** //SERVICE WAS GOOD \n" << endl;
		} else if (rating == 5){
		cout << " ***** //SERVICE WAS EXCELLENT \n" << endl;
	}
}
	cout << position << " "<< service << " : " << name  << " --> " <<rating<< " stars" << endl;
	return 0;
}
