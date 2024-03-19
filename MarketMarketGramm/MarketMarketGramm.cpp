#include <iostream>


int main(void) {
	using namespace std;
	setlocale(LC_ALL, "RUS");

	float pricePerHundredGram;
	float weight;
	float discount;
	cout << "Введите стоимость товара: ";
	cin >> pricePerHundredGram;
	cout << "Введите вес товара: ";
	cin >> weight;
	cout << "Введите размер скидки: ";
	cin >> discount;
	int totalSum = weight / 100 * pricePerHundredGram;

	cout << "Цена за " << weight << " грамм продукта с учетом скидки составит: " << totalSum - (totalSum / 100 * discount);
}