#include "Man.h"
#include "Student.h"

int main()
{
	Man man(18, "Kirill", "male", 70);
	cout << man << endl;
	Student stud(18, "Kirill", "male", 70, 4);
	cout << stud << endl;
}