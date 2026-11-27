/*
    Problem: Data Type Guessing
    اللي مطلوب منك في المسألة دي إنك تحدد نوع البيانات المناسب للناتج من ضرب 3 أرقام

    =================================================================

    💡 Hint:    ضروري جدا تشوف الهينت وتحاول تاني بنفسك قبل ما تشوف الحل

    ركز في شكل الناتج بعد ضرب الأرقام الثلاثة
  ؟ Floating-point هل الناتج عدد صحيح ولا فيه 
   int ولو عدد صحيح هل يقدر يتخزن في  
  ؟ long long ولا محتاج 

    =================================================================

    🧠 Idea:
    خلينا نفكر فيها ببساطة

   Data Type المطلوب إننا نحدد الـ  
   المناسب للناتج من ضرب الأرقام الثلاثة

   : عندنا 3 احتمالات 

    1. double
      Floating-point لو أي رقم من الأرقام فيه 
      double فالناتج هيكون 

    2. int
      int لو الناتج عدد صحيح وداخل حدود الـ 

    3. long long
      int لو الناتج عدد صحيح لكنه أكبر من حدود الـ 
      long long ولسه ممكن يتخزن في 

   : عشان كده هنستخدم الترتيب ده 
    - Floating-point الأول نتحقق هل فيه 
    - int بعد كده نحسب الناتج ونقارنه بحدود 
    - int لو خرج عن حدود 
        long long يبقى 

   Floating-point مصطلح 
   (Fractional Part) معناه الأعداد اللي بتحتوي على جزء عشري
  يعني أرقام فيها علامة عشرية

    =================================================================

    ⏱️ Complexity:
    Time: O(1)
    Space: O(1)

    Both time and space are constant because we perform
    a fixed number of checks and arithmetic operations
    and use a fixed number of variables.

    هنا الوقت والمساحة ثابتين لأننا بنعمل عدد ثابت
    من الفحوصات والعمليات الحسابية وبنستخدم عدد ثابت
    من المتغيرات

*/

// =================================================================
// =================================================================

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long a, b, c;  // Use long long to handle larger numbers for don't overflow
    cin >> a >> b >> c;
 
    long long result = a * b;   // Calculate the product of a and b
 
    if (result % c != 0)    // Check if the product is not divisible by c
        cout << "double";
    else if (result / c >= INT_MIN && result / c <= INT_MAX)    // Check if the result is within the range of int
    // INT_MIN and INT_MAX are constants defined in <climits> that represent the minimum and maximum values of the int data type
        cout << "int";
    else
        cout << "long long";
 
    return 0;
}

// =================================================================
// =================================================================

/*
    Link:
    https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H

    Contest #1 on Data type - Conditions.
*/
