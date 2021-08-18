class Funciones {
    public:
        Funciones();
        int sumaIterativa(int _val);
        int sumaRecursiva(int _val);
        int sumaDirecta(int _val);
};

Funciones::Funciones(){}

int Funciones::sumaIterativa(int _val){
    int res = 0;
    for(int i = 1; i <= _val; i++){
        res += i;
    }
    return res;
}

int Funciones::sumaRecursiva(int _val){
    if(_val == 0){
        return 0;
    } else{
        return _val + sumaRecursiva(_val - 1);
    }
}

int Funciones::sumaDirecta(int _val){
    return (_val*(_val+1))/2;
}