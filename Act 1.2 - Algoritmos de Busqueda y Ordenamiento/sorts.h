template <class T>
class Sorts{
    public:
        void ordenaSeleccion(std::vector<T> &vector);
        void ordenaBurbuja(std::vector<T> &vector);
        void ordenaMerge(std::vector<T> &vector);
        int busqSecuencial(const std::vector<T> &vector, int val);
        int busqBinaria(const std::vector<T> &vector, int val);
        void swap(std::vector<T> &v, int i, int j);
};

template <class T>
void Sorts<T>::swap(std::vector<T> &v, int i, int j) {
    T aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

template <class T>
void Sorts<T>::ordenaSeleccion(std::vector<T> &vector){
    int min;
    for(int i = vector.size() - 1; i > 0; i--){
        min = 10000000;
        for(int j = 1; j <= i; j++) {
            if (vector[j] < vector[min]) {
                min = j;
            }
        }
        if(min != i){
            swap(vector, i, min);
        }
    }
}

template <class T>
void Sorts<T>::ordenaBurbuja(std::vector<T> &vector){
    for(int i = vector.size() - 1; i > 0; i--){
        for(int j = 0; j < i; j++) {
            if (vector[j] > vector[j+1]){
                swap(vector, j, j + 1);
            }
        }
    }
}

template <class T>
void Sorts<T>::ordenaMerge(std::vector<T> &vector){

}

template <class T>
int Sorts<T>::busqSecuencial(const std::vector<T> &vector, int val){
    int mid, low = 0, high = vector.size - 1;

    while(low < high){
        mid = (high + low) / 2;
        if(val == vector[mid]){
            return mid;
        } else if(val < vector[mid]){
            high = mid - 1;
        } else if(val > vector[mid]){
            low = mid + 1;
        }
    }
    return -1;
}

template <class T>
int Sorts<T>::busqBinaria(const std::vector<T> &vector, int val){

}