/*  Given two numbers a and b, write a program to print all the prime numbers present between
a and b.
Sample Input: 2 10
Sample Output: 2 3 5 7 */

#include <iostream>

using namespace std;

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int a,b;
    cout<<"give numbers a and b to find odd numbers between:\n";
    cin>>a;
    cin>>b;
    for(int i=a;i<=b;i++){
        if(is_prime(i)){
            cout<<i<<" ";
        }
    }



}
