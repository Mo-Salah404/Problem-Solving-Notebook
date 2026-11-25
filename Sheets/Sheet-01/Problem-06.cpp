/*
╔══════════════════════════════════════════════════════════╗
║               SHEET 01 — PROBLEM 06                      ║
║              DATA TYPES & CONDITIONS                     ║
╚══════════════════════════════════════════════════════════╝

    Problem  : Y. The last 2 digits
    Platform : Codeforces
    Topics   : Modulo Operator, Arithmetic Operations

    Problem Link:
    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
*/

// =================================================================

/*
    💡 A SMALL HINT             ضروري جدا تشوف الهينت وتحاول تاني بنفسك قبل ما تشوف الحل 

    Think about how the Modulo Operator (%) works.

    - What does number % 10 give you?
      يعني باقي القسمة على 10 بيجيب آخر رقم

    - What does number % 100 give you?
      طيب لو قسمنا على 100، إيه اللي هيحصل؟

    - Do you really need the complete multiplication
      result to get its last two digits?
      هل محتاج تحسب الناتج الكامل للضرب عشان تجيب آخر
      رقمين؟ ولا تقدر تختصر العمليات الحسابية؟

    Important:
    Try solving the problem yourself before
    looking at the solution!
*/

// =================================================================

/*
    Problem Understanding:
    مهم جدا إننا نفهم المشكلة كويس قبل ما نبدأ نحلها

    Given four numbers A, B, C, and D, we need to
    calculate their multiplication and print only
    the last two digits of the result.
    هنا هو طالب مننا إننا ناخد أربع أرقام ونضربهم
    في بعض، وبعد كده نطبع آخر رقمين من الناتج فقط

    Key Observation:

    لاحظ إن آخر رقمين في أي عدد ممكن نجيبهم
    باستخدام باقي القسمة على 100
    We can use the Modulo Operator (%) to extract
    the last two digits of a number.

    Last Two Digits = Number % 100

    For example:
    280 % 100 = 80 >> 280-100 >> 180-100 >> 80
    2187 % 100 = 87 
    456 % 100 = 56 >> 456-100 >> 356-100 >> 256-100 >> 156-100 >> 56

    لكن فيه مشكلة مهمة لازم ناخد بالنا منها
    Multiplying four large numbers directly may
    cause Integer Overflow.
    يعني لو ضربنا أربع أرقام كبيرة في بعض، ممكن
    الناتج يكون أكبر من المساحة اللي المتغير يقدر
    يخزنها.

    The smart solution is to apply % 100 after
    each multiplication.
    This works because:
    (A * B * C * D) % 100

    is equivalent to:
    (((A % 100) * (B % 100)) % 100 * (C % 100) % 100 * (D % 100)) % 100

    وبكده بنحافظ على آخر رقمين بعد كل عملية ضرب
    ونتجنب تكوين ناتج ضخم

    Example 1:
    A = 5, B = 7, C = 2, D = 4

    5 * 7 = 35
    35 * 2 = 70
    70 * 4 = 280

    280 % 100 = 80

    Final Result:
    80

    --------------------------------------------

    Example 2:

    A = 3, B = 9, C = 9, D = 9

    3 * 9 = 27
    27 * 9 = 243
    243 * 9 = 2187

    2187 % 100 = 87

    Final Result:
    87
*/

// =================================================================

/*
    Approach:
    لما بنفهم المشكلة كويس بنكتب الخطوات اللي هنمشي عليها عشان نحلها

    1. Read the four numbers A, B, C, and D.
       أول حاجة هناخد الأربع أرقام من المستخدم

    2. Calculate the multiplication while keeping
       only the last two digits.
       بنضرب الأرقام في بعض، وبعد كل عملية ضرب
       بناخد باقي القسمة على 100

    3. Use the Modulo Operator (% 100).
       ده بيضمن إننا محتفظين بآخر رقمين فقط

    4. Print the final result.
       في النهاية بنطبع آخر رقمين من الناتج


    Complexity Analysis:
    Time Complexity: O(1)
    Space Complexity: O(1)

    Both time and space are constant because we perform
    a fixed number of arithmetic operations and use
    only a fixed number of variables.

    هنا الوقت والمساحة ثابتين لأننا بنعمل عدد ثابت
    من العمليات الحسابية وبنستخدم عدد ثابت من المتغيرات
*/

// =================================================================
// =================================================================


#include <iostream>
#include <iomanip>  // For setw and setfill
/*
    what is setw and setfill?
    - setw(n): Sets the width of the next input/output field to n characters.
    فكرتها ببساطة إننا بنحدد عدد الخانات اللي هيشغلها الرقم اللي هيتطبع
      It means that the next value printed will occupy at least n spaces.
      If the value has fewer than n characters, it will be padded with spaces (or other fill characters).
    - setfill(c): Sets the fill character to c. This character is used to fill the empty spaces 
        when the width is greater than the number of characters in the value being printed.
        فكرتها اننا بنحدد إيه الحرف اللي هيستخدمه عشان يملأ الفراغات لو الرقم اللي هيتطبع أقل من عدد الخانات اللي حددناها
    For example:
    std::cout << std::setw(5) << std::setfill('0') << 42;
    Output:
    00042
    هنا لو حددنا 5 خانات، والرقم اللي هيتطبع هو 42، يبقى هيحط 3 أصفار قبل الرقم عشان يوصل لعدد الخانات اللي حددناها
*/
using namespace std;

int main()
{
    long long A, B, C, D;   // استخدمنا long long لتجنب Overflow
    cin >> A >> B >> C >> D;

    long long result = A % 100; // Start with the last two digits of A

    result = (result * (B % 100)) % 100;    // Multiply by B and keep last two digits
    result = (result * (C % 100)) % 100;    // Multiply by C and keep last two digits
    result = (result * (D % 100)) % 100;    // Multiply by D and keep last two digits

    cout << setw(2) << setfill('0') << result << "\n";  

    return 0;
}

// =================================================================
// =================================================================

/*
    Important Output Formatting:

    The problem requires exactly two digits.
    If the result is less than 10, we must print
    a leading zero.
الفكرة هنا إننا لازم نطبع رقمين بالظبط، ولو الناتج أقل من 10
    لازم نضيف صفر في الخانة الأولى
    For example:
    5  -> 05
    0  -> 00
    We can use:
    setw(2) and setfill('0') from <iomanip>.
    
    يعني لازم نطبع خانتين حتى لو الناتج رقم واحد
    ونستخدم صفر في الخانة الأولى
*/


/* =================================================================
    Thank you for your attention!

    If you have any questions or need further assistance,
    feel free to ask.

    - Mohamed Salah
================================================================= */
