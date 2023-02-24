#include <iostream>

//����� ������� � �������
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

template<typename T>
int search_index(T arr[], const int length, T value, int begin=0) {//int begin ������� � ������� ���������� ����� � �������
	for (int i = begin; i < length; i++)//���� ����� int begin �� ����� ���������� ������ � ����� ��������
		if (arr[i] == value)
			return i;
	return -1;
}
//�������� ����� ���������� ��������� �������� � ������
//������� ����� � ����� �������, ������� ������� ��������
template <typename T>
int search_last_index(T arr[], const int length, T value) {//����� ��� ����� �������� �� �����, ����� �� ������� �������� ���
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}
template <typename T>
int search_last_index(T arr[], const int length, T value, int begin) {//������� ������� ��� ���� �������, � ����� ��� ���������� �� ���
	for (int i = begin; i >= 0; i--)
		if (arr[i] == value)
			return i;
}
//������� ��� ��������
void subword(char word[], const int size, char sym) {
	int index = search_index(word, size, sym);
	if (index != -1) {
		for (int i = index; i < size; i++)
			std::cout << word[i];
		std::cout << std::endl;
	}
	else
		std::cout<<"ERROR\n";
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	//������ 2. ��������
	std::cout << "������ 2. �����\n";
	const int word_size = 8;
	char sym;
	char word[word_size]{
		'f','u','n','c','t','i','o','n'
	};
	for (int i = 0; i < word_size; i++)
		std::cout << word[i];
	std::cout << "\n������� ������ - >";
	std::cin >> sym;
	std::cout << "��������:\n";
	subword(word, word_size, sym);
	std::cout << std::endl;








	//�������� ����� ��������� � �������
	/*const int size = 10;
	int arr[size]{ 10, 17, 8,-1, 9, 17,11,10,0,50 };
	//              0   1  2  3   4  5  6  7 8  9
	std::cout << "������:\n";
	print_arr(arr, size);
	std::cout << "������� ����� ��� ������ ->";
	std::cin >> n;
	int index;//���������� ��� ����, ��� �� ���� ������ ���������
	//�������� ����� ������� ��������� �������� � ������ (������� ������ ������ ������ ��������, ���� ���� ��� ������ ����� �� �����, �� �� �������)
	//index = search_index(arr, size, n,3);//3 - ��� ������, � ������� ���������� ����� 
	//if (index != -1)
	//	std::cout << "������ ����� " << n << ":" << index << '\n';
	//else
	//	std::cout << "����� � ������� ���\n";
	
	//�������� ����� ���������� ��������� �������� � ������
	index = search_last_index(arr, size,n, 5);
	if (index != -1)
		std::cout << "������� ���������� ��������� ����� � ������: " << index << '\n';
	else
		std::cout << "����� ��� � �������\n";*/


	return 0;
}