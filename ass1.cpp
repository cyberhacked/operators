/*
Write a program to check whether two numbers (entered by user) are equal or not. (Easy)
Sample Input 1: 1, 2
Sample Output 1: 0
Sample Input 2: 2, 2
Sample Output 2: 1
*/
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter your First Number:"<<endl;
    cin>>num1;
    cout<<"Enter your Second Number:"<<endl;
    cin>>num2;
    (num1==num2)?true:false;
    cout<<(num1==num2);
    return 0;
}
