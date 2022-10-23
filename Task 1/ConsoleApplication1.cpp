#include <iostream>
#define MODE 1
int add(int a, int b) { return a + b; }
int main()
{
setlocale(LC_ALL, "Russian");
#if !defined MODE
#error Requied MODE defined
#elif MODE==0
std::cout << "Работаю в режиме тренировки";
#elif MODE==1
std::cout << "Работаю в боевом режиме" << std::endl;
std::cout << "Введите первое число" << std::endl;
int a, b;
std::cin >> a;
std::cout << "Введите первое число" << std::endl;
std::cin >> b;
std::cout << "Результат сложения:  " << add(a,b) << std::endl;
#else
std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif
}

