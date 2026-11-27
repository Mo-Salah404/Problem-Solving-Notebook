/*
    Problem: Interval Sweep

=================================================================

    💡 Hint:
    بص على الأرقام المتتالية وفكر إيه العلاقة بين
    Even عدد الأرقام الـ 
    Odd والـ 
    Interval في أي 

=================================================================

    🧠 Idea:
    خلينا نفكر فيها ببساطة
    الأرقام الزوجية والفردية في أي مجموعة أرقام متتالية
    بييجوا بالتبادل 
    (Odd, Even, Odd, Even...).

    عشان كده الفرق بين عدد الأرقام الفردية والزوجية
    مستحيل يزيد عن 1

    يعني عندنا شرطين
    الشرط الأول: لازم الفرق بين عدد الأرقام الفردية والزوجية لا يزيد عن 1
    الشرط الثاني: لازم يكون عندنا على الأقل رقم واحد،
      Interval لازم يكون Non-empty لأن الـ 

    عشان كده الحل النهائي بيكون
    abs(a - b) <= 1 && a + b > 0

=================================================================

    ⏱️ Complexity:
    Time: O(1)
    Space: O(1)
    Both time and space are constant because we perform
    a fixed number of comparisons and arithmetic operations
    and use only a fixed number of variables.

    هنا الوقت والمساحة ثابتين لأننا بنعمل عدد ثابت
    من المقارنات والعمليات الحسابية وبنستخدم عدد ثابت
    من المتغيرات.
*/

// =================================================================
// =================================================================

#include <iostream>
#include <cmath>    // For abs function
using namespace std;
 
int main()
{
    int a, b;
    cin >> a >> b;
 
    if (a + b > 0 && abs(a - b) <= 1)   // Check the conditions
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}

// =================================================================
// =================================================================

/*
Link to the problem: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E

Contest #1 on Data type - Conditions.
*/
