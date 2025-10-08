#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <DyV.h>
#include <cstdlib>
#include <ctime>

int main(){

	std::srand(std::time(NULL));

	std::vector<int> i = {1, 2, 3, 4, 5};
	int in = 1;
	std::vector<float> f = {18.5, 19.2, 20.0, 21.3, 22.8};
	float fl = 21.3;  
	std::vector<double> d = {0.001, 0.01, 0.1, 1.0, 10.0};
	double dou = 10.0;
	std::vector<char> c = {'a', 'b', 'c', 'd', 'e'};
	char ch = 'a';
	std::vector<std::string> s = {"Ana", "Carlos", "Lucas", "María"};
	std::string str = "Carlos";

	int tipo1;
	int tipo2;
	int tipo3;

	std::cout << "¿BusquedaBinaria(1) o QuickSort(2)?: ";
	std::cin >> tipo1;
	std::cout << "Elige entre: int = 1; float = 2; double = 3; char = 4; string = 5" << std::endl;
        std::cin >> tipo3;
	
	switch(tipo1) {
		case 1:
			std::cout << "¿Ascendente(1) o Descendente(2)?: ";
			std::cin >> tipo2;
			switch(tipo2){
				case 1:
					switch(tipo3){
						case 1:
							std::cout << BusquedaBinaria(i, in, 0, i.size() - 1) << std::endl;
							break;
						case 2:
							std::cout << BusquedaBinaria(f, fl, 0, f.size() - 1) << std::endl;
							break;
						case 3:
							std::cout << BusquedaBinaria(d, dou, 0, d.size() - 1) << std::endl;
							break;
						case 4:
							std::cout << BusquedaBinaria(c, ch, 0, c.size() - 1) << std::endl;
							break;
						case 5:
							std::cout << BusquedaBinaria(s, str, 0, s.size() - 1) << std::endl;
							break;
						default:
							std::cout << "Opcion no aceptable" << std::endl;
							break;
					}
					break;
				case 2:
					switch(tipo3){
                                                case 1:
                                                        ordenarVector(i, 0, i.size() - 1);
                                                        std::cout << BusquedaBinaria_INV(i, in, 0, i.size() - 1) << std::endl;
                                                	break;
						case 2:
							ordenarVector(f, 0, f.size() - 1);
                                                        std::cout << BusquedaBinaria_INV(f, fl, 0, f.size() - 1) << std::endl;
                                                	break;
						case 3:
							ordenarVector(d, 0, d.size() - 1);
                                                        std::cout << BusquedaBinaria_INV(d, dou, 0, d.size() - 1) << std::endl;
                                                	break;
						case 4:
							ordenarVector(c, 0, c.size() - 1);
                                                        std::cout << BusquedaBinaria_INV(c, ch, 0, c.size() - 1) << std::endl;
                                                        break;
						case 5:
							ordenarVector(s, 0, s.size() - 1);
                                                        std::cout << BusquedaBinaria_INV(s, str, 0, s.size() - 1) << std::endl;
                                                        break;
						default:
							std::cout << "Opcion no aceptable" << std::endl;
                                                        break;
                                        }
					break;
				default:
					std::cout << "Opcion no aceptable" << std::endl;
					break;
			}
			break;

		case 2:
			switch(tipo3){
				case 1:
                               		desordenarVector(i, 0, i.size() - 1);
					Partition(i, 0, i.size() - 1);
					QuickSort(i, 0, i.size() - 1);
					visualizarVector(i);
                               		break;
                               	case 2:
					desordenarVector(f, 0, f.size() - 1);
                                        Partition(f, 0, f.size() - 1);
                                        QuickSort(f, 0, f.size() - 1);
                                        visualizarVector(f);
                                        break;
                                case 3:
                                        desordenarVector(d, 0, d.size() - 1);
					Partition(d, 0, d.size() - 1);
                                        QuickSort(d, 0, d.size() - 1);
                                        visualizarVector(d);
                                        break;
                                case 4:
                                        desordenarVector(c, 0, c.size() - 1);
					Partition(c, 0, c.size() - 1);
                                        QuickSort(c, 0, c.size() - 1);
                                        visualizarVector(c);
                                        break;
                                case 5:
                                        desordenarVector(s, 0, s.size() - 1);
					Partition(s, 0, s.size() - 1);
                                        QuickSort(s, 0, s.size() - 1);
                                        visualizarVector(s);
                                        break;
                                default:
                                        std::cout << "Opcion no aceptable" << std::endl;
                                        break;
                       }
                       break;

		default:
			std::cout << "Opcion no aceptable" << std::endl;
			break;
	}			
	
	return 0;
}
