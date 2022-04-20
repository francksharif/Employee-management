#include <iostream>
#include <string>
#include <vector>

using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }



int main()
{

	// Options for every data
	vector<string>name;
	vector<int>age;
	vector<int>salary;
	vector<char>gender;
	string Name;
	int Age = 0, Salary = 0;
	char Gender;
	int delete_age = 0;



	int choix = 0;
	while (1)
	{

		cout << "Enter your choice :" << endl;
		cout << "1) Add new employee " << endl;
		cout << "2) Print all employees " << endl;
		cout << "3) Delete by age " << endl;
		cout << "4) Update salary by name " << endl;

		cin >> choix;

		switch (choix)
		{
		case 1:

			// Name
			cout << "Enter name :";
			cin >> Name;
			name.push_back(Name);

			//Name
			cout << "Enter age :";
			cin >> Age;
			age.push_back(Age);

			//Salary
			cout << "Enter salary :";
			cin >> Salary;
			salary.push_back(Salary);

			//Gender
			cout << "Enter gender (M/F) :";
			cin >> Gender;
			gender.push_back(Gender);


			cout << "New employee added !!" << endl;
			cout << endl;
			break;



		case 2:
			cout << " ----- Name ---- Age ------ Salary ------ Gender ----- " << endl;

			for (int i = 0; i < name.size(); ++i)
			{
				cout << " ----- " << name[i] << " ----- " << age[i] << " ----- " << salary[i] << " ----- " << gender[i] << " ----- " << endl;;
			}
			cout << endl;
			cout << endl;
			break;




		case 3:
			cout << "Enter age :";
			cin >> delete_age;
			for (size_t i = 0; i < age.size(); i++)
			{
				if (delete_age == age[i])
				{
					name.erase(name.begin() + i);
					age.erase(age.begin() + i);
					salary.erase(salary.begin() + i);
					gender.erase(gender.begin() + i);
				}
			}

			cout << "Employee deleted !" << endl;
			cout << endl;

			break;





		case 4:
			cout << "enter name :";
			cin >> Name;
			cout << "Enter new salary :";
			cin >> Salary;
			for (size_t i = 0; i < name.size(); i++)
			{
				if (Name == name[i])
				{
					salary[i] = Salary;
				}
			}

			cout << "Salary changed" << endl;
			cout << endl;
			break;


		default:
			break;
		}


	}


}