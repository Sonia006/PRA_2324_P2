#include <vector>
#include <algorithm>
#include <iostream>

template <typename T>

void CambiarOrden(std::vector<T>& v, int ini, int fin){
	if(ini>=fin){
		return;
	}
	
	T aux = v[ini];
	v[ini] = v[fin];
	v[fin] = aux;
	return CambiarOrden(v, ini + 1, fin - 1);
}

template <typename T> 

int BusquedaBinaria(T x, std::vector<T>& v, int ini, int fin){
	
	if(ini > fin){
		return -1;
	}
	
	int medio = (ini + fin)/2;

	if(v[medio] == x){
		return medio;
	}else if(v[medio] > x){
		return BusquedaBinaria(x, v, ini, medio - 1);
	}else{
		return BusquedaBinaria(x, v, medio + 1, fin);
	}
}

template <typename T>

int BusquedaBinaria_INV(T x, std::vector<T>& v, int ini, int fin){

        if(ini > fin){
                return -1;
        }

        int medio = (ini + fin)/2;

        if(v[medio] == x){
                return medio;
        }else if(v[medio] > x){
                return BusquedaBinaria_INV(x, v, medio + 1, fin);
        }else{
                return BusquedaBinaria_INV(x, v, ini, medio - 1);
        }
}

template <typename T>

int Partition(std::vector<T>& v, int ini, int fin){
	T x = v[fin];
	int i = ini;
	for(int j = ini; j<=fin - 1; j++){
		if(v[j] <= x){
			std::swap(v[i], v[j]);
			i++;
		}
	}
	std::swap(v[i],v[fin]);
	return i;
}

template <typename T>

void visualizarVector(std::vector<T>& v){
	for(int i = 0; i <v.size(); i++){
		std::cout << v[i] << " ";
	}
	std::cout << std:: endl;
}

template <typename T>

void QuickSort(std::vector<T>& v, int ini, int fin){
	if(ini<fin){
		int pivote = Partition(v, ini, fin);
		QuickSort(v, ini, pivote - 1);
		QuickSort(v, pivote + 1, fin);
	}
}
