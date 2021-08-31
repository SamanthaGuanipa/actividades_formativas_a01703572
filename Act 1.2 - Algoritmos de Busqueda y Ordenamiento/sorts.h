template <class T>
class Sorts{
    public:
        void ordenaSeleccion(std::vector<T> _vector);
        void ordenaBurbuja(std::vector<T> _vector);
        void ordenaMerge(std::vector<T> _vector);
        int busqSecuencial(std::vector<T> _vector, int pos);
        int busqBinaria(std::vector<T> _vector, int pos);
        void swap(std::vector<T> &v, int i, int j);
};

template <class T>
void Sorts<T>::swap(std::vector<T> &v, int i, int j) {
    T aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

template <class T>
void Sorts<T>::ordenaSeleccion(std::vector<T> _vector){
    
}

template <class T>
void Sorts<T>::ordenaBurbuja(std::vector<T> _vector){

}

template <class T>
void Sorts<T>::ordenaMerge(std::vector<T> _vector){

}

template <class T>
int Sorts<T>::busqSecuencial(std::vector<T> _vector, int pos){

}

template <class T>
int Sorts<T>::busqBinaria(std::vector<T> _vector, int pos){

}