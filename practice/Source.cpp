#include "LeetCode.cpp"
//#include "GeneralPractice.cpp" // build error after reorganising needs fix
#include "OOPractice.cpp"
//#include "QuizApp.cpp" //broken probably in the same way for same reason

void editFile(string fileName, string text, char c) {
	fstream myFile;

	switch (c)
	{
	case 'a':
		myFile.open(fileName, ios::app);//append mode
		break;
	case 'w':
		myFile.open(fileName, ios::out);//write mode (out overwrites)
		break;
	default:
		cout << "Error in edit file switch case." << endl;
		break;
	}
	
	cout << "Attempting to edit to file" << endl;
	if (myFile.is_open())
	{
		cout << "File is open" << endl;
		myFile << text;
		myFile.close();
		cout << "File is closed" << endl<<endl;
	}
	else
	{
		cout << "Error opening file" << endl;
	}
}
void readFile(string fileName) {
	fstream myFile;
	myFile.open(fileName, ios::in);//read mode

	if (myFile.is_open())
	{
		cout << "File is open" << endl << endl;

		string line;

		while (getline(myFile,line))
		{
			cout << line << endl;
		}

		myFile.close();
		cout << endl;
		cout << "File is closed" << endl << endl;
	}
	else
	{
		cout << "Error opening file" << endl;
	}
}
void ReadWriteFilePractice() {
	string fileName= "ReadWritePractice.txt";
	//string folderLocation = "C:\Users\FiercePC\source\repos\practice";

	//editFile(fileName,"Testing writing to file.\n",'w');
	//editFile(fileName,"Testing writing to file again.\n",'a');

	readFile(fileName);

}

int  main()
{

	//leet code
	//Solution Test;
	//vector<int> nums = { 1,4,6,7,8,9 };
// cout << "word length: "<<Test.lengthOfLastWord("a") << endl;

	//quizAppTask();

	ReadWriteFilePractice();


	return 0;
}