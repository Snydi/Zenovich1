// Zenovich1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;



int main()
{
    string input;
    string output;
    string result;

    int state = 1;
    cin >> input;


    
    for (int i = 0; i < input.length(); i++)
    {
      
        switch (state)
        {
        case 1:
            output = "";
            if (input[i] == 'a')
            {
                state = 2;
                output += 'a';
                break;
            }
            else if (input[i] == 'b')
            {
                state = 5;
                output += 'b';
                break;
            }
            else
            {
                state = 1;
                output = "";
                break;
            }
        case 2:
            if (input[i] == 'b')
            {
                state = 3;
                output += 'b';
                break;
            }
            else if (input[i] == 'c')
            {
                state = 4;
                output += 'c';
                break;
            }
            else
            {
                state = 1;
                output = "";
                break;
            }
        case 3:
            if (input[i] == 'b')
            {
                state = 3;
                output += 'b';
                break;
            }
            else if (input[i] == 'c')
            {
                state = 4;
                output += 'c';
                break;
            }
            else
            {
                state = 1;
                output = "";
                break;
            }
        case 4:
          
            if (input[i] == 'a')
            {
                state = 2;
                output += 'a';
                break;
            }
            else if (input[i] == 'c')
            {
                state = 4;
                output += 'c';
                break;
            }
            else
            {
                result += output;
                state = 1; 
                break;
            }
        case 5:
            if (input[i] == 'a')
            {
                output += 'a';
                state = 6;
                break;
            }
            else
            {
                state = 1;
                break;
            }
     
        case 6:
            if (input[i] == 'c')
            {
                output += 'c';
                state = 7;
                break;
            }
            else
            {
                state = 1;
                output = "";
                break;
            }
        case 7:
            if (input[i] == 'c')
            {
                state = 7;
                output += 'c';
                break;
            }
            else
            {
                result += output;
                state = 1;
                break;
            }
           





        }

       
    }
    
  
    cout << result;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
