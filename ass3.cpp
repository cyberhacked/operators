/*
There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many
girls received grades "A" if 17 boys made up 80% of the students that received grades "A". (Medium)
Sample Input : 45
Sample Output : 19
*/
#include<iostream>
using namespace std;
int main()
{
    int Total_class,boys,girls;
    boys=17;
    Total_class=(80*45)/100;
    girls=Total_class-boys;
   cout << "Number of girls getting grade A = " << girls << endl;

    
    return 0;
}