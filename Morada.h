#pragma once
#include <string>
#include "Morada.h"

using namespace std;

class Client {
public:
	Client();
	Client(string nome, string nif, string agregfamiliar, string rua, string porta, string andar,string cpostal, string localidade, string pacotadquiridos);
	void setNome(string nome);
	void setNif(string nif);
	void setAgregFamiliar(string agregfamiliar);
	void setMoradaRua(string rua);
	void setMoradaPorta(string porta);
	void setMoradaAndar(string andar);
	void setMoradaCPostal(string cpostal);
	void setMoradaLocalidade(string localidade);
	void setPacotAdquiridos(string pacotadquiridos);
	string getNome() const;
	string getNif() const;
	string getAgregFamiliar() const;
	string getMoradaRua() const;
	string getMoradaPorta() const;
	string getMoradaAndar() const;
	string getMoradaCPostal() const;
	string getMoradaLocalidade() const;
	string getMoradaMorada() const;
	string getPacotAdquiridos() const;
	string getClient() const;
	void showClient() const;
private:
	string nome;
	string nif;
	string agregfamiliar;
	Morada morada;
	string pacotadquiridos;
};
