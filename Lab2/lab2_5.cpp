#include <iostream>
using namespace std;
int main(){
    cout << "Display integer constants\n";
    cout << "Octal constant 023\t is " << 023 << " decimal\n";
    //023 → เป็น เลขฐาน 8(Octal) เพราะมี 0 นำหน้า เป็นฐาน 10 023₈ = 2×8 + 3 = 19₁₀
    cout << "Decimal constant 23\t is " << 23 << " decimal\n";
    //23 → เป็น เลขฐาน 10 (Decimal)23₁₀ = 23₁₀
    cout << "Hexa constant 0x23\t is " << 0x23 << " decimal\n";
    //0x23 → เป็น เลขฐาน 16 (Hexadecimal) เพราะมี 0x นำหน้า 23₁₆ = 2×16 + 3 = 35₁₀

return 0;
}
