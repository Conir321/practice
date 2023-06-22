#include "Libaries.cpp"

class AbstractEmployee {//abstract class to define rules
	virtual void AskForPromotion() =0;


};

class Employee:AbstractEmployee {//inhetiting abstract class means required to have functions in abstarct class
private://encapsulation
	string Name;
	string Company;
	int Age;

public:
	Employee(string name, string company, int age) {
		Name = name;
		Company = company;
		Age = age;
	}

	void IntroduceYourself() {
		cout << "Hello my name is " << Name << " I work for " << Company << " and am " << Age << " years old." << endl;
	}
	void setName(string name) {//setter
		Name = name;
	}
	string getName() {//getter
		return Name;
	}
	void setAge(int age) {//setter
		if (age > 18) { Age = age; }
		else { cout << "Employees cannot be younger that 18 years old." << endl; };
		
	}
	int getAge() {//getter
		return Age;
	}

	void AskForPromotion() {
		if (Age>30)
		{
			cout << Name << " got promoted!" << endl;
		}
		else
		{
			cout << Name << " did not got promoted." << endl;
		}

	}
};
