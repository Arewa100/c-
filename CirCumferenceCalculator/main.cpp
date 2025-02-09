#include <iostream>
#include <cmath>
using namespace std;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main()
{
const double PI = 3.142;
double radius;
double circumference;
double area;
double diameter;


cout <<" Enter the radius of a circle: ";
cin >> radius;
   circumference = PI * pow(radius, 2);
   area = PI * radius * radius;
   diameter = 2 * radius;

   cout<<"the result of this calculation is: "<< area<<circumference<<diameter <<endl;

   return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.