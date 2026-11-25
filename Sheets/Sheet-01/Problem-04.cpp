/*
╔══════════════════════════════════════════════════════════╗
║               SHEET 01 — PROBLEM 04                      ║
║               FLOAT OR INTEGER                           ║
╚══════════════════════════════════════════════════════════╝

    Problem : U. Float or int
    Platform: Codeforces
    Topic:
    - Data Types
    - Type Casting
    - Conditional Statements

    Link:
    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
*/

// =================================================================

/*
    💡 A SMALL HINT       ضروري جدا تشوف الهينت وتحاول تاني بنفسك قبل ما تشوف الحل
    
    Think about how you can separate the integer part from the decimal part of a number.
    - How can you extract the integer part using Type Casting?
    - How can you get the decimal part using subtraction?
    - What condition can you use to determine whether the decimal part is zero?
    Try solving it yourself before looking at the solution! 💪
*/

// =================================================================


/*
    Problem Understanding:

    مهم جدا إننا نفهم المشكلة كويس قبل ما نبدأ نحلها.

    Given a number X, we need to determine whether
    it is an integer number or a floating-point number.

    هنا هو طالب مننا إننا ناخد رقم ونحدد هل هو عدد صحيح
    ولا عدد عشري.

    If the number is an integer:
    Print "int" followed by the integer part.

    If the number is a float:
    Print "float" followed by the integer part
    and the decimal part.

    Important Notes:
    - We should use double to read the input number.
    - Type Casting can help us extract the integer part.
    - Subtraction can help us calculate the decimal part.

    Key Observation:

    لاحظ إننا نقدر نفصل الرقم لجزئين:
    Integer Part and Decimal Part.

    We can use Type Casting (int) to extract
    the integer part of the number.

    وبعدها نقدر نطرح الجزء الصحيح من الرقم الأصلي
    عشان نعرف الجزء العشري.

    Decimal Part = X - Integer Part

    لو الجزء العشري بيساوي صفر، يبقى الرقم Integer.
    أما لو مش بيساوي صفر، يبقى الرقم Float.

    Example 1:
    X = 234.000

    Integer Part = 234
    Decimal Part = 234.000 - 234 = 0

    Since the decimal part equals zero,
    the number is an Integer.

    Final Result:
    int 234

    --------------------------------------------

    Example 2:
    X = 534.958

    Integer Part = 534
    Decimal Part = 534.958 - 534 = 0.958

    Since the decimal part is not zero,
    the number is a Float.

    Final Result:
    float 534 0.958
*/

// =================================================================

/*
    Approach:

    لما بنفهم المشكلة كويس بنكتب الخطوات اللي هنمشي عليها
    عشان نحلها.

    1. Read the number X using double.
       أول حاجة هناخد الرقم من المستخدم باستخدام double
       عشان نقدر نتعامل مع الأرقام العشرية.

    2. Extract the integer part.
       Integer Part = (int)X

       هنا بنستخدم Type Casting عشان نحصل على الجزء الصحيح.

    3. Calculate the decimal part.
       Decimal Part = X - Integer Part

       هنا بنطرح الجزء الصحيح من الرقم الأصلي
       عشان نعرف الجزء العشري.

    4. Check whether the decimal part equals zero.
       بنستخدم if-else عشان نحدد نوع الرقم.

       - If Decimal Part == 0:
         Print "int" followed by the integer part.

       - Otherwise:
         Print "float" followed by the integer part
         and decimal part.

    5. Print the required output.


    Complexity Analysis:

    Time Complexity: O(1)
    Space Complexity: O(1)

    Both time and space are constant because we perform
    a fixed number of arithmetic operations and use only
    a fixed number of variables.

    كل حاجة هنا ثابتة لأننا بنعمل عدد ثابت من العمليات
    الحسابية وبنستخدم عدد ثابت من المتغيرات.
*/

// =================================================================
// =================================================================

#include <iostream>
using namespace std;

int main()
{
    double x;
    cin >> x;   // Read the double value

    int integerPart = (int)x;   // Extract the integer part
    double decimalPart = x - integerPart;   // Calculate the decimal part

    if (decimalPart == 0)   // Check if the decimal part is zero
        cout << "int " << integerPart;
    else    // If the decimal part is not zero
        cout << "float " << integerPart << " " << decimalPart;

    return 0;
}
// =================================================================
// =================================================================