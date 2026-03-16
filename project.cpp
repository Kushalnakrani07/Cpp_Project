#include <iostream>
using namespace std;

// Function to start the quiz
void startQuiz()
{

    int score = 0; // Variable to store score
    char answer;   // Variable to store user answer

    cout << "\n===== C++ QUIZ STARTED =====\n";

    // Question 1
    cout << "\n1. Who developed C++?\n";
    cout << "A. Dennis Ritchie\nB. Bjarne Stroustrup\nC. James Gosling\nD. Guido van Rossum\n";
    cout << "Enter answer: ";
    cin >> answer;

    if (toupper(answer) == 'B')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is B\n";
    }

    // Question 2
    cout << "\n2. Which symbol is used for single-line comment in C++?\n";
    cout << "A. //\nB. ##\nC. /* */\nD. <!-- -->\n";
    cout << "Enter answer: ";
    cin >> answer;

    if (toupper(answer) == 'A')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is A\n";
    }

    // Question 3
    cout << "\n3. Which data type is used to store decimal numbers?\n";
    cout << "A. int\nB. float\nC. char\nD. bool\n";
    cout << "Enter answer: ";
    cin >> answer;

    if (toupper(answer) == 'B')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is B\n";
    }

    // Question 4
    cout << "\n4. Which operator is used for comparison?\n";
    cout << "A. =\nB. ==\nC. &&\nD. ||\n";
    cout << "Enter answer: ";
    cin >> answer;

    if (toupper(answer) == 'B')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is B\n";
    }

    // Question 5
    cout << "\n5. Which loop is entry controlled?\n";
    cout << "A. do-while\nB. for\nC. while\nD. Both B and C\n";
    cout << "Enter answer: ";
    cin >> answer;

    if (toupper(answer) == 'D')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is D\n";
    }

    // Question 6
    cout << "\n6. Which keyword is used to define a class?\n";
    cout << "A. struct\nB. class\nC. define\nD. object\n";
    cout << "Enter answer: ";
    cin >> answer;

    if (toupper(answer) == 'B')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is B\n";
    }

    // Question 7
    cout << "\n7. Which concept allows multiple functions with same name?\n";
    cout << "A. Inheritance\nB. Encapsulation\nC. Polymorphism\nD. Abstraction\n";
    cout << "Enter answer: ";
    cin >> answer;

    if (toupper(answer) == 'C')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is C\n";
    }

    // Question 8
    cout << "\n8. Which header file is used for input/output?\n";
    cout << "A. stdio.h\nB. iostream\nC. conio.h\nD. math.h\n";
    cout << "Enter answer: ";
    cin >> answer;

    if (toupper(answer) == 'B')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is B\n";
    }

    // Question 9
    cout << "\n9. Which operator is used to access class members?\n";
    cout << "A. .\nB. ->\nC. ::\nD. Both A and B\n";
    cout << "Enter answer: ";
    cin >> answer;

    if (toupper(answer) == 'D')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is D\n";
    }

    // Question 10
    cout << "\n10. Which feature makes C++ object-oriented?\n";
    cout << "A. Classes\nB. Functions\nC. Variables\nD. Arrays\n";
    cout << "Enter answer: ";
    cin >> answer;

    if (toupper(answer) == 'A')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is A\n";
    }

    // Final Score Display
    cout << "\n===== QUIZ COMPLETED =====\n";
    cout << "Your Final Score: " << score << " / 10\n";

    if (score >= 8)
        cout << "Excellent Performance!\n";
    else if (score >= 5)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";
}

int main()
{

    int choice;

    do
    {
        cout << "\n===== C++ QUIZ GAME =====\n";
        cout << "1. Start Quiz\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            startQuiz();
            break;

        case 2:
            cout << "Exiting Quiz Game...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 2);

    return 0;
}