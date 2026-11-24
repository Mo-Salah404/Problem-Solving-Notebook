
/*
╔══════════════════════════════════════════════════════════╗
║               SHEET 01 — PROBLEM 03                      ║
║               BASIC ARITHMETIC                           ║
╚══════════════════════════════════════════════════════════╝

    Problem     : R. Age in Days
    Platform    : Codeforces
    Topics      : Arithmetic, Integer Division, Modulo
    Difficulty  : Beginner

    Link:
    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
*/

// =================================================================

/*
    💡 A SMALL HINT       ضروري جدا تشوف الهينت وتحاول تاني بنفسك قبل ما تشوف الحل

    "Division gives you the quotient, while modulo gives you the remainder."
    خلي بالك إن عملية القسمة الصحيحة 
    بتدينا الناتج الصحيح من غير الكسور
    Modulo (%) أما عملية الـ 
    فبتدينا باقي القسمة

    For example:
    400 / 365 = 1
    400 % 365 = 35

    This means that 400 days contain:
    - 1 complete year.
    - 35 remaining days.

    We can use the same idea to extract months and days.
    الفكرة هنا إننا نستخدم نفس الفكرة دي عشان نطلع عدد الشهور والأيام المتبقية
*/

// =================================================================

/*
    Problem Understanding:

    مهم جدا إننا نفهم المشكلة كويس قبل ما نبدأ نحلها.
    Given a number N representing a person's age in days,
    we need to convert this number into years, months, and days.
    هنا هو طالب مننا إننا ناخد عدد الأيام اللي بيمثل عمر الشخص
    ونحولها لسنين وشهور وأيام

    Important Notes:
    - One year = 365 days.
    - One month = 30 days.

    Key Observation:
    لاحظ إننا نقدر نستخدم القسمة الصحيحة (/) عشان نطلع عدد السنين الكاملة والشهور الكاملة
    We can use Integer Division (/) to calculate the number
    of complete years and months.

    We can use Modulo (%) to calculate the remaining days.
    يعني هنقسم عدد الأيام على 365 عشان نعرف عدد السنين الكاملة
    وبعدها ناخد باقي القسمة عشان نعرف الأيام المتبقية
    وبنكرر نفس الفكرة مع الشهور باستخدام 30 يوم

    Example:
    N = 400
    Years = 400 / 365 = 1
    Remaining Days = 400 % 365 = 35
    Months = 35 / 30 = 1
    Remaining Days = 35 % 30 = 5

    Final Result:
    1 years
    1 months
    5 days
*/

// =================================================================

/*
    Approach:

    لما بنفهم المشكلة كويس بنكتب الخطوات اللي هنمشي عليها
    عشان نحلها

    1. Read the number N.
       أول حاجة هناخد عدد الأيام من المستخدم

    2. Calculate the number of complete years.
       Years = N / 365
       هنقسم عدد الأيام على 365 عشان نعرف عدد السنين الكاملة

    3. Calculate the remaining days.
       N = N % 365
       هنا بناخد باقي القسمة بعد استخراج السنين

    4. Calculate the number of complete months.
       Months = N / 30
       هنقسم الأيام المتبقية على 30 عشان نعرف عدد الشهور

    5. Calculate the remaining days.
       Days = N % 30
       هنا بنستخرج الأيام المتبقية بعد حساب الشهور

    6. Print the years, months, and days.


    Complexity Analysis:
    Time Complexity: O(1)
    Space Complexity: O(1)

    Both time and space are constant because we perform
    a fixed number of arithmetic operations and use only
    a fixed number of variables.
كل حاجة هنا ثابتة لاننا بنعمل عدد ثابت من العمليات الحسابية وبنستخدم عدد ثابت من المتغيرات
*/

// =================================================================
// =================================================================

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;   // Read the person's age in days

    int years = N / 365;    // Calculate complete years
    N %= 365;               // Get remaining days

    int months = N / 30;    // Calculate complete months
    N %= 30;                // Get remaining days

    int days = N;           // Store the remaining days

    cout << years << " years\n";
    cout << months << " months\n";
    cout << days << " days\n";

    return 0;
}

// =================================================================
// =================================================================


