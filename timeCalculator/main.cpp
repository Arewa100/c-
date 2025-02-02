#include <iostream>
using namespace std;
int main()
{
    int hour = 0;
    int minute = 0;
    int second = 0;

    int user_input;
    cout << "Enter the time in seconds: " << endl;
    cin >> user_input;

    hour = user_input / 3600;
    int moduloResultOfHour = user_input % 3600;
    minute = moduloResultOfHour / 60;
    int moduloResultOfMinute = moduloResultOfHour % 60;
    second = moduloResultOfMinute;

    cout <<"the time is:  "<< hour << ":" << minute << ":" << second << endl;
    return 0;
}