#include <iostream>
#include <stdio.h>
using namespace std;

void Ex4p4() {

	int age{};

	char gender{};

	enum class AcademicDegree {none, associate, bachelor, professional, master, doctor};

	// User input

	// Determine the interviewee's age

	cout << "Welcome to the interview for the job position!" << endl;
	cout << "Please input your age as an positive, nonzero, integer: " ;
	cin >> age ;

	// Check if the age is in the valid range

	if ((age < 21) || (age > 35)) {
		cout << "You must be between the age of 21 and 35!" << endl;
		return;
	}

	// Determine the interviewee's gender

	cout << "Input your gender in the form of 'm' for male and 'f' for female: ";
	cin >> gender;

	// Check if the interviewee is male or female

	if (gender != 'f')
	{
		cout << "You do not qualify. Goodbye!" << endl;
		return;
	}

	// Determine the interviewee's academic background

	int deg{};
	AcademicDegree degree{};

	cout << "Enter the level of education received: ";

	printf ("Enter the level of education received:\n\t%d for none\n\t%d for associate\n\t%d for bachelors\n\t%d for professional\n\t%d for masters\n\t%d for doctorate\n",0,1,2,3,4,5) ;

	cin >> deg ;

	if ((deg < 0) || (deg > 5)){
		cout << "Your input degree value must be between 0 and 5!" << endl;
		return;
	}

	switch (deg){
	case 0: degree = AcademicDegree::none; break;
	case 1: degree = AcademicDegree::associate; break;
	case 2: degree = AcademicDegree::bachelor; break;
	case 3: degree = AcademicDegree::professional; break;
	case 4: degree = AcademicDegree::master; break;
	case 5: degree = AcademicDegree::doctor; break;
	}

	if ((degree != AcademicDegree::bachelor) || (degree == AcademicDegree::master))
	{
		cout << "You do not qualify. YEET!" << endl;
		return;
	}

	// Determine whether the interviewee is bilingual in Hindi
	{
		char ans{};
		cout << "Can you speak Hindi? (y/n): " ;
		cin >> ans ;

		if (ans != 'y') {
			cout << "You do not qualify. Goodbye!" << endl;
			return;
		}
	}

	// Determine whether the interviewee is bilingual in Urdu
	{
		char ans{};
		cout << "Can you speak Urdu? (y/n): " ;
		cin >> ans ;

		if (ans != 'y') {
			cout << "You do not qualify. Goodbye!" << endl;
			return;
		}
	}
}
