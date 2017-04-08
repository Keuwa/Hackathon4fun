//
// Created by guillaume chieb bouares on 05/04/2017.
//

#include "BaseManager.h"

template <class T> T manager::BaseManager<T>::instance=T();


template <class T>  T& manager::BaseManager<T>::getInstance()
{
    return instance;
}