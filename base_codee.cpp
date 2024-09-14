#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cctype>

using namespace std;

int summ (int number_one, int number_two) {
	return (number_one * number_two);
}

void AnswerForUser (int number_one, int number_two) {
	cout << "The answer is " << number_one << "*" << number_two << "=" << summ(number_one, number_two) << endl;
	cout << " " << endl;
	cout << "------------------------------" << endl;
}

string BaseCircle (double user_unswer, int number_one, int number_two) {
	if (user_unswer == summ(number_one, number_two)) {
		return "True";	
	}
	else {
		return "False";
	}
}

int CheackErrors (double user_unswer, int number_one, int number_two) { 
	while (cin.fail()){
  		cin.clear();
  		cin.sync();
  		cout << "Try again:" << endl;
  		cin >> user_unswer;
	}
	cout << BaseCircle (user_unswer, number_one, number_two);
}

int main () {
	string start_programm;
	int number_one, number_two, answer, flag;
	double user_unswer;

	
	while (flag = 1) {
		srand(time(NULL));
		number_one = (rand() % 7) + 2, number_two = (rand() % 7) + 2;
		cout << "Get number in: " << number_one  << "x" << number_two << endl;
		cin >> user_unswer;
		CheackErrors(user_unswer, number_one, number_two);
		cout << endl;
		BaseCircle (user_unswer, number_one, number_two);
		AnswerForUser(number_one, number_two);
	}

	system("pause");
	return 0;
}
