#include <iostream>
using namespace std;

int main() {



   /* problem 1
cout << "Input: " << endl;
    int input;
    cin >> input;
    if (input > 0 || input != 0) {
        cout << "Positive number" << endl;
    }
    else if (input != 0) {
        cout << "Negative number" << endl;
    }
    if (input == 0) {
        cout << "Neither positive nor negatve" << endl;
    }


    */



    /*
    problem 2
    cout << "Input: " << endl;
    int input;
    cin >> input;
if (input %2 ==0 ) {
    cout << "Even number" << endl;

}
    else {
        cout << "Odd number" << endl;
    }
*/

/*
    problem 3
    int first, second;
    cout << "Enter two numbers: ";
cin >> first >> second;
    if (first > second) {
        cout << "Largest number is "<< first<< endl;
    }
    else {
        cout << "Largest number is "<< second<< endl;
    }


*/


    /*

    problem 4



    int first, second, third;
    cout << "Enter three numbers: ";
    cin >> first >> second>>third;
    if (first >= second) {
        if (first > third) {
            cout << "Largest number is "<< first<< endl;
        }
        else {
            cout << "Largest number is "<< third<< endl;
        }
    }
    else {
        if (second >= third) {
            cout << "Largest number is "<< second<< endl;
        }
        else {
            cout << "Largest number is "<< third<< endl;
        }
    }

 */

    /*
    problem 5

    int year;
    cout<<"Enter Year: ";
    cin>>year;
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout<<"Leap year";
    }
    else {
        cout<<"Not a Leap year";
    }
*/

/*
    problem 6
    int speed;
    cout << "Please enter your speed: ";
    cin >> speed;
   if (speed <20) {
       cout << "too slow" << endl;
   }
    else if (speed > 80) {
        cout << "too fast" << endl;
    }
    else {
        cout << "jusr right" << endl;
    }


*/


    /*
   // problem 7

    int mark;
    cout << "Please enter your mark: ";
    cin >> mark;
    if (mark >= 0) {
        if (mark> 50) {
            cout<<"Pass"<<endl;
        }
        else {
            cout<<"Fail"<<endl;
        }
    }
    else {
        cout<<"Mark can't be negative number"<<endl;
    }

*/

    /*
    // problem 8
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number != 0) {
        if (number>0) {
            cout <<"Positive" << endl;
        }
        else {
            cout <<"Negative" << endl;
        }
    }
    else {
        cout <<"Zero" << endl;
    }


*/


    /*
//problem 9
    char command;
    cout << "Enter a letter" << endl;
    cin >> command;
    if (command == 'g') {
        cout << "Go!" << endl;
    }
    else if (command == 'y') {
        cout << "Get ready" << endl;
    }
    else if (command == 'r') {
        cout << "Stop" << endl;
    }
    else {
        cout << "Invalid command" << endl;
    }

*/

    /*
    //problem 10
    int grade;
    cout << "Please enter your grade: ";
    cin >> grade;

    if (grade >= 90 && grade <= 100) {
        cout << "A" << endl;
    }
    else if (grade >= 80 && grade <= 89) {
        cout << "B" << endl;
    }
    else if (grade >= 70 && grade <= 79) {
        cout << "C" << endl;
    }
    else if (grade >= 60 && grade <= 69) {
        cout << "D" << endl;
    }
    else {
        cout << "F" << endl;
    }


*/


    /*
    //problem 11

    int first, second;
    cout << "Enter two number: ";
    cin >> first >> second;
    if (first % second ==0) {
        cout<<first<<" is divisible by "<<second<<endl;

    }
    else {
        cout<<first<<" is not divisible by "<<second<<endl;
    }

    */


    /*
    //problem 12
    int angle1, angle2, angle3;
cout << "Enter 3 angles of a triangle: ";
    cin >> angle1 >> angle2 >> angle3;
    if (angle1 + angle2 > angle3 && angle1 + angle3 > angle2 && angle2 + angle3 > angle1 && angle1 - angle2 < angle3 && angle3 - angle2 < angle1 && angle1 - angle3 < angle2) {
        cout << "Triangle is valid" << endl;
    }
    else {
        cout << "Triangle is not valid" << endl;
    }

    */



    /*
//problem 13
     char value;
    cout << "Enter a character: ";
    cin >> value;
    if (std::isalpha(value)) {
        if (std::isupper(value)) {
            cout<<"Uppercase alphabet"<<endl;
        }
        else {
            cout<<"Lowercase alphabet"<<endl;
        }
    }
    else {
        cout<<"Is not an alphabet"<<endl;
    }


    */

    double weight1, price1, weight2, price2;
    cout << "Please enter your weight and price of product 1: ";
    cin >> weight1 >> price1;
    cout << "Please enter your weight and price of product 2: ";
    cin >> weight2 >> price2;
    return 0;

}




