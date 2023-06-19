

#include <iostream>
#include <clocale>
#include <cmath>
// номер 1
//
//int fig(int x, int y) {
//    for (int i = 1; i <= x; i++) {
//        for (int j = 1; j <= y; j++)
//        {
//            std::cout << "*";
//        }
//        std::cout << "\n";
//    }
//    return 0;
//}
//
//
//int main()
//{
//    setlocale(LC_CTYPE, "Rus");
//    int n, k;
//
//    std::cout << "Введите ширину прямоугольника:" << std::endl;
//    std::cin >> n;
//    std::cout << "Введите длинну прямоугольника:" << std::endl;
//    std::cin >> k;
//
//    fig(n, k);
//
//    return 0;
//}
// номер 2
//int faktorial(int x) {
//	int n = 1;
//	for ( int i = 1; i <= x; i++)
//	{
//		n *= i;
//	}
//	return n;
//}
//
//int main() {
//	setlocale(LC_CTYPE, "Rus");
//
//	int number;
//	std::cout << "Введите число: ";
//	std::cin >> number;
//	if (number > 0) {
//		std::cout << faktorial(number) << std::endl;
//	}
//	else {
//		std::cout << "Число не может быть отрицательным";
//	}
//
//	return 0;
//}
// 
// 
// задание 3
//int Simplenumber(int a) {
//	for (int i = 2; i <= a; i++)
//	{
//		if (a % i == 0) {
//			std::cout << "Это  не простое число";
//		}
//		else {
//			std::cout << "число простое";
//		 
//		}
//	}
//	return 0;
//}
//
//
//int main() {
//
//	setlocale(LC_CTYPE, "Rus");
//
//	int number;
//	std::cout << "Введите число:" << std::endl;
//	std::cin >> number;
//	std::cout << Simplenumber(number);
//
//	return 0;
//}

// задание 4
//int cubick(int number) {
//	int result;
//	result = pow(number, 3);
//
//	return result;
//}
//
//int main() {
//	setlocale(LC_CTYPE, "Rus");
//
//	int b;
//	std::cout << "Введите число: ";
//	std::cin >> b;
//	std::cout << "Куб данного числа равен: " << cubick(b);
//	return 0;
//
//}

// задание 5

//int a_and_b(int number1, int number2) {
//	if (number1 > number2) {
//		std::cout << "первое больше" << std::endl;
//		return number1;
//	}
//	else {
//		std::cout << "Второе больше";
//		return number2;
//	}
//}
//
//int main() {
//	setlocale(LC_CTYPE, "Rus");
//	int a, b;
//	std::cout << "Введите первое число: ";
//	std::cin >> a;
//	std::cout << "Введите второе число: ";
//	std::cin >> b;
//
//	std::cout << a_and_b(a, b) << std::endl;
//}

// задание 6
int true_or_false(int a) {
	if (a > 0) {
		std::cout << "True" << std::endl;
		return true;
	}
	else {
		std::cout << "False" << std::endl;
		return false;
	}
}

int main() {

	setlocale(LC_CTYPE, "Rus");

	int number;
	std::cout << "Введите число: ";
	std::cin >> number;

	std::cout << true_or_false(number);

}