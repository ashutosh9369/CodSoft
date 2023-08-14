#include <iostream>
#include <cstdlib>
using namespace std;
int main() 
{
    int gssnum ;
    int chance = 10;
    int min = 1;
    int max = 100;
    int srtnum = rand() % (max - min + 1) + min;
    cout << "I have decided a number as a secret number and you have to guess it now. Range is 1 to 100" << endl;
    cout << "You have only 10 chances" << endl;
    for (; chance > 0 ; chance--)
        { 
        cout << "Guess the number: " << ends;
        cin >> gssnum;
        if ( srtnum == gssnum )
		{
            cout << "correct" << endl; break;
        }
        else if ( gssnum > srtnum )
		{
            cout << "You guessed higher, secret number is lower than you guessed" << endl;
            cout << "Chances left :" << chance - 1 << endl;
        }
        else if ( gssnum < srtnum )
		{
            cout << "You guessed lower, secret number is higher than you guessed" << endl;
            cout << "Chances left :" << chance - 1 << endl;
        }
    }
      if ( chance == 0 )
      {
        cout << "You failded to guess the right number." << endl;
      }
      else
      {
        cout << "Congratulations, you guessed number succesfully" << endl;
      }
    return 0;
}
