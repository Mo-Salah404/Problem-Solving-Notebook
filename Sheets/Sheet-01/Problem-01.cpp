/*
╔══════════════════════════════════════════════════════════╗
║               SHEET 01 — PROBLEM 01                      ║
║              DATA TYPES & CONDITIONS                     ║
╚══════════════════════════════════════════════════════════╝

    Problem     : M. Capital or Small or Digit
    Platform    : Codeforces
    Topics      : ASCII, Characters, Conditional Statements
    Difficulty  : Beginner

    Link:
    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
*/

// =================================================================

/*
    💡 A SMALL HINT             ضروري جدا تشوف الهينت وتحاول تاني بنفسك قبل ما تشوف الحل

    "Characters are not just symbols; they also have numeric values."
    خلي بالك ان كل حرف او رقم ليه قيمة معينة
    ASCII code وده اللي بنسميه 
    for example >> the character 'A' has an ASCII value of 65
    while 'a' has a value of 97.
    Similarly, the digit '0' has an ASCII value of 48.
    By understanding these values, we can easily determine 
    whether a character is a digit or an alphabetic character,
    and if it's alphabetic, whether it's uppercase or lowercase.
    link to ASCII table: https://www.asciitable.com/
*/

// =================================================================

/*
    Problem Understanding:

    مهم جدا اننا نفهم المشكلة كويس قبل ما نبدأ نحلها
    Given a single character X, determine whether it is a digit
    or an alphabetic character.
    هنا هو طالب مننا اننا نحدد اذا كان الحرف ده رقم ولا حرف كابتل ولا سمال
    If it is an alphabetic character, determine whether it is
    uppercase (Capital) or lowercase (Small).

    Key Observation:
    Characters have corresponding ASCII values.

    - Digits:        '0' to '9'
    - Capital:       'A' to 'Z'
    - Small:         'a' to 'z'

    We can compare characters directly using these ranges
    without manually writing their ASCII values.
    هنقارن الحروف ببعضها باستخدام هذه النطاقات عشان نعرف اذا كان رقم ولا حرف كابتل ولا سمال
*/

// =================================================================

/*
    Approach:
    لما بنفهم المشكلة كويس بنكتب الخطوات اللي هنمشي عليها عشان نحلها
    1. Read the character X.
    اول حاجه هنطلب من المستخدم انه يدخل الحرف
    2. Check if X is between '0' and '9'.
       If true, print "IS DIGIT".
    وبعدين هتشيك اذا كان الحرف ده رقم ولا لا 
    اللي هو بين الصفر والتسعه لو صح هتطبع 
    IS DIGIT
    3. Otherwise, print "ALPHA".
    4. Check if X is between 'A' and 'Z'.
       If true, print "IS CAPITAL".
       Otherwise, print "IS SMALL".
       وبعدين هتشيك اذا كان الحرف ده كابتل ولا سمال
       لو صح هتطبع
         IS CAPITAL
         لو غلط هتطبع
            IS SMALL

    Complexity Analysis:
    Time Complexity: O(1)
    Space Complexity: O(1)

    Both time and space are constant because we perform
    a fixed number of comparisons and use only one variable.
*/

// =================================================================
// =================================================================

#include <iostream>
using namespace std;

int main()
{
    char X;
    cin >> X;   // Read the character X

    if (X >= '0' && X <= '9')   // Check if X is a digit
    {
        cout << "IS DIGIT\n";
    }
    else    // If X is not a digit, it must be an alphabetic character
    {
        cout << "ALPHA\n";

        if (X >= 'A' && X <= 'Z')   // Check if X is uppercase (Capital)
        {
            cout << "IS CAPITAL\n";
        }
        else    // If X is not uppercase, it must be lowercase (Small)
        {
            cout << "IS SMALL\n";
        }
    }

    return 0;
}

// =================================================================
// =================================================================

/*
╔══════════════════════════════════════════════════════════╗
║                    THINKING ASSIGNMENT                   ║
╚══════════════════════════════════════════════════════════╝

    Problem: N. Char

    Challenge:
    Given a letter X:
    - If X is lowercase, convert it to uppercase.
    - Otherwise, convert it to lowercase.
    المطلوب منك انك تحول الحرف اللي المستخدم دخله من كابتل لسمال او من سمال لكابتل

    💡 HINT:
    "The ASCII difference between a lowercase letter
    and its corresponding uppercase letter is 32."

     جرّب تحلها بنفسك وشاركنا حلك

    Problem Link:
    [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N]

*/