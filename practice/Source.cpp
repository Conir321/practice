

#include "LeetCode.cpp"
//#include "GeneralPractice.cpp" // build error after reorganising needs fix
#include "OOPractice.cpp"

void printPointer(void* ptr,char type) {
	switch (type)
	{
	case 'i':cout << *(int*)ptr << endl; break;
	case 'c':cout << *(char*)ptr << endl; break;
	default:
		cout << "printPointer error: no case selected." << endl;
		break;
	}
	
}

void pointerPractice() {
	int number = 5;
	int* ptrNumber = &number;

	char letter = 'a';
	char* ptrLetter = &letter;

	printPointer(ptrNumber,'i');
	printPointer(ptrLetter,'c');
	printPointer(ptrNumber, '6');

	
}

int  main()
{

	//leet code
	//Solution Test;
	//vector<int> nums = { 1,4,6,7,8,9 };
// cout << "word length: "<<Test.lengthOfLastWord("a") << endl;

	pointerPractice();
	


	return 0;
}