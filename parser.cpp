#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	string name;
	getline(cin, name);
	string name_var;
	for (char a : name)
	{
		if (a != '=')
		{
			name_var += a;
		}
		else
		{
			break;
		}
	}
	for (char a : name_var)
	{
		if (!(isupper(a)))
		{
			cout << "Назвние вашей переменной содержит символы в нижнем регистре" << endl;
			break;
		}

	}
	char  space = ' ';
	int sch = 0;
	for (char a : name)
	{
		if (a == space)
		{
			cout << "В строчке не может быть пробелов" << endl;
			break;
		}
	}


}