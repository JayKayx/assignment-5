/* Given two numbers a and b, write a program using functions to print all the odd numbers
between them.
Sample Input: 1 10
Sample Output: 1 3 5 7 9 */

#include <iostream>

using namespace std;

int odd(int num1,int num2){
    for(;num1<num2;num1++){
        if (num1%2!=0){
            cout<<num1<<" ";

        }

    }
}
int main(){
    int a,b;
    cout<<"give numbers a and b to find odd numbers between:\n";
    cin>>a;
    cin>>b;
    odd(a,b);
}