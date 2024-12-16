#include <iostream>
#include <string>
using namespace std;
int chekQuote(string name)
{
	
	int sch = 0;
	for (char a : name)
	{
		cout << a << endl;
		if (a == '"')
		{
			sch += 1;
		}
	}	
	cout << sch << endl;
	 if (sch != 2)
	{
		cout << "Должно быть 2 ковычки" << endl;
		return 0;// не хавает ковычки
	}
	return 1;//ковычки есть
}
int chekQoute2(string name)
{
	int sch = 0;
	for (char a : name)
	{
		if (a == '"')
		{
			sch += 1;
		}
	}
	if (sch >= 1)
	{
		return 1;//ковычка есть
	}
	return 0;//ковычки нет
}
int chekPoint(string name)
{
	for (char a : name)
	{
		if (a == '.')
		{
			return 0;//точк есть
		}
	}
	return 1;//точки нет
}

string delDouble(string name)
{
	if (chekQoute2(name) == 1 && chekQuote(name) == 0)
	{
		for (size_t k = name.find('"'); k != name.npos; k = name.find('"', k))
		{
			name.erase(k, 1);
			cout << name << endl;
		}

		for (size_t k = name.find('"'); k != name.npos; k = name.find('"', k))
		{
			name.erase(k, 1);
			cout << name << endl;
		}
	}
	return name ;
}

string rasparser(string name)
{
	string b;
	for (int i = name.size(); name[i] != '='; i--)
	{
		b += name[i];
	}
	return b;
}
int main()
{
	int intVvod;
	string strVvod;
	double doubleVvod;
	setlocale(LC_ALL, "rus");
	string name;
	getline(cin, name);
	string name_var;

	for (char a : name)
	{
		if (a != '=' && a != ' ')
		{
			name_var += a;
		}
		else
		{
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
	for (char a : name_var)
	{
		if (!(isupper(a)))
		{
			cout << "Назвние вашей переменной содержит символы в нижнем регистре" << endl;
			break;
		}

	}
	strVvod = "reparser(name)";
	string num = "2.2";
	doubleVvod = stod(num);
	if (chekQoute2(name) == 1)
	{
		chekQuote(name);
	}
	else if (chekPoint(name) == 0)
	{
		
	}

}

	
	
	
	

