#include <iomanip>
# include "Hora.hpp"   

//Constructor default inicializa para que represente las 8:00


//Contructor con parámetros, utilizará los setter para validar


//Getter para hora
  

//Getter para minuto


//Setter para hora, valida que la hora esté entre 0 y 23 sino asigna 0


//Setter para minuto, valida que el minuto esté entre 0 y 59 sino asigna 0


//Imprime la hora en formato de 24 horas, con dos dígitos para la hora y dos para el minutos
//Ejemplo: 07:30
void Hora::imprime() const{
    std::cout << std::setfill('0') << std::setw(2)<< hora << ":"
    << std::setfill('0') << std::setw(2)<< minuto << std::endl;
}   