#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(NULL));
  char playAgain = 'y';
  int num;
  int guess;
  int guessNum;
  while (playAgain == 'y')
  {
    guessNum = 0;
    num = rand()%101;
    while (guess != num)
    {
      cout << "Enter a number between 1 and 100" << endl;
      cin >> guess;
      if (cin.fail())
      {
	cout << "Enter a valid number" << endl;
	cin.clear();
	cin.ignore(1000, '\n');
	continue;
      }
      if (guess == num)
      {
	guessNum++;
	cout << "Correct!" << endl;
	cout << "Great job guessing my number!" << endl;
	cout << "Number of guesses: " << guessNum << endl;
	cout << "Would you like to play again? (y/n)" << endl;
	cin >> playAgain;
      }

      else if (guess < num)
      {
	guessNum++;
	cout << "Too Low. Try again" << endl;
      }

      else if (guess > num)
      {
	guessNum++;
	cout << "Too High. Try again" << endl;
      }
   }
       
  }
  cout << "Thank you for playing!";
  return 0;
}
