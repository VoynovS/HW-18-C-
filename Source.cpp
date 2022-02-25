
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
	//������ 1
	cout << "������ 1\n������� 2 �����: ";
	cin >> n >> n1;
	cout << "������� �������������� ��������� ����� = " << arifm(n, n1) << endl << endl;

	//������ 2
	cout << "������ 2\n";
	cout << "����� ���� int, ������� 1 �����: ";
	cin >> n;
	cout << "������������ ����� = " << max(n)<< ".\n\n";
	cout << "����� ���� float, ������� 1 �����: ";
	cin >> m;
	cout << "������������ ����� = " << max(m) << ".\n\n";
	cout << "����� ���� double: ";
	cin >> m1;
	cout << "������������ ����� = " << max(m1) << ".\n\n";

	//������ 3
	cout << "������ 3.\n";
	int arr[3] = {2, 4, 1};
	float arr1[3] = {2.2, 2.4, 2.1};
	double arr2[3] = {-3.4, -6, 6.32};
	cout << "����������� ������ INT: ";
	showArr(arr, 3);
	cout << "������������ ������� ������� � ����� ������ int: ";
	cout << maxEl(arr, 3) << endl;
	cout << "����������� ������ FLOAT: ";
	showArr(arr1, 3);
	cout << "������������ ������� ������� � ����� ������ float: ";
	cout << maxEl(arr1, 3) << endl;
	cout << "����������� ������ INT: ";
	showArr(arr2, 3);
	cout << "������������ ������� ������� � ����� ������ double: ";
	cout << maxEl(arr2, 3) << endl;







	return 0;
}
//������ 3
template <typename T> T maxEl(T array[], int length) { 
	T max = 0;
	for (int i = 0; i < length; i++)
		if (array[i] > max)
			max = array[i];
	return max;
}
//������ 2
int max(int n) {
	
	int max = n;
	for (int i = 1; i < 3; i++) {
		cout << "������� " << i + 1 << " �����: ";
		cin >> n;
		if (n > max)
			max = n;
	}
	return max;
}
float max(float m) {

	float max = m;
	for (int i = 1; i < 3; i++) {
		cout << "������� " << i + 1 << " �����: ";
		cin >> m;
		if (m > max)
			max = m;
	}
	return max;
}

double max(double m1) {

	double max = m1;
	for (int i = 1; i < 3; i++) {
		cout << "������� " << i + 1 << " �����: ";
		cin >> m1;
		if (m1 > max)
			max = m1;
	}
	return max;
}


//������ 1
inline float arifm(float n, float m) {
	return (n + m) / 2;
}

template <typename T> void showArr(T array[], int length) { //����� �������
	cout << "\n[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
}