#include <iostream>
using namespace std;


string input(string message)
{
    string content;
    cout << message + ": ";
    cin >> content;
    return content;
}
int main()
{
    string name = input("enter your name");
    cout <<"your name is: "<<name<< endl;
    return 0;
}



// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.