//comment 
#include <iostream>
using namespace std;
#include <cmath>; // for squaring, rounding and logs etc
#include <string>
#include <vector>

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
	int my_numbers[5] = {1,2,3,4,5};
	//int my_numbers[3] = {15,25,35};
	//int my_numbers[2] = { 8,8 };
	int n; // number of elements in my_numbers
	int score= 0;

	//1 point for every even number in array
	//3 points for every odd number in array
	//5 points for every number 8 in array
	n = sizeof(my_numbers)/4; //SIZE OF RETURNS ANSWER IN BYTES PLEASE LEARN

	for (int i = 0; i < n; i++)
	{
		score = (my_numbers[i] % 2 == 0) ? score += 1 : score += 3;
		score = (my_numbers[i] == 8) ? score += 5: score;
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
	cout <<"Question: "<< question << endl;
	int num, i;
	switch (question)
	{
	case 1:
		//check whether a given number is a power of 2 or not
		 num = 8;//works for the three inputs 8, 256, 124
		 i=num;
		while (i>2)
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
void arraySort(int array[],int size) {
	//bubble sort
	int temp;
	int i;
	int test=1;
	cout << "Before:" << endl;
	for (i = 0; i < size; i++)
	{
		cout << array[i] << " , ";
	}
	cout << endl;

	while (test>0)
	{
		test = 0;
		for ( i = 0; i < size-1; i++)
		{
			if (array[i]>array[i+1])
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
	while (done >0)
	{
		done = 0;
		for  (int i = 0; i < size-1; i++)
		{
			if (array[i] < array[i + 1])
			{
				temp = array[i];
				array[i] = array[i+1];
				array[i + 1] = temp;
				done++;
			}	
		}
	}
	cout << endl<< "After: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout <<array[i] << " , ";
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
		if (i % 3 == 0) {cout << "Fizz"; output = true;}
		if (i % 5 == 0){cout<< "Buzz"; output = true;}
		if (i % 10 == 0) { cout << "test"; output = true; }

		if (output==false){cout << i;}
		output = false;
		cout << endl;
	}

}
void popTest() {
	int startSize = 0 , endSize = 0, years = 0;
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
class Solution {
public:
	//exercise 1
	vector<int> twoSum(vector<int>& nums, int target) {

		int size = nums.size(), answer1=0, answer2=0, i, j;
		
		for (i = 0; i < size; i++) {			
			for (j = 0; j < size; j++) {		
				if ((nums[i] + nums[j]) == target) {
					if (i!=j)
					{
						answer1 = i;
						answer2 = j;
					}					
				}
			}
		}
		cout << answer1 << endl;
		cout << answer2 << endl;
		return { answer1,answer2 };
	}
//exercise 9
	bool isPalindrome(int x) {
		bool test = false;

		string sInteger = to_string(x);
		int size = sInteger.length();
		if (sInteger[0]=='-')//if negative it cant be a palindrome
		{
			test = false;
			cout << test << endl;
			return test;
		}
		for (int i = 0;  i < size;  i++)
		{			
				if (sInteger[i] == sInteger[size - i - 1])
				{
					test = true;
				}
				else
				{
					test = false;
					return test;
				}
		}
		cout << test << endl;
		return test;
	}

//exercise 13
	int romanToInt(string s) {
		int answer=0;
		int size = s.length();
		
		for ( int i = 0; i < size ; i++)
		{
			switch (s[size-i-1])
			{
			case 'I':
				answer<5?answer+=1:answer-=1;
				break;
			case 'V':
				answer<10?answer += 5:answer-=5;
				break;
			case 'X':
				answer<50?answer += 10:answer-=10;
				break;
			case 'L':
				answer<100?answer += 50:answer-=50;
				break;
			case 'C':
				answer<500?answer += 100:answer-=100;
				break;
			case 'D':
				answer<1000?answer += 500:answer-=500;
				break;
			case 'M':
				answer += 1000;
				break;
			default:
				break;
			}
			cout << i << "  " << answer << endl;
		}
		cout << "answer:" <<answer;
		return answer;		
	}
	//exercise 14
	string longestCommonPrefix(vector<string>& strs) {
		string output = "";
		int size = strs.size();
		int wordSize = strs[0].length();
		vector <char> charTest;
		int i=0;
		int j=0;
		int count;
		bool done = false;

	//error handling (inputs)
		if (size ==1)//if there is only one string
		{
			done = true;
			output = strs[0];
		}	
		for (i = 0; i < size; i++) {//if any are empty
			if (strs[i][0]==*"")
			{
				done = true;
			}
		}
		while (done==false)//continues until prefix's no longer match
		{
			count = 0;

			for (i = 0; i < size; i++)
			{				
				charTest.push_back(strs[i][j]);//get first char of each string to compare
				if (charTest[0] == charTest[i])//compare chars 
				{
					count++;
				}
			}		
			if (size == (count)&&j<wordSize)
			{
				output += charTest[0];//if same, record the char in OUTPUT, and check the next char
				j++;
				charTest.clear();
			}
			else
			{
				done = true;
			}			
		}
		cout << output;
		return output;
	}
	
	bool isValid(string s) {
		int i = 0;
		int parenthesesBrackets = 0, curlyBrackets = 0, squareBrackets = 0;		
		int pCount=1, cCount=1, sCount=1;
		int length = s.length();

		for  (i = 0; i < length; i++)
		{
			if (parenthesesBrackets < 0 || curlyBrackets < 0 || squareBrackets < 0) { return false; }//closed before an open
			if (s[i] == *"(") { parenthesesBrackets += 1; pCount = i; }
			else{if (s[i] == *"{") { curlyBrackets += 1; cCount = i;}
			else {if (s[i] == *"[") { squareBrackets += 1; sCount = i; }
			else{if (s[i] == *")") { parenthesesBrackets -= 1; pCount -= i; }
			else{if (s[i] == *"}") { curlyBrackets -= 1; cCount -= i; }
			else{if (s[i] == *"]") { squareBrackets -= 1; sCount -= i;}}}}}}					
		}
		if (pCount % 2 == 0 || cCount % 2 == 0 || sCount % 2 == 0) { return false; }//checks for odd spacing as should always be even for pairs
		if (parenthesesBrackets==0&& curlyBrackets==0&& squareBrackets==0)
		{return true;}else{return false;}
	}
};
void drawMario() {
	//makes a ascii pyramid, height definable by user
	char blankSpace = ' ';
	char block = '#';
	int height=0;
	int x,y;

	while (height <1|| height>8)
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

		for ( x = 0; x < height; x++)//x-axis right side
		{
			if (x< height -y){cout << block;}
			else{cout << blankSpace;}			
		}	

		cout << endl;//new line
	}
}
int  main()
{
	//int test;
	int sort[10]{ 1,3,6,9,2,4,5,7,8,10 };
	int size = sizeof(sort) / 4;
	
//	test =	basicsTest();	
//	test();
//	loopTest(test);
//	refTest();
//	int_ArrayTest();
//	w3_practice(1);
	//fizzBuzz();
//	arraySort(sort,size);
//	arraySort_dec(sort, size);
//	popTest();
	//drawMario();

	Solution Test;/*
	vector<int> nums = {3, 3};
	twosumTest.twoSum(nums, 6);*/
/*	Solution palindromeTest;
	palindromeTest.isPalindrome(121);*/
/*	Solution romanNumeralsTest;
	romanNumeralsTest.romanToInt("MCMXCIV");*/
	/*vector <string>  strs{ "flower","flower","flower","flower" };
	Test.longestCommonPrefix(strs);*/
	
	//cout <<"Output: "<< Test.isValid("[({])}") << endl;
	
	return 0;
}