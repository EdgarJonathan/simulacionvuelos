#include "pilacarreta.h"

//*******************************************************************************************
//*******************************************************************************************
//*************************************Nodo Carreta******************************************
//*******************************************************************************************
//*******************************************************************************************
Carreta::Carreta(int id){

    this->id = id;
}

Carreta *Carreta::getSig() const
{
return sig;
}

void Carreta::setSig(Carreta *value)
{
sig = value;
}

int Carreta::getId() const
{
    return id;
}

void Carreta::setId(int value)
{
    id = value;
}


//*******************************************************************************************
//*******************************************************************************************
//*************************************Pila Carreta******************************************
//*******************************************************************************************
//*******************************************************************************************

pilaCarreta::pilaCarreta()
{

    primero = nullptr;
}


void pilaCarreta::push(int id){

    Carreta* nuevo = new Carreta(id);

    if(primero)
    {
         nuevo->setSig(primero);
         primero = nuevo;
    }else{
        primero = nuevo;
    }

}


int pilaCarreta::pop(){
    int result=0;
    if(primero){
        result = primero->getId();
        Carreta* aux = primero;
        primero = primero->getSig();
        delete  aux;
        return  result;
    }else{
        return -1;
    }
}
