#include <iostream>     
#include <utility>      
#include <future>       
#include <thread> 
#include <Windows.h>

int add_all(std::vector<int> num);
int add(int x, int y);
void printA(int x);
void printB(int x);
void printC(int x);

int main()
{
	int x = 10;
	int y = 5;
	auto sub = [](int x, int y) {return x - y; };
	/*
	Zad_1
	a) Przy pomocy funkcji add dodaj do siebie wszystkie elementy vectora num. U�yj async. 

	b)U�ywaj�c async wywo�aj funkcji� printA, printB, printC w taki spos�b aby stworzy�e nast�puj�ce ci�gi: AABCCC,BBBBAC,CBBBBAA.
	Spr�buj osi�gn�� jak najni�szy czas wykonania.
	Wywo�ania funkcji print stw�rz w kolejno�ci alfabetycznej.
	*/
	std::cout << "Zad.1\n";

	std::cout << "a)\n";

	std::vector<int> num = { 10, 13, 6, 7, 4, 5 };
	
	//Tu wpisz rozwiazanie

	std::cout << "result: " << res << std::endl;
	
	std::cout << "b)\n";
	std::cout << "AABCCC\n";

	auto start = std::chrono::high_resolution_clock::now();

	//Tu wpisz rozwiazanie 

	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> elapsed = end - start;//2.2s
	std::cout << std::endl << elapsed<<std::endl;

	std::cout << "\nBBBBAC\n";

	start = std::chrono::high_resolution_clock::now();
	
	//Tu wpisz rozwiazanie

	end = std::chrono::high_resolution_clock::now();
	elapsed = end - start;
	std::cout << std::endl << elapsed << std::endl;//1.5s

	std::cout << "\nCBBBBAA\n";

	start = std::chrono::high_resolution_clock::now();

	//Tu wpisz rozwiazanie

	end = std::chrono::high_resolution_clock::now();
	elapsed = end - start;
	std::cout << std::endl << elapsed << std::endl;//1s
	

	/*
	Zad_2
	a)Tworz�c tylko po jednym packaged_task dla add i sub oblicz warto��: add(x,sub(y,x)).

	b)Tworz�c tylko po jednym packaged_task dla ka�dej funkcji print, wy�wietl nast�puj�ce ci�gi: AACBA,BBCCAABC,CBABC.
	*/
	std::cout << "\nZad_2\n";
	std::cout << "a)\n";
	
	//Tu wpisz rozwiazanie

	std::cout << "\nb)\n";
	std::cout<<"AACBA\n";

	//Tu wpisz rozwiazanie

	std::cout << "\nBBCCAABC\n";
	
	//Tu wpisz rozwiazanie

	std::cout << "\nCBABC\n";

	//Tu wpisz rozwiaznie

	/*
	Zad_3
	Stw�rz funkci� typu void, wypisuj�c� �redni� wa�on� ocen. 
	Funkcja powinna wykonywa� si� na osobnym w�tku.
	Skorzystaj z promise.
	*/

	std::cout << "\nZad_3\n";
	std::vector<double>oceny = { 2, 5, 3, 3, 4, 5, 2 };
	std::vector<double>wagi = { 4, 2, 3, 4, 4, 3, 2 };


}



int add_all(std::vector<int> num) {
	int res = 0;
	for (int i : num)
		res += i;
	return res;
}

int add(int x, int y)
{
	return x + y;
}

void printA(int x) {

	Sleep(1000);
	for (int i = 0; i < x; i++) {
		std::cout << "A";
	}
}

void printB(int x) {

	Sleep(750);
	for (int i = 0; i < x; i++) {
		std::cout << "B";
	}
}

void printC(int x) {

	Sleep(500);
	for (int i = 0; i < x; i++) {
		std::cout << "C";
	}
}