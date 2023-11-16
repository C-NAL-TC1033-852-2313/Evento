//Definicion de la clase Hora
#pragma once
#include <iostream>
/*Clase Hora representa la hora de inicio de un evento en formato 
  de 24 horas (no son relevantes los segundos) para este ejercicio*/

class Hora{
    public:
        Hora();
        Hora(int, int);
        void setHora(int);
        void setMinuto(int);
        int getHora() const;
        int getMinuto() const;
        void imprime() const;
    private:
        int hora;
        int minuto;
};