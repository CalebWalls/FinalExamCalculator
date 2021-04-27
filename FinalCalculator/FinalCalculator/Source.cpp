#include<iostream>
#include<string>
using namespace std;








int main() {


	//Required = (Goal − Current × (100% − Final Weight)) / Final Weight
	float goal, current, finalweight, result;

	cout << "FINAL EXAM CALCULATOR" << endl;
	cout << "By: Caleb Walls\n\n" << endl;

	cout << "***NOTE TO USER***\n When you enter your grade, if your grade is , for example\n a 92.16% enter the number .9216 this will also apply for the grade you\n want and the weight. Your result will also be calculated in this manner.\n So if it says you need a .281537 to pass then you really need a 28.15% to pass\n\n" << endl;


	cout << "Enter your current grade in the class:";
	cin >> current;

	cout << "Enter the grade you want in the class:";
	cin >> goal;
	cout << "Enter the weight of the final:";
	cin >> finalweight;

	result = (goal - current * (1 - finalweight)) / finalweight;

	cout << "\n\nYou need a " << result << " on the final to get a " << goal << endl;





	return 0;
}
