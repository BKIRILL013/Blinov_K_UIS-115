#include "Time.h"
using namespace std;

int main()
{
	cout << Time(10,8) << endl;
	try
	{
		cout << Time2(3, -7) << endl;
		cout << Time3(3, -7) << endl;
		cout << Time4(3, -7) << endl;
		cout << Time5(3, -7) << endl;
		cout << Time6(3, -7) << endl;
	}
	
	catch (independent_class error) 
	{
		cerr << error.message << endl;
	}
	catch (invalid_argument error) 
	{
		cerr << error.what() << endl;
	}
	catch (empty_class)
	{
		cerr << "Bad parameters empty class" << endl;
	}
	catch (successor_class error) 
	{
		cerr << error.what() << endl;
	}
	catch (int) 
	{
		cerr << "Bad parameters throw specifier" << endl;
	}
}