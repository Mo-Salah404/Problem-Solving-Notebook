/*
╔══════════════════════════════════════════════════════════╗
║                  SHEET 01 — PART 02                      ║
║              DATA TYPES & CONDITIONS                     ║
╚══════════════════════════════════════════════════════════╝

    Problem  : P. First digit!
    Platform : Codeforces
    Topics   : Integer Division, Digit Extraction
    
    Problem Link:
    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
*/

// =================================================================

/*
    💡 A SMALL HINT             ضروري جدا تشوف الهينت وتحاول تاني بنفسك قبل ما تشوف الحل

    "Sometimes, one simple mathematical operation
    is enough to extract exactly what you need."
    بص معايا السؤال ده بيعلمك ازااي تقدر تجيب اول رقم من الرقم اللي المستخدم دخله
    For example, if the user inputs 4569, we can use
    integer division by 1000 to extract the first digit.
    يعني لو المستخدم دخل الرقم 4569 هنقسمه علي 1000 ونطلع اول رقم اللي هو 4
    4569 / 1000 = 4
    كده نقدر نعرف اذا كان الرقم ده زوجي ولا فردي باستخدام باقي القسمة علي 2

    طب لو عايز تجيب آخر رقم هتعمل اى؟؟
    بنستخدم باقي القسمة (%) علي 10 عشان نجيب آخر رقم
    يعني لو المستخدم دخل الرقم 4569 هنقسمه علي 10 ونطلع آخر رقم اللي هو 9
    4569 % 10 = 9

    First digit ======> if ( number == 44 ) divide by 10 until number < 10  ---> 44/10 >> 4
                        if ( number == 456 ) divide by 100 until number < 10  ---> 456/100 >> 4  
                        if ( number == 4569 ) divide by 1000 until number < 10  ---> 4569/1000 >> 4  (and so on)

    Last digit  ======> if ( number == 44 ) number % 10 >> 4
                        if ( number == 456 ) number % 10 >> 6  
                        if ( number == 4569 ) number % 10 >> 9  (and so on)
*/

// =================================================================

/*
    Problem Understanding:

    مهم جدا اننا نفهم المشكلة كويس قبل ما نبدأ نحلها
    Given a four-digit number X, determine whether its
    first digit (from left to right) is even or odd.
    هنا هو طالب مننا اننا نحدد اذا كان اول رقم من الرقم اللي المستخدم دخله زوجي ولا فردي
    Key Observation:

    Since X is a four-digit number (1000 < X <= 9999),
    integer division by 1000 extracts its first digit.
    الفكرة هنا اننا نستخدم القسمة الصحيحة علي 1000 عشان نجيب اول رقم من الرقم اللي المستخدم دخله

    Example:
    X = 4569
    4569 / 1000 = 4

    We can then use the modulo operator (% 2) to check
    whether the extracted digit is even or odd.
    الفكرة هنا اننا نستخدم باقي القسمة علي 2 عشان نعرف اذا كان الرقم زوجي ولا فردي
    Example:    
    4 % 2 = 0 (even)
    5 % 2 = 1 (odd)
*/

// =================================================================

/*
    Approach:
    لما بنفهم المشكلة كويس بنكتب الخطوات اللي هنمشي عليها عشان نحلها
    1. Read the number X.
    اول حاجه هنطلب من المستخدم انه يدخل الرقم
    2. Extract the first digit using X / 1000.
    تاني حاجه هنعمل قسمة صحيحة علي 1000 عشان نجيب اول رقم من الرقم اللي المستخدم دخله
    3. Check whether the extracted digit is divisible by 2.
       - If the remainder is 0, print "EVEN".
       - Otherwise, print "ODD".
    وبعدين هتشيك اذا كان الرقم ده زوجي ولا فردي باستخدام باقي القسمة علي 2

    Complexity Analysis:

    Time Complexity: O(1)
    Space Complexity: O(1)
    هنا الوقت والمساحة ثابتين لاننا بنعمل عدد ثابت من العمليات الحسابية وبنستخدم متغير واحد بس
    The solution performs a fixed number of arithmetic
    operations and uses a constant amount of memory.
*/

// =================================================================
// =================================================================

#include <iostream>
using namespace std;

int main()
{
    int X;
    cin >> X;   // Read the four-digit number X

    int firstDigit = X / 1000;  // Extract the first digit using integer division

    if (firstDigit % 2 == 0)    // Check if the first digit is even
        cout << "EVEN\n";
    else    // Otherwise, the first digit is odd
        cout << "ODD\n";

    return 0;
}

/* =================================================================
    Thank you for your attention! If you have any questions or need further assistance, feel free to ask.
    - Mohamed Salah
   =================================================================*/