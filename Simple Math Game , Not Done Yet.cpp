#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <cstdlib>
#include "xsx.h"
using namespace std;
using namespace Area;
void Header() {
	cout << " Welcome To Math Quiz Generator And Explainer !" << endl;
}
int RandomNumber(int From, int To) {


	int Number = rand() % (To - From + 1) + From;
	return Number;
}
string RandomIfAVPIsGivenOrNO() {

	string ArrayOf[2] = { "(Given Value Of AreaOrVolumeOrPerimeter)","(AreaOrVolumeOrPerimeter) Is Not A Given Value" };
	return ArrayOf[RandomNumber(0, 1)];

}

string DegORRadiusQuesx() {

	string ArrayString[2];
	ArrayString[0] = "Degree";
	ArrayString[1] = "Radius";

	return ArrayString[RandomNumber(0, 1)];
}
//THIS FUNCTION IS BY AI .
float floatRandomNumber(float From, float To) {
	// 1. Calculate how many 0.1 steps fit between From and To
	int totalSteps = static_cast<int>((To - From) / 0.1f);

	// 2. Pick a random integer step from 0 up to totalSteps
	int randomStep = rand() % (totalSteps + 1);

	// 3. Convert the step back to a float and add it to your starting point
	float Number = From + (randomStep * 0.1f);
	return Number;
}
string RandomShape() {
	string shapeTypes[9] = {

	"Parallelogram Area",
	"Triangle Area",
	"Circle Area",
	"Cube Volume",
	"Sector Area",
	"Sector Bow Length",
	"3Base Pyramid Volume",
	"Cone Volume",
	"Cylinder Volume",

	};

	return (shapeTypes[RandomNumber(0, 8)]);
}

void twoNumbersShapeNumbersFilling(string Shape, int Num1, int Num2) {

}


enum DifficultyLevel { Easy = 1, Medium = 2, Hard = 3, VeryHard = 4, Mixed = 5 };

struct QuizInfo {
	int NumberOfQuestions;
	int CorrectAns;
	int FalseAns;
	DifficultyLevel Level;



};


string AngleInDGorPI() {

	string ArrayString[2];
	ArrayString[0] = "Degree";
	ArrayString[1] = "Pi";

	return ArrayString[RandomNumber(0, 1)];




}

float NumberRead(string message) {
	float Number;

	cout << message;
	while (!(cin >> Number)) {
		// Clear the error flag so cin can work again
		cin.clear();
		// Ignore the bad input left in the buffer until the next newline
		cin.ignore(10000, '\n');

		cout << "Invalid input! Please enter a valid number: ";
	}

	// Clear any leftover newline characters in the buffer
	cin.ignore(10000, '\n');

	return Number;
} // <--- ONLY ONE closing brace here!

DifficultyLevel LevelX(int Choice) {


	while (Choice > 5 || Choice < 1) {

		cout << "Enter Valid Choice Please !!";
		cin >> Choice;
	}
	switch (Choice) {

	case 1:
		return DifficultyLevel::Easy;
		break;

	case 2:
		return DifficultyLevel::Medium;

	case 3:
		return DifficultyLevel::Hard;

	case 4:
		return DifficultyLevel::VeryHard;

	case 5:
		return DifficultyLevel::Mixed;
	}
}

char RandomOperator() {
	char Array[4] = { '+','-','*','/' };

	return Array[RandomNumber(0, 3)];

}

float CorrectAns(char Operator, float Number1, float Number2) {
	if (Operator == '*') {
		return(Number1 * Number2);
	}
	else if (Operator == '/') {
		return (Number1 / Number2);
	}
	else if (Operator == '-') {
		return (Number1 - Number2);
	}
	else return (Number1 + Number2);
}

void Exam(int NumOfQuestions, DifficultyLevel Level, int& CorrectAnswers, int& IncorrectAnswers) {

	float Number1;
	float Number2;
	float Number3;
	float Number4;
	string Shape;

	float UserAns;
	float CorrectAnswer;
	char Operator;

	switch (Level) {

	case DifficultyLevel::Easy:
		for (int counter = 1;counter <= NumOfQuestions;counter++) {
			Number1 = RandomNumber(1, 10);
			Number2 = RandomNumber(1, 10);

			Operator = RandomOperator();

			cout << "What Is The Ans Of " << Number1 << Operator << Number2;
			CorrectAnswer = CorrectAns(Operator, Number1, Number2);
			cout << endl;
			UserAns = NumberRead("");
			if (UserAns == CorrectAnswer) {
				CorrectAnswers++;
				cout << "Answer Is Correct" << endl << endl << endl;
				system("color 2f");
				system("color 0f");
			}
			else {
				IncorrectAnswers++;
				cout << "Answer Is Incorrect" << endl;
				cout << "Correct Answer = " << CorrectAnswer << endl << endl << endl;
				system("color 4f");
				system("color 0f");
			}
		}
		break;

	case DifficultyLevel::Medium:
		for (int counter = 1;counter <= NumOfQuestions;counter++) {

			Number1 = RandomNumber(1, 100);
			Number2 = RandomNumber(1, 10);

			Operator = RandomOperator();

			cout << "What Is The Ans Of " << Number1 << Operator << Number2;
			CorrectAnswer = CorrectAns(Operator, Number1, Number2);
			cout << endl;
			UserAns = NumberRead("");
			if (UserAns == CorrectAnswer) {
				CorrectAnswers++;
				cout << "Answer Is Correct" << endl << endl << endl;
				system("color 2f");
				system("color 0f");
			}
			else {
				IncorrectAnswers++;
				cout << "Answer Is Incorrect" << endl;
				cout << "Correct Answer = " << CorrectAnswer << endl << endl << endl;
				system("color 4f");

				system("color 0f");

			}
		}
		break;


	case DifficultyLevel::Hard:
		for (int counter = 1;counter <= NumOfQuestions;counter++) {
			Shape = RandomShape();

			if (Shape == "Parallelogram Area") {
				Number1 = RandomNumber(1, 100);
				Number2 = RandomNumber(1, 10);
				cout << "Length 1 = " << Number1 << endl;
				cout << "Length 2 = " << Number2 << endl;
				CorrectAnswer = ParallelogramArea(Number1, Number2);

				Number3 = NumberRead("Enter The Area Of Square :");
				if (Number3 == CorrectAnswer) {
					CorrectAnswers++;
					cout << "Answer Is Correct" << endl << endl << endl;
					system("color 2f");
					system("color 0f");
				}
				else {
					IncorrectAnswers++;
					cout << "Answer Is Incorrect" << endl;
					cout << "Correct Answer = " << CorrectAnswer << endl << endl << endl;
					system("color 4f");
					system("color 0f");
				}


			}



			else if (Shape == "Triangle Area") {
				Number1 = RandomNumber(1, 100);
				Number2 = RandomNumber(1, 10);
				CorrectAnswer = TriangleArea(Number1, Number2);

				cout << "Height = " << Number1 << endl;
				cout << "Base = " << Number2 << endl;

				Number3 = NumberRead("Enter Area Of Triangle : ");
				if (Number3 == CorrectAnswer) {
					CorrectAnswers++;
					cout << "Answer Is Correct" << endl << endl << endl;
					system("color 2f");
					system("color 0f");
				}
				else {
					IncorrectAnswers++;
					cout << "Answer Is Incorrect" << endl;
					cout << "Correct Answer = " << CorrectAnswer << endl << endl << endl;
					system("color 4f");
					system("color 0f");
				}
			}

			else if (Shape == "Circle Area") {
				Number1 = RandomNumber(1, 100);
				cout << "Radius = " << Number1 << endl;
				CorrectAnswer = CircleArea(Number1);

				Number2 = NumberRead("Enter Circle Area : ");
				if (Number2 == CorrectAnswer) {
					CorrectAnswers++;
					cout << "Answer Is Correct" << endl << endl << endl;
					system("color 2f");
					system("color 0f");
				}
				else {
					IncorrectAnswers++;
					cout << "Answer Is Incorrect" << endl;
					cout << "Correct Answer = " << CorrectAnswer << endl << endl << endl;
					system("color 4f");
					system("color 0f");
				}
			}



		}

		break;

	case DifficultyLevel::VeryHard:
	{
		Shape = RandomShape();

		string RandomIfAVPnotknown;
		for (int counter = 1;counter <= NumOfQuestions;counter++) {
			Shape = RandomShape();

			if (Shape == "Parallelogram Area") {
				string RandomIfAVPnotknown = RandomIfAVPIsGivenOrNO();
				if (RandomIfAVPnotknown == "(AreaOrVolumeOrPerimeter) Is Not A Given Value") {
					Number1 = floatRandomNumber(10.5, 115.5);
					Number2 = floatRandomNumber(10.5, 115.5);
					cout << "Length 1 = " << Number1 << endl;
					cout << "Length 2 = " << Number2 << endl;
					CorrectAnswer = ParallelogramArea(Number1, Number2);

					Number3 = NumberRead("Enter The Area Of Parallelogram :");
					if (abs(CorrectAnswer - Number3) <= 0.2f) {
						CorrectAnswers++;
						cout << "Answer Is Correct" << endl << endl << endl;
						system("color 2f");
						system("color 0f");
					}
					else {
						IncorrectAnswers++;
						cout << "Answer Is Incorrect" << endl;
						cout << "Correct Answer = " << CorrectAnswer << endl << endl << endl;
						system("color 4f");
						system("color 0f");
					}
				}
				else {
					float Area;

					Area = floatRandomNumber(15.5, 115.5);
					Number2 = floatRandomNumber(2.5, 11.5);
					Number3 = 0;
					cout << "Area Of Parallelogram = " << Area << endl;
					cout << "Width = " << Number2 << endl;
					cout << "Length = ";
					Number3 = NumberRead("");

					if (abs((Number3 * Number2) - Area) <= 0.2f) {
						CorrectAnswers++;
						cout << "Answer Is Correct" << endl << endl << endl;
						system("color 2f");
						system("color 0f");
					}
					else {
						IncorrectAnswers++;
						cout << "Answer Is Incorrect" << endl;
						cout << "Correct Answer = " << (Area / Number2) << endl << endl << endl;
						system("color 4f");
						system("color 0f");
					}

				}

			}
			else if (Shape == "Triangle Area") {
				string RandomIfAVPnotknown = RandomIfAVPIsGivenOrNO();
				if (RandomIfAVPnotknown == "(AreaOrVolumeOrPerimeter) Is Not A Given Value") {
					Number1 = floatRandomNumber(10.5, 115.5);
					Number2 = floatRandomNumber(10.5, 115.5);
					cout << "Base Length Of Triangle= " << Number1 << endl;
					cout << "Height = " << Number2 << endl;
					CorrectAnswer = TriangleArea(Number1, Number2);

					Number3 = NumberRead("Enter The Area Of Triangle :");
					if (abs(Number3 - CorrectAnswer) <= 0.2f) {
						CorrectAnswers++;
						cout << "Answer Is Correct" << endl << endl << endl;
						system("color 2f");
						system("color 0f");
					}
					else {
						IncorrectAnswers++;
						cout << "Answer Is Incorrect" << endl;
						cout << "Correct Answer = " << CorrectAnswer << endl << endl << endl;
						system("color 4f");
						system("color 0f");
					}
				}
				else {
					float Area;

					Area = floatRandomNumber(15.5, 115.5);
					Number2 = floatRandomNumber(2.5, 11.5);
					Number3 = 0;
					cout << "Area = " << Area << endl;
					cout << "Width = " << Number2 << endl;
					cout << "Length = ";
					Number3 = NumberRead("");

					if (abs((Number3 * Number2) - Area) <= 0.2f) {
						CorrectAnswers++;
						cout << "Answer Is Correct" << endl << endl << endl;
						system("color 2f");
						system("color 0f");
					}
					else {
						IncorrectAnswers++;
						cout << "Answer Is Incorrect" << endl;
						cout << "Correct Answer = " << ((Area / Number2) / 2) << endl << endl << endl;
						system("color 4f");
						system("color 0f");
					}

				}
			}

			else if (Shape == "Circle Area") {
				RandomIfAVPnotknown = RandomIfAVPIsGivenOrNO();
				if (RandomIfAVPnotknown == "(AreaOrVolumeOrPerimeter) Is Not A Given Value") {
					Number1 = floatRandomNumber(10.5, 115.5);
					cout << "Radius = " << Number1 << endl;
					CorrectAnswer = CircleArea(Number1);

					Number2 = NumberRead("Enter Circle Area : ");
					if (abs(Number2 - CorrectAnswer) <= 0.2f) {
						CorrectAnswers++;
						cout << "Answer Is Correct" << endl << endl << endl;
						system("color 2f");
						system("color 0f");
					}
					else {
						IncorrectAnswers++;
						cout << "Answer Is Incorrect" << endl;
						cout << "Correct Answer = " << CorrectAnswer << endl << endl << endl;
						system("color 4f");
						system("color 0f");
					}
				}

				else {
					Number2 = floatRandomNumber(200.5, 1000.5);

					cout << "Area = " << Number2 << endl;

					Number1 = NumberRead("Radius = ");

					CorrectAnswer = CircleArea(Number1);

					if (abs(CorrectAnswer - Number2) <= 0.2f) {

						CorrectAnswers++;
						cout << "Answer Is Correct" << endl << endl << endl;
						system("color 2f");
						system("color 0f");
					}
					else {
						IncorrectAnswers++;
						cout << "Answer Is Incorrect" << endl;
						cout << "Correct Answer = " << CorrectAnswer << endl << endl << endl;
						system("color 4f");
						system("color 0f");
					}

				}



			}
			else if (Shape == "Cube Volume") {
				RandomIfAVPnotknown = RandomIfAVPIsGivenOrNO();
				if (RandomIfAVPnotknown == "(AreaOrVolumeOrPerimeter) Is Not A Given Value") {
					Number1 = floatRandomNumber(10.5, 115.5);
					Number2 = floatRandomNumber(10.5, 115.5);
					Number3 = floatRandomNumber(10.5, 115.5);
					cout << "Length Of Cube = " << Number1 << endl;
					cout << "Height Of Cube= " << Number2 << endl;
					cout << "Width Of Cube= " << Number3 << endl;
					CorrectAnswer = CubeVolume(Number1, Number2, Number3);
					Number4 = NumberRead("Volume :");

					if (abs((Number4)-CorrectAnswer) <= 0.2f) {
						CorrectAnswers++;
						cout << "Answer Is Correct" << endl << endl << endl;
						system("color 2f");
						system("color 0f");
					}
					else {
						IncorrectAnswers++;
						cout << "Answer Is Incorrect" << endl;
						cout << "Correct Answer = " << CorrectAnswer << endl << endl << endl;
						system("color 4f");
						system("color 0f");
					}
				}
				else {
					Number1 = floatRandomNumber(120.5, 350.5);

					Number2 = floatRandomNumber(6.5, 15.5);

					Number3 = floatRandomNumber(6.5, 15.5);
					cout << "Volume = " << Number1 << endl;
					cout << "Length = " << Number2 << endl;
					cout << "Height = " << Number3 << endl;

					Number4 = NumberRead("Width = ");

					CorrectAnswer = (Number1) / (Number2 * Number3);

					if (abs(Number4 - CorrectAnswer) <= 0.2f) {
						CorrectAnswers++;
						cout << "Answer Is Correct" << endl << endl << endl;
						system("color 2f");
						system("color 0f");
					}
					else {
						IncorrectAnswers++;
						cout << "Answer Is Incorrect" << endl;
						cout << "Correct Answer = " << CorrectAnswer << endl << endl << endl;
						system("color 4f");
						system("color 0f");
					}


				}

			}

			else if (Shape == "Sector Area") {
				RandomIfAVPnotknown = RandomIfAVPIsGivenOrNO();
				if (RandomIfAVPnotknown == "(AreaOrVolumeOrPerimeter) Is Not A Given Value") {
					Number1 = floatRandomNumber(10.5, 115.5);
					Number2 = RandomNumber(0, 360);
					cout << "Radius Of Sector= " << Number1 << endl;
					cout << "Degree Of Sector= " << Number2 << endl;
					CorrectAnswer = SectorArea(Number1, Number2);

					Number3 = NumberRead("Enter Sector Area : ");
					if (abs(Number3 - CorrectAnswer) <= 0.2) {
						CorrectAnswers++;
						cout << "Answer Is Correct" << endl << endl << endl;
						system("color 2f");
						system("color 0f");
					}
					else {
						IncorrectAnswers++;
						cout << "Answer Is Incorrect" << endl;
						cout << "Correct Answer = " << CorrectAnswer << endl << endl << endl;
						system("color 4f");
						system("color 0f");
					}
				}

				else {
					Number2 = floatRandomNumber(50.15, 150.55);

					cout << "Area = " << Number2 << endl;

					string DegOrRad = DegORRadiusQuesx();

					if (DegOrRad == "Degree") {

						Number1 = RandomNumber(1, 360);
						cout << "Degree = " << Number1 << endl;
						Number3 = NumberRead("Radius Of Sector =");
					}
					else {

						Number3 = floatRandomNumber(5.5, 20.5);
						cout << "Radius = " << Number3 << endl;
						Number1 = NumberRead("Degree Of Sector =");
					}


					CorrectAnswer = SectorArea(Number3, Number1);

					if (abs(CorrectAnswer - Number2) <= 0.2f) {

						CorrectAnswers++;
						cout << "Answer Is Correct" << endl << endl << endl;
						system("color 2f");
						system("color 0f");
					}
					else {
						IncorrectAnswers++;
						cout << "Answer Is Incorrect" << endl;
						cout << "Correct Answer = " << CorrectAnswer << endl << endl << endl;
						system("color 4f");
						system("color 0f");
					}

				}

			}
					}
					break;
	}

		case DifficultyLevel::Mixed:

			for (int counter = 1;counter <= NumOfQuestions;counter++) {

				Exam(1, LevelX(RandomNumber(1, 4)), CorrectAnswers, IncorrectAnswers);

			}
			break;

	}
}


	int main() {
		srand((unsigned)time(NULL));
		Header();

		QuizInfo Quiz;
		Quiz.CorrectAns = 0;
		Quiz.FalseAns = 0;
		int NumOfChoice = NumberRead("Enter Your Choice { 1= (Easy) 2= (Medium) 3= (Hard) 4= (Very Hard) 5= (Mixed) }");
		DifficultyLevel Choice = LevelX(NumOfChoice);
		Quiz.NumberOfQuestions = NumberRead("How Many Questions? :");

		cout << endl;


		int GamesCounter = 0;


		int ChoiceToPLay;
		do {


			Exam(Quiz.NumberOfQuestions, Choice, Quiz.CorrectAns, Quiz.FalseAns);
			GamesCounter++;
			cout << endl;
			cout << "Wanna start Playing Again ?  1=yes 0=no ";
			cin >> ChoiceToPLay;

		} while (ChoiceToPLay == 1);

		cout << endl << "Correct Answers :" << Quiz.CorrectAns;
		cout << endl << "inCorrect Answers :" << Quiz.FalseAns;


	}
