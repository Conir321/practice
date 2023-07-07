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


struct SmartPhone {
	string name;
	int storageSpace;
	string colour;
	float price;
};
struct Person {
	string name;
	int age;
	SmartPhone smartphone;
};
void printSmartphone(SmartPhone smartphone) {
	cout << "Smartphone:" << endl;
	cout << smartphone.name<<endl;
	cout << smartphone.storageSpace << endl;
	cout << smartphone.colour << endl;
	cout << smartphone.price << endl;
}
void printPerson(Person person) {
	cout << "Person:" << endl;
	cout << person.name << endl;
	cout << person.age << endl;
	printSmartphone(person.smartphone);
}
void structurePractice() {
	SmartPhone smartphone = {"iPhone", 32, "black", 999.99};
	SmartPhone smartphone2 = {"samsung", 64, "gray",888.88};
	
	//printSmartphone(smartphone);
	//printSmartphone(smartphone2);

	Person p = {"Tom",45,smartphone};
	printPerson(p);
}

struct Question {
	string question;
	string answer[3];	
	int correctAnswer;
};
bool askQuestion(Question q) {
	int answer =0;
	cout << q.question << endl;
	cout << "1: "<< q.answer[0] << endl;
	cout << "2: " << q.answer[1] << endl;
	cout << "3: " << q.answer[2] << endl;
	cout << "Choose 1-3" << endl;

	if (q.correctAnswer <1 || q.correctAnswer>3)
	{
		cout << "Error: Correct answer out of bounds." << endl;
		return false;
	}

	while (answer <1 || answer > 3)
	{
		cin >> answer;
	}

	if (answer == q.correctAnswer)
	{
		cout << "Correct!" << endl;
		return true;
	}
	else
	{
		cout << "Incorrect." << endl;
		return false;
	}
}
void quizAppTask() {
	int score = 0;
	int maxScore = 0;
	Question q[3];

	 q[0] = {"What is the smallest country?","USA","India","Vatican city",3};
	 q[1] = { "What is the biggest animal in the world?","Elephant","BlueWhale","Great white shark",2 };
	 q[2] = { "How many elements are there in the periodic table?","118","119","120",1 };

	 for (Question i:q)
	 {
		 if (askQuestion(i))
		 {
			 score++;
		 }
		 maxScore++;
	 }	

	cout << "Score: " << score <<"/"<<maxScore<< endl;
}

int  main()
{

	//leet code
	//Solution Test;
	//vector<int> nums = { 1,4,6,7,8,9 };
// cout << "word length: "<<Test.lengthOfLastWord("a") << endl;

	//pointerPractice();
	//structurePractice();

	quizAppTask();


	return 0;
}