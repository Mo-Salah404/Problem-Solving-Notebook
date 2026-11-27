/*
    Problem: Katryoshka
    
  Katryoshkas وبتحتاج نفكر في ترتيب استخدام الموارد عشان نطلع أكبر عدد ممكن من الـ Greedy دي مسألة حلوة في الـ 
 
    =================================================================

    💡 Hint:    ضروري جدا تشوف الهينت وتحاول تاني بنفسك قبل ما تشوف الحل

    3 combinations بص على الـ 
     الموجودة في المسألة
    وفكر إيه القطع المشتركة بينهم وإيه القطع اللي
   Combination ممكن نستخدمها في أكتر من 

   Mouths حاول تستغل الـ  
   الأول لأنها مش موجودة
    في كل التركيبات

    =================================================================

    🧠 Idea:
    خلينا نفكر فيها ببساطة

    عندنا 3 أنواع من القطع
    a -> Eyes
    b -> Mouths
    c -> Bodies

   Katryoshka وعندنا 3 طرق لتكوين :

    1. 2 Eyes + 1 Body
    2. 2 Eyes + 1 Mouth + 1 Body
    3. 1 Eye + 1 Mouth + 1 Body

   Body الملاحظة المهمة إن كل التركيبات محتاجة 
   Mouth لكن الـ 
    موجود في تركيبتين بس

   Eyes عشان كده هنبدأ باستخدام الـ 
   Mouths مع الـ 
   Bodies والـ 
    لتكوين أكبر عدد ممكن من النوع الثالث
    (1 Eye + 1 Mouth + 1 Body).

   Katryoshkas عدد الـ 
    اللي نقدر نكونها في البداية
    هيكون أقل قيمة من 
    a و b و c

    بعد كده هنخصم القطع اللي استخدمناها،
    ونشوف نقدر نكوّن كام واحدة تانية باستخدام
    كل 2 Eyes مع 1 Body.

    يعني الحل ببساطة
    1. min(a, b, c) ناخد 
    2. a و c نخصم العدد ده من 
    3. min(a / 2, c) نضيف  للإجابة
   a و b و c يعني رقم واحد بناخد أقل قيمة من 
    عشان نكوّن أكبر عدد ممكن من النوع الثالث
       a و c بعد كده نخصم العدد ده من 
    a / 2 و c   وبعد كده نضيف أقل قيمة من
        عشان نكوّن أكبر عدد ممكن من النوع الأول
    =================================================================

    ⏱️ Complexity:
    Time: O(1)
    Space: O(1)

    Both time and space are constant because we perform
    a fixed number of arithmetic operations and comparisons
    and use only a fixed number of variables.

    هنا الوقت والمساحة ثابتين لأننا بنعمل عدد ثابت
    من العمليات الحسابية والمقارنات وبنستخدم عدد ثابت
    من المتغيرات.

*/

// =================================================================
// =================================================================

#include <iostream>
#include <algorithm>    // For min function
using namespace std;

int main()
{
    long long a, b, c;  // Use long long to handle larger numbers for don't overflow
    cin >> a >> b >> c;

    long long ans = min({a, b, c}); // Calculate the maximum number of Katryoshkas of type 3 (1 Eye + 1 Mouth + 1 Body)

    a -= ans;   // Subtract the used Eyes
    c -= ans;   // Subtract the used Bodies

    ans += min(a / 2, c);   // Calculate the maximum number of Katryoshkas of type 1 (2 Eyes + 1 Body) and add to the answer

    cout << ans;

    return 0;
}

// =================================================================
// =================================================================

/*
    Link:
    https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G

    Contest #1 on Data type - Conditions.
*/
