

#include "LeetCode.cpp"
//#include "GeneralPractice.cpp" // build error after reorganising needs fix
#include "OOPractice.cpp"



int  main()
{

	//leet code
	/*Solution Test;
	vector<int> nums = { 1,4,6,7,8,9 };
 cout << Test.searchInsert(nums, 6) << endl;*/

	//OO practice
	Employee employee1("name1", "company1", 25);
	Employee employee2("name2", "company2", 35);

	employee1.IntroduceYourself();
	employee2.IntroduceYourself();

	employee1.setAge(15);
	cout << "age 15 test: " << employee1.getAge() << endl;
	employee1.AskForPromotion();

	employee1.setAge(50);
	cout << "age 50 test: " << employee1.getAge() << endl;
	employee1.AskForPromotion();

	return 0;
}