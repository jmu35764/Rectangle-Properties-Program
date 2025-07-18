// Rectangle Properties Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;

void getLength_Width(int& length, int& width)
{
    cout << "Enter the length \n";
    cin >> length;
    while (length <= 0)
    {
       cout << "The value must be positive" << endl;
       cin >> length;
    }
  
    cout << "Enter the width \n";
    cin >> width;

    while (width <= 0)
    {
        cout << "The value must be positive" << endl;
        cin >> width;
    }
  
}

int calcPerimeter(int length, int width)
{
    //getLength_Width(length, width);
    return 2*(length + width);
}

int calcArea(int length, int width)
{
    return length * width;
}

void displayProperties(int perimeter, int area)
{
    cout << "The perimeter is " << perimeter << endl;
    cout << "The area is " << area << endl;
}

int main()
{
    int reclength, recwidth;

    getLength_Width(reclength, recwidth);
    int Rec_perimeter = calcPerimeter(reclength, recwidth);
    int Rec_area = calcArea(reclength, recwidth);
    
    displayProperties(Rec_perimeter, Rec_area);
}




