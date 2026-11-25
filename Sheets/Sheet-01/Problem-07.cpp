/*
╔══════════════════════════════════════════════════════════╗
║               SHEET 01 — PROBLEM 07                      ║
║              DATA TYPES & CONDITIONS                     ║
╚══════════════════════════════════════════════════════════╝

    Problem  : Z. Hard Compare
    Platform : Codeforces
    Topics   : Logarithms, Mathematical Comparison,
               Overflow, Conditional Statements

    Problem Link:
    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z
*/

// =================================================================

/*
    💡 A SMALL HINT             ضروري جدا تشوف الهينت وتحاول تاني بنفسك قبل ما تشوف الحل 

    "Sometimes, changing the mathematical form of a problem makes a difficult comparison much easier."
    في بعض الأحيان، تغيير الشكل الرياضي للمشكلة يجعل المقارنة الصعبة أسهل بكثير
    Think about the properties of logarithms.

    Remember:
    log(A^B) = B * log(A)
    هل تقدر تستخدم الخاصية دي عشان تقارن القوتين
    من غير ما تحسب قيمتهم الفعلية؟

    Try to solve the problem yourself before
    looking at the solution!
*/

// =================================================================

/*
    Problem Understanding:
    مهم جدا إننا نفهم المشكلة كويس قبل ما نبدأ نحلها

    Given four numbers A, B, C, and D, we need to
    determine whether:
                    A^B > C^D
    هنا هو طالب مننا نقارن بين قوتين رياضيتين

    - If A^B is greater than C^D, print "YES".
    - Otherwise, print "NO".

    Important Notes:
    - We must compare the two powers.
    - Equality means the answer is "NO".
    - Direct calculation may cause Integer Overflow.
قصده هنا إننا لو حسبنا القوتين بشكل مباشر ممكن يكون الناتج أكبر من المساحة اللي المتغير يقدر يخزنها

    Key Observation:

    لاحظ إن حساب القوى بشكل مباشر ممكن يعمل
    Integer Overflow بسبب ضخامة الناتج

    Instead of calculating the actual powers,
    we can use the mathematical properties of logarithms.
بدل ما نحسب القوتين بشكل مباشر، نقدر نستخدم خاصية اللوغاريتمات عشان نقارن بينهم 
    We know that:

        log(A^B) = B * log(A)

        log(C^D) = D * log(C)

    وبما إن دالة اللوغاريتم متزايدة للأعداد الموجبة
    نقدر نقارن القيمتين دول على طول

    Instead of comparing:

        A^B > C^D

    We compare:

        B * log(A) > D * log(C)

    وبكده نقدر نقارن أرقام ضخمة جدا من غير
    ما نحتاج نحسب ناتج القوة نفسه
*/

// =================================================================

/*
    Approach:
    لما بنفهم المشكلة كويس بنكتب الخطوات اللي هنمشي عليها عشان نحلها

    1. Read the four numbers A, B, C, and D.
       أول حاجة هناخد الأربع أرقام من المستخدم

    2. Calculate the logarithm of the first power.
       Left = B * log(A)
       هنا بنستخدم خاصية اللوغاريتمات لتحويل
       القوة إلى عملية ضرب

    3. Calculate the logarithm of the second power.
       Right = D * log(C)
       بنكرر نفس الفكرة مع القوة التانية

    4. Compare Left and Right.
       If Left > Right:
           Print "YES".
       Otherwise:
           Print "NO".

    5. Print the required answer.

    Important:
    We use long double for better floating-point
    precision during the comparison.
    مهم جدا نستخدم 
    long double 
    عشان نقلل من أخطاء الدقة اللي ممكن تحصل أثناء المقارنة

    Complexity Analysis:
    Time Complexity: O(1)
    Space Complexity: O(1)

    Both time and space are constant because we perform
    a fixed number of mathematical operations and use
    a fixed number of variables.

    هنا الوقت والمساحة ثابتين لأننا بنعمل عدد ثابت
    من العمليات الحسابية وبنستخدم عدد ثابت من المتغيرات

    Additional Note:
    Floating-point calculations may have precision errors.
    This is an important consideration when comparing
    logarithmic values that are mathematically equal.
    يعني ممكن يكون فيه أخطاء دقة أثناء الحسابات العشرية
    بسبب تمثيل الأعداد العشرية في الحاسوب
*/

// =================================================================
// =================================================================

#include <iostream>
#include <cmath>    // For logarithm calculations
using namespace std;

int main()
{
    long double A, B, C, D; // استخدمنا long double لتقليل أخطاء الدقة أثناء المقارنة
    cin >> A >> B >> C >> D;

    long double left = B * logl(A);
    long double right = D * logl(C);

    if (left > right)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}

/* =================================================================
    Thank you for your attention!

    If you have any questions or need further assistance,
    feel free to ask.

    - Mohamed Salah
================================================================= */