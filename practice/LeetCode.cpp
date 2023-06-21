#include "Libaries.cpp"

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
	//exercise 1
	vector<int> twoSum(vector<int>& nums, int target) {

		int size = nums.size(), answer1 = 0, answer2 = 0, i, j;

		for (i = 0; i < size; i++) {
			for (j = 0; j < size; j++) {
				if ((nums[i] + nums[j]) == target) {
					if (i != j)
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
		if (sInteger[0] == '-')//if negative it cant be a palindrome
		{
			test = false;
			cout << test << endl;
			return test;
		}
		for (int i = 0; i < size; i++)
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
		int answer = 0;
		int size = s.length();

		for (int i = 0; i < size; i++)
		{
			switch (s[size - i - 1])
			{
			case 'I':
				answer < 5 ? answer += 1 : answer -= 1;
				break;
			case 'V':
				answer < 10 ? answer += 5 : answer -= 5;
				break;
			case 'X':
				answer < 50 ? answer += 10 : answer -= 10;
				break;
			case 'L':
				answer < 100 ? answer += 50 : answer -= 50;
				break;
			case 'C':
				answer < 500 ? answer += 100 : answer -= 100;
				break;
			case 'D':
				answer < 1000 ? answer += 500 : answer -= 500;
				break;
			case 'M':
				answer += 1000;
				break;
			default:
				break;
			}
			cout << i << "  " << answer << endl;
		}
		cout << "answer:" << answer;
		return answer;
	}
	//exercise 14
	string longestCommonPrefix(vector<string>& strs) {
		string output = "";
		int size = strs.size();
		int wordSize = strs[0].length();
		vector <char> charTest;
		int i = 0;
		int j = 0;
		int count;
		bool done = false;

		//error handling (inputs)
		if (size == 1)//if there is only one string
		{
			done = true;
			output = strs[0];
		}
		for (i = 0; i < size; i++) {//if any are empty
			if (strs[i][0] == *"")
			{
				done = true;
			}
		}
		while (done == false)//continues until prefix's no longer match
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
			if (size == (count) && j < wordSize)
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
	//exercise 20
	bool isValid(string s) {//hint is what goes in last must come out first
		int i = 0;
		int length = s.length();
		vector <char> bracketVector;

		if (length <= 1) { return false; }//fail if less than a pair of brackets

		for (i = 0; i < length; i++)
		{

			if (s[i] == *"(" || s[i] == *"{" || s[i] == *"[")
			{
				bracketVector.push_back(s[i]);
			}
			else
			{
				if (bracketVector.size() == 0) { return false; }//fail if starting with end bracket
				switch (s[i])
				{
				case ')':
					if (bracketVector.back() == '(') { bracketVector.pop_back(); }
					else { return false; }
					break;
				case '}':
					if (bracketVector.back() == '{') { bracketVector.pop_back(); }
					else { return false; }
					break;
				case ']':
					if (bracketVector.back() == '[') { bracketVector.pop_back(); }
					else { return false; }
					break;
				default:
					return false;
					break;
				}
			}
		}
		if (bracketVector.size() == 0) { return true; }
		else { return false; }

	}
	//exercise 21																			COME BACK TO
	//Definition for singly - linked list.
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
		//new vector
		vector <int> newList;
		int i = 0;
		int list1Store, list2Store;
		bool sorting = true;
		int length = 0;
		ListNode* result;

		while (sorting == true)
		{
			list1Store = list1->val;
			list2Store = list2->val;
			if (list1Store < list2Store)
			{
				newList[i] = list1Store;

				if (i == 0)
				{
					result = list1;
				}
				list1->next;
			}
			else
			{
				newList[i] = list2Store;
				if (i == 0)
				{
					result = list2;
				}
				list2->next;
			}
			if (list1->next == nullptr || list2->next == nullptr)
			{
				sorting = false;
			}
			i++;
		}


		return result;
		//store the lists in vector
		//sort the list into accending order

		//if first entry is blank ignore it

		//store the head


		//return head		




		//better idea?
		//
		//check both lists and add the smallest number to the new list
			//increment both list indexes as their smalles is added to the new list
	}

	//exercise 26
	int removeDuplicates(vector<int>& nums) {
		int length = nums.size();

		for (int i = 0; i < length - 1; i++)
		{
			//check if unique
			if (nums[i] == nums[i + 1])
			{
				nums.erase(nums.begin() + i + 1);
				i = -1;
				length = nums.size();
			}
		}
		return length;
	}
	//exercise 27
	int removeElement(vector<int>& nums, int val) {
		//remove all occurances of val in nums
		//returm size of nums

		int length = nums.size();


		for (int i = 0; i < length; i++)
		{
			if (nums[i] == val)
			{
				nums.erase(nums.begin() + i);
				length--;
				i--;
			}
		}
		return nums.size();
	}
	//exercise 28
	int strStr(string haystack, string needle) {
		//return the index of the first occurance of needle in haystack
			//else return -1

		int lengthHaystack = haystack.size(), lengthNeedle = needle.size(), counter = 0;

		if (lengthNeedle > lengthHaystack)
		{
			return -1;
		}

		for (int i = 0; i < lengthHaystack; i++)
		{
			if (haystack[i] == needle[0])
			{
				for (int j = 0; j < lengthNeedle; j++)
				{
					if (haystack[j + i] == needle[j])
					{
						counter++;
						if (counter == lengthNeedle)
						{
							return i;
						}
					}
					else
					{
						counter = 0; j = lengthNeedle;
					}
				}
			}
		}

		return -1;
	}
	//exercise 35
	int searchInsert(vector<int>& nums, int target) {
		int length = nums.size();
		int i, var = 2;
		if (target <= nums[0])
		{
			return 0;
		}
		else
		{
			if (target > nums[length - 1])
			{
				return length;
			}
			else
			{
				if (target == nums[length - 1])
				{
					return length - 1;
				}
			}
		}


		for (i = 0; i < length; )
		{
			if (target <= nums[i]) { return i; }
			if (target <= nums[i + 1] && target > nums[i]) { return i + 1; }


			if (target < nums[i + (length / var)])
			{
				length -= length / var;
				i++;
			}
			else
			{
				i += length / var;
			}
			var = var * 2;

		}
		return i;

	}
};