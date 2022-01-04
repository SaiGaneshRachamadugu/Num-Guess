#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std; 
int mistakes = 0;
int correctGuesses=0 ;
int invalidinput=0;
void display()
{
	cout<<"Mistake(s) = "<<mistakes<<endl;
	cout<<"Correct = "<<correctGuesses<<endl<<endl;
}
int main()
{
	
  cout<<"          d8b   db db    db .88b  d88.            d888b  db    db d88888b .d8888. .d8888.      "<<endl;
  cout<<"          888o  88 88    88 88'YbdP`88           88' Y8b 88    88 88'     88'  YP 88'  YP      "<<endl;
  cout<<"          88V8o 88 88    88 88  88  88           88      88    88 88ooooo `8bo.   `8bo.        "<<endl;
  cout<<"          88 V8o88 88    88 88  88  88           88  ooo 88    88 88~~~~~   `Y8b.   `Y8b.      "<<endl;
  cout<<"          88  V888 88b  d88 88  88  88           88. ~8~ 88b  d88 88.     db   8D db   8D      "<<endl;
  cout<<"          VP   V8P ~Y8888P' YP  YP  YP            Y888P  ~Y8888P' Y88888P `8888Y' `8888Y'      "<<endl;
                                                                                     
                                                                                     
	system("color 02");
	char name[20];
	cout<<"This is a very simple number guessing game. Each time you will be given a number of the range 0-20."<<endl;
	cout<<"The objective of the game is to guess whether the nextnumber is going to be higher or not. As simple as that."<<endl;
	cout<<"You have the ability to make no more than 3 mistakes befor you lose,so guess wisely."<<endl<<endl;
	cout<<"hello player welcome to the game" <<endl<<endl<<" enter your name  ";
	cin.getline(name,sizeof(name));
	system("cls");
	mistakes=0;
	correctGuesses=0;
	int Null=0;
	int prevNum = 5, nextNum;
	char choice;

	/// <summary>
	/// Sai Ganeshr "Basic Number Guessing Game"
	/// this line states that if you want to choose the next number to be higher than the currently displayed number then Press 'H'
	/// If you guess the next number as the Lower than currently displayed number then press 'L'
	/// </summary>
	/// <returns></returns>

	do
	{
			do
			nextNum = rand() % 11;
		while (nextNum == prevNum);
		cout<<"You are starting with the number "<<(rand()%20)+1<<" . if the next number higher (write HIGH) or lower(write LOW)?";
		cin >> choice;
		if (choice == 'H')
		{
			if (prevNum<nextNum)
			{
				cout << "Correct ! the new number is " << nextNum << endl;
				correctGuesses++;
				display();
				system("pause");
				system("cls");
			}
			
			else
			{
				cout << "Wrong , you made a mistake ! the new number is " << nextNum << endl;
				mistakes++;
				display();
				system("pause");
				system("cls");
			}
		}
		if (choice == 'L')
		{
			if (prevNum>nextNum)
			{
				cout <<"Correct ! the new number is "<< nextNum << endl;
				correctGuesses++;
				display();
				system("pause");
				system("cls");
			}
			else 
			{
				cout<<"wrong ,you made a mistake ! the new number is "<<nextNum<<endl;
				mistakes++;
				display();
				system("pause");
				system("cls");
			}
        }
	} 

	/// <summary>
	/// SaiGaneshr "Basic Number guessing Game"
	/// This Line States if you have guessed the number wrong for 3 times, if yes then you have to restart the game again.
	/// </summary>
	/// <returns></returns>
	while (mistakes < 3);
	system("cls");
	cout << "you've made 3 mistakes !Game is now over ! " << endl;
	cout << "you had " << correctGuesses << " correctGuesses before the game was over" << endl;

}



