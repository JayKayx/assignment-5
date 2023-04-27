/* Q3 - Given the age of a person, write a function to check if the person is eligible to vote or not.
Sample Input: 19
Sample Output: Yes
Sample Input: 17
Sample Output: No*/

#include <iostream>
using namespace std;
bool vote(int age){
    if(age>=18){
        return true;
    }
    return false;
}
int main(){
    cout<<"Enter the age : ";
    int age;
    cin>>age;
    if(vote(age)==true){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

}