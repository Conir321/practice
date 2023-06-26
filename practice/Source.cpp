

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

	Developer d("dev1", "company1", 30,"cpp");
	Teacher t("teacher1","school",45,"Geograpahy");

	Employee* e1 = &d ;
	Employee* e2 = &t;

	e1->Work();
	e2->Work();

	return 0;
}