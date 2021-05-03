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
		//adds the results together
		result += arr[i];
	}
	
	//divides the results by the number of test
	result = result / numtest;
	//displays the average
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





void weightcalc(int numgrades) {
	float gradenum;
	float weightnum;
	//set max rediculously high 
	float grade[1000];
	float weight[1000];
	float result = 0.0;

	//loop to have th euser enter the test values
	for (int i = 0; i < numgrades; i++) {
		cout << "\nEnter Grade for test " << i + 1 << ":";
		cin >> gradenum;
		cout << "\nEnter Weight for category " << i + 1 << ":";
		cin >> weightnum;


		grade[i] = gradenum;
		weight[i] = weightnum;
		//adds the results together
		result += (grade[i])*weight[i];
	}

	//divides the results by the number of test
	
	//displays the average
	cout << "\nYour grade is: " << result << endl;
	cout << "\n";






}



int main() {
	
	int redo;
	int choice;
	
	//notes to the user and credit to athor
	cout << "FINAL EXAM CALCULATOR" << endl;
	cout << "By: Caleb Walls\n\n" << endl;

	

	//system will ask user for info as long as they enter 1 when asked if they want to do another calculation
	do {
		//menu to ask the user what they want to do
		cout << "\nMENU" << endl;
		cout << "1. Average a category" << endl;
		cout << "2. Calculate what is needed on final to pass" << endl;
		cout << "3. Calculate grade with weights" << endl;
		cin >> choice;


		switch (choice) {


		case 1:

			int numtest;
			cout << "**NOTE: When entering test grades if you need to enter 5 test type 5." << endl;
			cout << "Then, when you are asked to enter the test grade, if you made a 88 enter 88." << endl;
			cout << "\nSample input: Enter Grade for test 2:88 " << endl;
			cout << "______________________________________________________________________________________" << endl;
			cout << "\nHow many test do you need to enter?" << endl;
			cin >> numtest;
			//function to calculate the average
			averageGrade(numtest);

			//display menu again
			cout << "Would you like to do another calcuation? If so type 1 other wise type any other number: ";
			cin >> redo;
			break;

		case 2:

			cout << "**NOTE: When you enter your grade, if your grade is, for example\n a 92.16 % enter the number .9216 this will also apply for the grade you\n want and the weight.Your result will also be calculated in this manner.\n So if it says you need a .281537 to pass then you really need a 28.15 % to pass\n\n" << endl;
			cout << "Sample Input and output: " << endl;
			cout << "Enter your current grade in the class:.9216\nEnter the grade you want in the class :.78\nEnter the weight of the final:.35\nYou need a 0.517029 on the final to get a 0.78" << endl;
			cout << "_______________________________________________________________________________________________________________________" << endl;
			//function to determine final exam
			finalexamcalc();
			//display menu again
			cout << "\nWould you like to do another calculation ? If so type 1 otherwise type any other number: ";
			cin >> redo;

			

			break;





		case 3:
			cout << "**NOTE: When entering how many categories, say you have a category for homework,test,quizzes and projects,\n the number you would enter here is 4" << endl; \
				cout << "When asked for the grade, if you made a 77 in the category, enter 77" << endl;
			cout << "When asked for the weight, if the weight is 25% of your total grade, enter .25" << endl;
			cout << "Sample input:How many categories do you need to enter?\n4\n Enter Grade for test 1:77\nEnter Weight for category 1:.25\nEnter Grade for test 2 : 88\nEnter Weight for category 2 : .25 " << endl;
			cout << "..." << endl;
			cout << "_________________________________________________________________________" << endl;
			int testnum;
			cout << "\nHow many categories do you need to enter?" << endl;
			cin >> testnum;
			//function to calculate the average with weights
			weightcalc(testnum);
			cout << "\nWould you like to do another calculation ? If so type 1 otherwise type any other number: ";
			cin >> redo;
			break;


//default case for invalid choice
		default:
			cout << "ERROR INVALID CHOICE!" << endl;
			system("pause");
			return 0;

		}
	}

	//while redo equals 1 then we keep going through loop
	while (redo == 1);

	return 0;
}
