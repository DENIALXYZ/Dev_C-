#include <iostream>
#include <string.h>

using namespace std;

struct StudentRecord {

	char Name[22];
	int Id;
	char Dept[22];
	char gender;

};

int main () {

	StudentRecord Student1;

	strcpy(Student1.Name, "Chan Tai Man");
		Student1.Id = 12345;

	strcpy(Student1.Dept, "COMP");
		Student1.gender = 'M';

	cout << "The student is ";

	switch (Student1.gender) {

		case 'F': cout << "Ms. "; 
			break;
		case 'M': cout << "Mr. ";
			break;
	}

	cout << Student1.Name << endl;
	
	return 0;

}
