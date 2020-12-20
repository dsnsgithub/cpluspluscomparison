#include <iostream>

using namespace std;

int main()
{
    //Variables
    string option;
    string compareone;
    string comparetwo;  
    float calculateone = 0;
    float calculatetwo = 0;
    float solution = 0;
    char operation;

    cout << "Welcome to Dominic's Compare and Calculate Program" << endl;

    //Loop
    while (1 == 1)
    {
        cout << "Do you want to compare two values or calculate a equation?" << endl;
        cin >> option;

        if (option=="compare")
        {
            cout << "Enter your first value:" << endl;
            cin >> compareone;

            cout << "Enter your second value:" << endl;
            cin >> comparetwo;

            if (compareone == comparetwo)
            {
                cout << "The two values are the same" << endl;
            }
            else
            {
                cout << "The two values are NOT the same" << endl;
            }
        }
        if (option=="calculate")
        {
            cout << "Enter your first number:" << endl;
            cin >> calculateone;

            cout << "Enter your operation:" << endl;
            cin >> operation;

            cout << "Enter your second number:" << endl;
            cin >> calculatetwo;


            if(operation=='+')
            {
                solution = calculateone + calculatetwo;
            }
            if(operation=='-')
            {
                solution = calculateone - calculatetwo;
            }
            if(operation=='*')
            {
                solution = calculateone * calculatetwo;
            }
            if(operation=='/')
            {
                solution = calculateone + calculatetwo;
            }
            else
            {
                cout << "Invalid Operation" << endl;
            }

            cout << "Solution: " << solution << endl;
        }
        else
        {
            cout << "You must enter compare or calculate" << endl;
        }

        cout << endl;
        cout << endl;
    }

    return 0;
}
