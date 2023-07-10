#include "Libaries.cpp"

void printPointer(void* ptr, char type) {
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

	printPointer(ptrNumber, 'i');
	printPointer(ptrLetter, 'c');
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
	cout << smartphone.name << endl;
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
	SmartPhone smartphone = { "iPhone", 32, "black", 999.99 };
	SmartPhone smartphone2 = { "samsung", 64, "gray",888.88 };

	//printSmartphone(smartphone);
	//printSmartphone(smartphone2);

	Person p = { "Tom",45,smartphone };
	printPerson(p);
}

char test() {
	string s_part1 = "\"function";
	string s_part2 = "test\"";
	string s_space = " ";
	string s_var;

	cout << endl << "Function test" << endl;
	s_var = s_part1 + s_space + s_part2;
	cout << s_var << endl;
	cout << "Above output length:" << s_var.length() << endl;
	return 'a';
}
void loopTest(int length) {
	cout << endl << "Loop test" << endl;
	for (int i = 0; i < length; i++)
	{
		cout << i << endl;
	}
}
int basicsTest() {
	int i_test = 1;
	string S_test = "again";

	cout << "Basics Test" << endl;
	cout << "hello World! " << S_test << endl << endl;
	cout << "I am brushing up on cpp, gimmie an int input:" << endl;
	cin >> i_test;//getline if there are white spaces
	cout << "Output is:" << endl;
	cout << i_test << endl;
	return i_test;
}
void refTest() {
	cout << "ref test" << endl;
	int refTest = 10;

	cout << &refTest << endl;
}
void int_ArrayTest() {
	int my_numbers[5] = { 1,2,3,4,5 };
	//int my_numbers[3] = {15,25,35};
	//int my_numbers[2] = { 8,8 };
	int n; // number of elements in my_numbers
	int score = 0;

	//1 point for every even number in array
	//3 points for every odd number in array
	//5 points for every number 8 in array
	n = sizeof(my_numbers) / 4; //SIZE OF RETURNS ANSWER IN BYTES PLEASE LEARN

	for (int i = 0; i < n; i++)
	{
		score = (my_numbers[i] % 2 == 0) ? score += 1 : score += 3;
		score = (my_numbers[i] == 8) ? score += 5 : score;
		/*	if (my_numbers[i] %2 == 0)
			{
				score+=1;
			}
			else
			{
				score+=3;
			}

			if (my_numbers[i] == 8)
			{
				score += 5;
			}
			*/
	}
	cout << "score= " << score << endl;


}
void w3_practice(int question) {
	cout << "Question: " << question << endl;
	int num, i;
	switch (question)
	{
	case 1:
		//check whether a given number is a power of 2 or not
		num = 8;//works for the three inputs 8, 256, 124
		i = num;
		while (i > 2)
		{
			i = i / 2;
		}
		if (i == 2)
		{
			cout << num << " is a power of 2" << endl;
		}
		else
		{
			cout << num << " is not a power of 2" << endl;
		}
		break;
	case 2:
		//skip
		break;
	case 3:
		//skip
		//reverse the digits of a given number
		num = 123; //inputs 4 and 123		
		break;
	case 4:
		//
		break;
	default:
		cout << "Question number input not found." << endl;
		break;
	}
}
void arraySort(int array[], int size) {
	//bubble sort
	int temp;
	int i;
	int test = 1;
	cout << "Before:" << endl;
	for (i = 0; i < size; i++)
	{
		cout << array[i] << " , ";
	}
	cout << endl;

	while (test > 0)
	{
		test = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				test++;
			}
		}
	}
	cout << "After:" << endl;
	for (i = 0; i < size; i++)
	{
		cout << array[i] << " , ";
	}
	cout << endl;
}
void arraySort_dec(int array[], int size) {
	int temp;
	int done = 1;

	cout << "Before: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " , ";
	}
	//reverse bubble sort
	while (done > 0)
	{
		done = 0;
		for (int i = 0; i < size - 1; i++)
		{
			if (array[i] < array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				done++;
			}
		}
	}
	cout << endl << "After: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " , ";
	}
	cout << endl;
}
void fizzBuzz() {
	//output 1...100
	//if divisible by 3 then print fizz
	//if divisible by 5 print buzz
	//if divisible by both 3 and 5 print fizzbuzz	
	bool output = false;

	cout << "Fizz Buzz example: " << endl;

	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0) { cout << "Fizz"; output = true; }
		if (i % 5 == 0) { cout << "Buzz"; output = true; }
		if (i % 10 == 0) { cout << "test"; output = true; }

		if (output == false) { cout << i; }
		output = false;
		cout << endl;
	}

}
void popTest() {
	int startSize = 0, endSize = 0, years = 0;
	int population = startSize;

	while (startSize < 9)
	{
		cout << "Enter start size (int greater that 9)" << endl;
		cin >> startSize;
	}
	while (endSize < startSize)
	{
		cout << "Enter end size (int greater that start size)" << endl;
		cin >> endSize;
	}
	do
	{
		population = population + (population / 3) - (population / 4);
		years++;
	} while (population < endSize);

	cout << "Number of years: " << years;
}
void drawMario() {
	//makes a ascii pyramid, height definable by user
	char blankSpace = ' ';
	char block = '#';
	int height = 0;
	int x, y;

	while (height < 1 || height>8)
	{
		cin >> height;//height input		
	}

	for (y = height; y >= 0; y--)//y-axis starting at the top
	{
		for (x = height; x >= 0; x--)//x-axis left side, width and height are the same
		{
			if (x < height - y) { cout << block; }
			else { cout << blankSpace; }
		}

		cout << blankSpace << blankSpace;//middle gap

		for (x = 0; x < height; x++)//x-axis right side
		{
			if (x < height - y) { cout << block; }
			else { cout << blankSpace; }
		}

		cout << endl;//new line
	}
}