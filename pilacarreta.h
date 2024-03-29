#ifndef PILACARRETA_H
#define PILACARRETA_H
//*******************************************************************************************
//*******************************************************************************************
//*************************************Nodo Carreta******************************************
//*******************************************************************************************
//*******************************************************************************************

class Carreta{
public:

    Carreta(int id);
    Carreta *getSig() const;
    void setSig(Carreta *value);

    int getId() const;
    void setId(int value);

private:
    int id;
    Carreta* sig;

};

//*******************************************************************************************
//*******************************************************************************************
//*************************************Pila Carreta******************************************
//*******************************************************************************************
//*******************************************************************************************

class pilaCarreta
{
private:
    Carreta* primero;

public:
    pilaCarreta();
    void push(int id);
    int pop();

};





#endif // PILACARRETA_H
