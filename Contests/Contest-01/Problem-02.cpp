/*
    Problem: Adding Bits
    

    =================================================================

    💡 Hint:
   Bitwise Addition افتكر الفرق بين عملية الجمع العادية والـ 
   Carry إيه اللي بيحصل لو الـ 
    مش موجود نهائي؟

    What is mean by "Carry" in binary addition?
   Bits  هو الرقم اللي بيتنقل من خانة للي بعدها لما يكون مجموعCarry  الـ 
    أكبر من 1

    What is mean by "Bitwise Addition"?
    هي عملية جمع كل  Bitwise Addition الـ
   المقابل ليه Bit مع Bit 
    
   Carry من غير ما ننقل أي 
    للخانة التالية
    

    =================================================================

    🧠 Idea:
    خلينا نفكر فيها ببساطة

    في الجمع العادي
    Bit لما بنجمع كل
      مع اللي قصاده
   Carry ممكن يحصل
     ينتقل للخانة اللي بعدها

   Peter Parker  لكن في المسألة دي 
    عنده مشكلة في تصميم الدائرة
    Carry وهي إن الـ 
     دايمًا بيساوي صفر

    يعني بنجمع كل 
    Bit مع الـ Bit 
    المقابل ليه
   Carry من غير ما ننقل أي 
    للخانة التالية

   XOR (^) هنا هنلاحظ إن العملية دي هي بالضبط عملية 

  بترجع XOR لأن  
    مختلفين Bits لو الـ 
    هترجع 1
  متساويين Bits لو الـ
    هترجع 0

  بايدنا Binary Addition وبالتالي بدل ما نعمل
   XOR operator نقدر نستخدم الـ  

    a ^ b

    =================================================================

    ⏱️ Complexity:
    Time: O(1)
    Space: O(1)

    Both time and space are constant because we perform
    a single bitwise operation and use a fixed number
    of variables.

   Bitwise هنا الوقت والمساحة ثابتين لأننا بننفذ عملية 
    واحدة وبنستخدم عدد ثابت من المتغيرات

*/

// =================================================================
// =================================================================

#include <iostream>
using namespace std;

int main()
{
    unsigned int a, b;  // Use unsigned int to handle binary numbers correctly
    cin >> a >> b;

    cout << (a ^ b);

    return 0;
}

// =================================================================
// =================================================================

/*
    Link:
    https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/F

    Contest #1 on Data type - Conditions.
*/
