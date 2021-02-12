#include <iostream>
#define ll long long
//10.02.2021

/*
 * Дается последовательность неотрицательных целых чисел.
 * Сначала дается их количество n (до 100000).
 * Выбрать из них некоторое множество с нечетной суммой
 * Эта сумма должна быть максимальной среди всех нечетных сумм.
 * Количество элементов должно быть минимальным по возможности.
 * Напечатать количество выбранных элементов и номер последнего.
 * Если вариантов ответа несколько - вывести любой
 * Пример
 * Дано
 * 11
 * 1 2 0 3 0 4 0 5 1 0 0
 * Ответ
 * 5 9
 * Примечание
 * Ответ 5 8 также годится
 */

using namespace std;

int main() {
	int n;
	cin >> n;
	int x, last = 0, nmin = 1000000, nnum = 0, last2 = 0, count = 0;
	ll sum = 0;
	for(int i = 1; i <= n; i++ )
	{
		cin >> x;
		if(x < nmin && x % 2 != 0){
			nmin = x;/home/derol
			nnum = i;
		}
		if(x > 0){
			sum += x;
			count++;
			if(x % 2 != 0){
				last2 = last;
				last = i;
			}
		}
	}
	if(sum % 2 == 0)
	{
		if(nnum == last)
		{
			count--;
			//sum -= nmin;
			cout << count <<" "<< last2;
		}
		else
		{
			count--;
			//sum -= nmin;
			cout << count <<" "<< last;
		}
	}
	else if(sum % 2 != 0)
		cout << count << " " << last;
	cout << endl;
	return 0;
}
