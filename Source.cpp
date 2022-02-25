
#include <iostream> 
using namespace std;
float arifm(float n, float m);
int max(int n);
float max(float m);
double max(double m1);
template <typename T> T maxEl(T array[], int length);
template <typename T> void showArr(T array[], int length);
int main() {
	setlocale(LC_ALL, "Russian");
	int n, n1;
	float m;
	double m1;
	//Задача 1
	cout << "Задача 1\nВведите 2 числа: ";
	cin >> n >> n1;
	cout << "Среднее арифметическое введенных чисел = " << arifm(n, n1) << endl << endl;

	//Задача 2
	cout << "Задача 2\n";
	cout << "Числа типа int, введите 1 число: ";
	cin >> n;
	cout << "Максимальное число = " << max(n)<< ".\n\n";
	cout << "Числа типа float, введите 1 число: ";
	cin >> m;
	cout << "Максимальное число = " << max(m) << ".\n\n";
	cout << "Числа типа double: ";
	cin >> m1;
	cout << "Максимальное число = " << max(m1) << ".\n\n";

	//Задача 3
	cout << "Задача 3.\n";
	int arr[3] = {2, 4, 1};
	float arr1[3] = {2.2, 2.4, 2.1};
	double arr2[3] = {-3.4, -6, 6.32};
	cout << "Изначальный массив INT: ";
	showArr(arr, 3);
	cout << "Максимальный элемент массива с типом данных int: ";
	cout << maxEl(arr, 3) << endl;
	cout << "Изначальный массив FLOAT: ";
	showArr(arr1, 3);
	cout << "Максимальный элемент массива с типом данных float: ";
	cout << maxEl(arr1, 3) << endl;
	cout << "Изначальный массив INT: ";
	showArr(arr2, 3);
	cout << "Максимальный элемент массива с типом данных double: ";
	cout << maxEl(arr2, 3) << endl;







	return 0;
}
//Задача 3
template <typename T> T maxEl(T array[], int length) { 
	T max = 0;
	for (int i = 0; i < length; i++)
		if (array[i] > max)
			max = array[i];
	return max;
}
//Задача 2
int max(int n) {
	
	int max = n;
	for (int i = 1; i < 3; i++) {
		cout << "Введите " << i + 1 << " число: ";
		cin >> n;
		if (n > max)
			max = n;
	}
	return max;
}
float max(float m) {

	float max = m;
	for (int i = 1; i < 3; i++) {
		cout << "Введите " << i + 1 << " число: ";
		cin >> m;
		if (m > max)
			max = m;
	}
	return max;
}

double max(double m1) {

	double max = m1;
	for (int i = 1; i < 3; i++) {
		cout << "Введите " << i + 1 << " число: ";
		cin >> m1;
		if (m1 > max)
			max = m1;
	}
	return max;
}


//Задача 1
inline float arifm(float n, float m) {
	return (n + m) / 2;
}

template <typename T> void showArr(T array[], int length) { //Вывод массива
	cout << "\n[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
}