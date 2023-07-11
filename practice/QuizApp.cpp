#include "Libaries.cpp"
#include "HeaderTest.h"

struct Question {
	string question;
	string answer[3];
	int correctAnswer =-1;
};

bool askQuestion(Question q) {
	int answer = 0;
	cout << q.question << endl;
	cout << "1: " << q.answer[0] << endl;
	cout << "2: " << q.answer[1] << endl;
	cout << "3: " << q.answer[2] << endl;
	cout << "Choose 1-3" << endl;

	if (q.correctAnswer < 1 || q.correctAnswer>3)
	{
		cout << "Error: Correct answer out of bounds." << endl;
		return false;
	}

	while (answer < 1 || answer > 3)
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

	q[0] = { "What is the smallest country?","USA","India","Vatican city",3 };
	q[1] = { "What is the biggest animal in the world?","Elephant","BlueWhale","Great white shark",2 };
	q[2] = { "How many elements are there in the periodic table?","118","119","120",1 };

	for (Question i : q)
	{
		if (askQuestion(i))
		{
			score++;
		}
		maxScore++;
	}

	cout << "Score: " << score << "/" << maxScore << endl;
}
