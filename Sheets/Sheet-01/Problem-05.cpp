/*
╔══════════════════════════════════════════════════════════╗
║               SHEET 01 — PROBLEM 05                      ║
║              DATA TYPES & CONDITIONS                     ║
╚══════════════════════════════════════════════════════════╝

    Problem  : X. Two Intervals
    Platform : Codeforces
    Topics   : Intervals, Math, Min & Max, Conditions

    Problem Link:
    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X
*/

// =================================================================

/*
        💡 A SMALL HINT             ضروري جدا تشوف الهينت وتحاول تاني بنفسك قبل ما تشوف الحل
    Before looking at the solution, try to think about these questions:

    1. What is the starting point of the common part
       between two intervals?
       فكر في بداية الجزء المشترك بين الفترتين
       هل هنحتاج أصغر بداية ولا أكبر بداية؟

    2. What is the ending point of the intersection?
       فكر في نهاية الجزء المشترك
       هل هنحتاج أصغر نهاية ولا أكبر نهاية؟

    3. What happens if the starting point is greater
       than the ending point?
       تخيل إن نقطة البداية بقت بعد نقطة النهاية
       هل لسه فيه جزء مشترك؟

    4. Can you use min() and max() to simplify
       your calculations?

    ضروري جدا تشوف الهينت وتحاول تاني بنفسك
    قبل ما تشوف الحل!
*/

// =================================================================

/*
    Problem Understanding:

    مهم جدا إننا نفهم المشكلة كويس قبل ما نبدأ نحلها

    Given the boundaries of two intervals, we need
    to find and print the boundaries of their intersection.
    هنا هو طالب مننا إننا ناخد فترتين زمنيتين أو رقمـيتين
    ونحدد الجزء المشترك بينهم

    Each interval has two boundaries:
    - Left Boundary  : Starting point.
    - Right Boundary : Ending point.
    يعني كل فترة ليها نقطة بداية ونقطة نهاية.

    Important Notes:
    - The first interval is [L1, R1].
    - The second interval is [L2, R2].
    - L1 <= R1 and L2 <= R2.
    - The boundaries are included in the intervals.
    يعني نقاط البداية والنهاية محسوبة ضمن الفترة نفسها.=

    Key Observation:

    لاحظ إن بداية الجزء المشترك لازم تكون أكبر بداية
    من بدايات الفترتين
    The intersection starts at the maximum
    of the two left boundaries.

    Start = max(L1, L2)
    وبالنسبة لنهاية الجزء المشترك، لازم تكون أصغر نهاية
    من نهايات الفترتين.
    The intersection ends at the minimum
    of the two right boundaries.

    End = min(R1, R2)

    End >= Start means an intersection exists.
    أما لو End < Start يبقى مفيش أي جزء مشترك
    Example 1:

    First Interval  = [1, 15]
    Second Interval = [5, 27]

    Start = max(1, 5) = 5
    End   = min(15, 27) = 15

    Since Start <= End, an intersection exists.
    بما ان البداية أصغر من النهاية اذا يوجد تقاطع
    Final Result:
    5 15

    --------------------------------------------

    Example 2:

    First Interval  = [2, 5]
    Second Interval = [6, 12]

    Start = max(2, 6) = 6
    End   = min(5, 12) = 5

    Since Start > End, no intersection exists.

    Final Result:
    -1

    --------------------------------------------

    Important Special Case:

    First Interval  = [1, 5]
    Second Interval = [5, 10]

    Start = max(1, 5) = 5
    End   = min(5, 10) = 5

    Since Start == End, an intersection exists
    at exactly one point.

    Final Result:
    5 5
*/

// =================================================================

/*
    Approach:
 لما بنفهم المشكلة كويس بنكتب الخطوات اللي هنمشي عليها عشان نحلها

    1. Read the four boundaries:
       L1, R1, L2, R2.
       أول حاجة هناخد بداية ونهاية كل فترة

    2. Calculate the intersection starting point.
       Start = max(L1, L2)
       هنا بنختار أكبر نقطة بداية بين الفترتين

    3. Calculate the intersection ending point.
       End = min(R1, R2)
       هنا بنختار أصغر نقطة نهاية بين الفترتين

    4. Check whether an intersection exists.
       If Start <= End:
           Print Start and End.
       Otherwise:
           Print -1.
       هنا بنتأكد إن نقطة البداية مش بعد نقطة النهاية
    5. Print the required result.


    Complexity Analysis:
    Time Complexity: O(1)
    Space Complexity: O(1)

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
#include <algorithm>  // For max and min functions
using namespace std;

int main()
{
    long long L1, R1, L2, R2;    // استخدمنا long long لتجنب Overflow
    cin >> L1 >> R1 >> L2 >> R2;

    // Find the starting point of the intersection
    long long Start = max(L1, L2);

    // Find the ending point of the intersection
    long long End = min(R1, R2);

    // Check if an intersection exists
    if (Start <= End)
        cout << Start << " " << End << "\n";
    else
        cout << -1 << "\n";

    return 0;
}

/* =================================================================
    Thank you for your attention!

    If you have any questions or need further assistance,
    feel free to ask.

    - Mohamed Salah
================================================================= */