#include<iostream>
#include<string>
using namespace std;



/*This function will determine the average of a arbitrary number of grades*/
void averageGrade(int numtest) {

	float testval;
	//set max rediculously high 
	float arr[1000];
	float result = 0.0;

	//loop to have th euser enter the test values
	for (int i = 0; i < numtest; i++) {
		cout << "\nEnter Grade for test " << i+1 << ":";
		cin >> testval;
		
		arr[i] = testval;
		result += arr[i];
	}
	//loop to at the results together
	
	result = result / numtest;

	cout << "\nYour average for this category is: " << result << endl;
	cout << "\n";



	
}


/*This function will get the current, goal , and final weight
for the final and determien what the user needs in order to get
the desired goal*/
void finalexamcalc(void) {
	float goal, current, finalweight, result;
	cout << "\nEnter your current grade in the class:";
	cin >> current;

	cout << "\nEnter the grade you want in the class:";
	cin >> goal;
	cout << "\nEnter the weight of the final:";
	cin >> finalweight;

	result = (goal - current * (1 - finalweight)) / finalweight;

	cout << "\n\nYou need a " << result << " on the final to get a " << goal << endl;

	


}



int main() {
	
	int redo;
	int choice;
	
	//notes to the user and credit to athor
	cout << "FINAL EXAM CALCULATOR" << endl;
	cout << "By: Caleb Walls\n\n" << endl;

	cout << "***NOTE TO USER***\n When you enter your grade, if your grade is , for example\n a 92.16% enter the number .9216 this will also apply for the grade you\n want and the weight. Your result will also be calculated in this manner.\n So if it says you need a .281537 to pass then you really need a 28.15% to pass\n\n" << endl;


	do {
		//menu to ask the user what they want to do
		cout << "\nMENU" << endl;
		cout << "1. Average a category" << endl;
		cout << "2. Calculate what is needed on final to pass" << endl;
		cin >> choice;


		switch (choice) {


		case 1:

			int numtest;

			cout << "\nHow many test do you need to enter?" << endl;
			cin >> numtest;
			//function to calculate the average
			averageGrade(numtest);

			//display menu again
			cout << "Would you like to do another calcuation? If so type 1 other wise type any other number: ";
			cin >> redo;
			break;

		case 2:
			//function to determine final exam
			finalexamcalc();
			//display menu again
			cout << "\nWould you like to do another calculation ? If so type 1 otherwise type any other number: ";
			cin >> redo;

			

			break;


		default:
			cout << "ERROR INVALID CHOICE!" << endl;
			system("pause");
			return 0;

		}
	}
	while (redo == 1);

	return 0;
}
