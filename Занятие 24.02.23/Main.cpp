#include <iostream>

//Вывод массива в консоль
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

template<typename T>
int search_index(T arr[], const int length, T value, int begin=0) {//int begin позиция с которой начинается поиск в массиве
	for (int i = begin; i < length; i++)//если пишем int begin то поиск начинается именно с этого элемента
		if (arr[i] == value)
			return i;
	return -1;
}
//Линейный поиск последнего вхождения элемента в массив
//Начинем поиск с конца массива, поэтому функция наоборот
template <typename T>
int search_last_index(T arr[], const int length, T value) {//здесь инт бегин работать не будет, нужно по другому написать код
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}
template <typename T>
int search_last_index(T arr[], const int length, T value, int begin) {//поэтому создаем еще одну функцию, и поиск уже начинается по ней
	for (int i = begin; i >= 0; i--)
		if (arr[i] == value)
			return i;
}
//Функция для символов
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
	//Задача 2. Подслово
	std::cout << "Задача 2. Слово\n";
	const int word_size = 8;
	char sym;
	char word[word_size]{
		'f','u','n','c','t','i','o','n'
	};
	for (int i = 0; i < word_size; i++)
		std::cout << word[i];
	std::cout << "\nВведите символ - >";
	std::cin >> sym;
	std::cout << "Подслово:\n";
	subword(word, word_size, sym);
	std::cout << std::endl;








	//Линейный поиск элементов в массиве
	/*const int size = 10;
	int arr[size]{ 10, 17, 8,-1, 9, 17,11,10,0,50 };
	//              0   1  2  3   4  5  6  7 8  9
	std::cout << "Массив:\n";
	print_arr(arr, size);
	std::cout << "Введите число для поиска ->";
	std::cin >> n;
	int index;//переменная для того, что бы было удобно проверять
	//Линейный поиск первого вхождения элемента в массив (выводит только первый индекс элемента, если есть еще дальше такое же число, то не выводит)
	//index = search_index(arr, size, n,3);//3 - это индекс, с котрого начинается поиск 
	//if (index != -1)
	//	std::cout << "Индекс числа " << n << ":" << index << '\n';
	//else
	//	std::cout << "Числа в массиве нет\n";
	
	//Линейный поиск последнего вхождения элемента в массив
	index = search_last_index(arr, size,n, 5);
	if (index != -1)
		std::cout << "Позиция последнего вхождения числа в массив: " << index << '\n';
	else
		std::cout << "Числа нет в массиве\n";*/


	return 0;
}