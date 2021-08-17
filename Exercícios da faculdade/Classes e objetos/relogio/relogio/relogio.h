#ifndef RELOGIO_H           // evita a duplicação da classe
#define RELOGIO_H


class relogio
{
    int hora;
    int minuto;
    int seg;

public:
    relogio();              // criação do construtor
    ~relogio();             //destrutor
    void entrada (void);
    void imprime (void);
    void incrementa (void);

};

#endif // RELOGIO_H


