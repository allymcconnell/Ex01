//
//  main.cpp
//  Ex01
//
//  Created by Ally McConnell on 5/24/16.
//  Copyright © 2016 Ally McConnell. All rights reserved.
//

//Results:
//  EX01_01: 20/20
//  EX01_02: 20/20
//  EX01_03: 18/20
//  EX01_04: 13/20
//  EX01_05: 13/20
//-----------------
//  TOTAL: 84/100

// ex01
// a) CPU
// b) RAM
// c) i
// d) v
// e) address
// f) 8
// g) iv
// h) ii

#include <iostream>
using namespace std;

int ex02();
int ex03();
int ex04();
int ex05();

int main() {
    ex02();
    ex03();
    ex04();
    ex05();
}

int ex02()
{
    //section A
    bool hasPassedTest = true;
    
    //section B
    int x = rand();
    int y = rand();
    
    if ( x > y )
    {
        cout << " x is bigger than y" << endl;
    }
    //section C
    int numberOfShares;
    cout << "Please enter an integer value: ";
    cin >> numberOfShares;
    if ( numberOfShares < 100)
        cout << "i is less than 100";
    
    //section D
    int box;
    cout << "Enter box width: ";
    cin >> box;
    int book;
    cout << "Enter book width: ";
    cin >> book;
    
    if (box % book == 0)
    {
        cout << "Box is divisible";
    }
    
    //section E
    int shelfLife;
    cout << "Enter shelf life of box of chocolates: ";
    cin >> shelfLife;
    int outTemp;
    cout << "Enter outside tempertature: ";
    cin >> outTemp;
    
    if (outTemp > 90)
    {
        shelfLife-=4;
    }
    
    return 0;

}


int ex03()
{
    //section A
    int width;
    cout << "Enter the width of the square: ";
    cin >> width;
    int length;
    cout << "Enter length of the square: ";
    cin >> length;
    int areaSquare;
    cout << "Enter the area of the sqaure: ";
    cin >> areaSquare;
    int diagonalAcross = sqrt (double
                               ((length ^ 2)+(width ^ 2)));
    cout << "The diagonal across the square is: ";
    cout << diagonalAcross;
    
    //PT: don't return 0 until the end of the function. -1
    return 0;
    
    //section B
    char response;
    cout << "Do you want some tea?: ";
    cin >> response;
    if (response == 'Y')
    {
        response = 'Yes';
    }
    else if (response == 'N')
    {
        response = 'No';
    }
    
    return 0;
    
    //section C
    char tab = '\t';
    cout << "Tab character: " << tab >> "ending" << endl;
    return 0;
    
    //section D
    string mailingAddress;
    cout << "What is your mailing address?: ";
    cin >> mailingAddress;
    
    return 0;
    
    //section E
    std::string a; //PT: string a = "";  -1
    if (a.empty())
    {
        
    }
    
    return 0;
    
}

void increment(int n)
{
    n++;
    cout << "\tn inside the function is" << n << endl;
}

int ex04()
{
    //section A
    int number;
    cout << "Enter a number between 1 and 10: ";
    cin >> number;
    while (number < 1 || number > 10)
    {
        cout << "Invalid Input, must be a number between 1-10";
        cout << "Enter number between 1 and 10: ";
        cin >> number;
    }
    //PT Again, don't return 0 until the end of the function. -1
    return 0;
    
    //section B
    cin >> number;
    int result = 0;
    return result;
    //PT -3
    // for (int i=0; i<number, i++)
    //    cout << i << "^3 = " << (i*i*i) << endl;
    //END
    for (int number);
    {
        result = result * 3;
        
    }
    
    return 0;
    
    //section C
    //PT -3
    //for (int i=0; i<number; i++)
    //  cout << "*";
    //END
    cin >> number;
    do{
        number++;
    }
    while
    
    return 0;
    
    //section D
    int i;
    
    while (i <= 40)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
            
        }
        i++;
    }
    
    return 0;
    
    //section E
    return number;
    cin >> number;
    double x = (double) number;
    cin >> x;
    
    return 0;
    
    //section F
    int a = rand();
    int b = rand();
    //PT call a function to add these.
    return a + b;
    
    //section G
    int m = 1;
    cout << "Before the call, m is " << m << endl;
    increment(m);
    cout << "after the call, m is " << m << endl;
    
    return 0;
    
}

//PT: need to implement this -3
void printArray(int list[], int arraySize);
//{
//   for (int i=0; i<arraySize; i++)
//      cout << list[i] << ", ";
//}
}

int ex05()

{
    //section A
    //PT: use a loop and an array. -1
    int num1;
    cout << "Enter number 1: ";
    cin >> num1;
    int num2;
    cout << "Enter number 2: ";
    cin >> num2;
    int num3;
    cout << "Enter number 3: ";
    cin >> num3;
    int num4;
    cout << "Enter number 4: ";
    cin >> num4;
    int num5;
    cout << "Enter number 5: ";
    cin >> num5;
    
    int numbers[5] = {num1, num2, num3, num4, num5};
    printArray(numbers, 5);
    return 0;
    
    //section B
    int number1;
    int number2;
    int sum;
    int product;
    
    cout << "Enter number 1: ";
    cin >> number1;
    cout << "Enter number 2: ";
    cin >> number2;
    
    //PT: Functions. -3
    sum = number1 + number2;
    cout << "The sum is " << sum << endl;
    
    product = number1 * number2;
    cout << "The sum is " << product << endl;
    
    return 0;
    
    //section C
    

    //section D
    int list[4] = {1,5,7,8};
    printArray(list, 4);
    
    int value;
    cout << "Enter a number from 0-10 to see if in array: ";
    cin >> value;
    
    if (value == 1)
    {
        cout << "The value is in the array" << endl;
    
    }
    
    if (value == 5)
    {
        cout << "The value is in the array" << endl;
    }

    if (value == 7)
    {
        cout << "The value is in the array" << endl;
        
    }
    
    if (value == 8)
    {
        cout << "The value is in the array" << endl;
        
    }

    else (value =! 8, 7, 5, 1);
    {
        cout << "That value is not in the array" << endl;
    }
    
    return 0;

}
