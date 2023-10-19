#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int firstNum, secondNum;

    cout << "Enter 2 numbers in chronological order: ";
    cin >> firstNum >> secondNum;

    int x = firstNum;
    int remain;
    int sum = 0;

//2) Print odd numbers
    cout << "All odd numbers between your numbers: " << endl;
    do{
      remain = x%2;

      if(remain == 1){
        cout << x << " ";
    }
      x++;
    }
    while(x <= secondNum);
    cout << endl;

//3) Print even sum
    cout << "Sum of all even numbers between your numbers: ";
    x = firstNum;
    do{
      remain = x%2;

      if(remain == 0){
        sum += x;
    }
      x++;
    }
    while(x <= secondNum);
    cout << sum << endl;

//4) Output squares
    cout << "Squares of numbers 1-10: " << endl;
    x = 1;
    do{
      cout << x << " " << pow(x,2) << " ";
      x++;
    }
    while(x <= 10);
    cout << endl;

//5) Sum of square odd
    cout << "Sum of all odd numbers between your numbers: ";
    sum = 0;
    x = firstNum;
    do{
      remain = x%2;

      if(remain == 1){
        sum += pow(x,2);
    }
      x++;
    }
    while(x <= secondNum);
    cout << sum << endl;
//6) All uppercase
    cout << "Uppercase letters: " << endl;
    x = 65;
    do{
      cout << static_cast<char>(x) << " ";
      x++;
    }
    while(x<=90);

    return 0;
}
