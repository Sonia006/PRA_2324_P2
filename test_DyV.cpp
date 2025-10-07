#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main{
	std::vector<int> i = {1, 2, 3, 4, 5};
	std::vector<float> f = {18.5, 19.2, 20.0, 21.3, 22.8};
	std::vector<double> d = {0.001, 0.01, 0.1, 1.0, 10.0};
	std::vector<char> c = {'a', 'b', 'c', 'd', 'e'};
	std::vector<std::string> s = {"Ana", "Carlos", "Lucas", "María"}
	
	int tipo1;
	int tipo2;
	int tipo3;

	std::cout << "¿BusquedaBinaria(1) o QuickSort(2)?: ";
	std::cin >> tipo1;
	
	switch(tipo1) {
		case 1:
			std::cout << "¿Ascendente(1) o Descendente(2)?: ";
			std::cin >> tipo2;
			switch(tipo2){
				case 1:
					std::cout << "Elige entre: int = 1; float = 2; double = 3; char = 4; string = 5" << endl;
					switch(tipo3){
						case 1:
						case 2:
						case 3:
						case 4:
						case 5:
						default:
							cout << "Opcion no aceptable" << endl;
							break;
					}
				case 2:
				default:
					cout << "Opcion no aceptable" << endl;
					break;
			}
		case 2:
		default:
			cout << "Opcion no aceptable" << endl;
			break;
	}			
	
