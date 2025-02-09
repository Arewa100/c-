#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    while (true)
    {
        int number;
        cout <<"enter a number:";
        cin >> number;
        int squareOfNumber = pow(number, 2);
        cout <<"the square of the number is: " <<squareOfNumber<<endl;

        if (squareOfNumber > 100 && number > 100)
        {
            cout<<"the number and its square is greater than 100" <<endl;
        }else if (squareOfNumber < 100 && number < 100)
        {
            cout <<"the number and its square is less than 100" <<endl;
        }
        else if (squareOfNumber == 100 && number == 100)
        {

        }
    }


}

