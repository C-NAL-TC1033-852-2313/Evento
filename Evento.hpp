#pragma once // prevents multiple definitions
#include "Hora.hpp"

class Evento{
    public:
        Evento();
        Evento(Hora, int, std::string);
        Hora getHoraInicio() const;
        int getDuracion() const;
        std::string getAsunto() const;
        void setHoraInicio(Hora);
        void setDuracion(int);
        void setAsunto(std::string);
        Hora calculaHoraFinal();
        void imprime();
    private:
        Hora horaInicio;
        int duracion; //en minutos
        std::string asunto;
};