#include <iostream> 

using namespace std;

int main() {
    
    // Хувьсагчийг зарлаад утгыг оноож өгнө
    int a=125;
    // Хаяган хувьсагч зарлаад, өмнөх автомат хувьсагчийн хаягийг оноож өгнө
    int *p = &a;
    
    // Хаяган хувьсагчийн утга буюу хаягийг хэвлэнэ
    cout<<p<<endl;
    // Хаяган хувьсагчийн заах хаягийн утганд хаягаар нь хандаж хэвлэнэ
    cout<<*p<<endl;

    // Хаягийн арифметик ашиглан зэрэгцээ байрлах дараагийн хаяг руу шилжиж хаяган хувьсагчийн хаягийг шинэчилнэ
    p++;
    // Шинэ хаягийг хэвлэнэ
    cout<<p<<endl;
    // Шинэ хаяг дээр хадгалагдах утгыг хаягаар нь хандаж хэвлэнэ
    cout<<*p<<endl;

}