//
// Created by rudri on 3/29/2019.
//

#include "Vector.h"

namespace UTEC{
    void vector2::push_back(int value) {
        if (_size==0){
            _arr=new int(1);
            _size=1;
            _arr[0]=value;
        }
        else{
            int* temporal=new int[_size+1];
            for (int i=0;i<_size;i++){
                temporal[i]=_arr[i];
            }
            temporal[_size]=value;
            _size+=1;
            delete[] _arr;
            _arr=temporal;

        }
    }
    void vector2::insert(int pos,int value){
        _size+=1;
        int* temporal=new int[_size];
        for (int i=0;i=_size;i++){
            if(i!=pos){
                _arr[i]=temporal[i];
            }
            else{
                _arr[i]=value;
            }
        }
    }

    void vector2::pop_back() {
        _size-=1;
        int* temporal=new int[_size];
        for (int i=0;i<_size-1;i++){
                temporal[i]=_arr[i];
        }
        delete[] _arr;
        _arr=temporal;
    }

    vector2::vector2() : _arr{nullptr}, _size(0) {}
    vector2::~vector2() {
        delete[] _arr;
    }

    int vector2::size() {return _size;}

    int vector2::get_item(int i) {return _arr[i];}
}
