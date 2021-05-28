#pragma once
#ifndef CLASS_INFORMATION_H
#define CLASS_INFORMATION_H

#include <iostream>
using namespace std;

class Information {
	string m_name = "";
	char m_typ;
	float m_nom;
	int m_amount;

public:
	Information();
	~Information() {}
	Information(string name, char typ, float nom, int colvo);
	Information(Information& other);
	void set_inform(string name, char typ, float nom, int colvo);
	void get_inform(string& name, char& typ, float& nom, int& colvo);
	void show_inform();
};

Information::Information() :m_name(""), m_typ(0), m_nom(0), m_amount(0) {}

Information::Information(string name, char typ, float nom, int colvo)
{
	m_name = name;
	m_typ = typ;
	m_nom = nom;
	m_amount = colvo;
}
Information::Information(Information& other)
{
	this->m_name = other.m_name;
	this->m_typ = other.m_typ;
	this->m_nom = other.m_nom;
	this->m_amount = other.m_amount;
}

void  Information::set_inform(string name, char typ, float nom, int colvo)
{
	m_name = name;
	m_typ = typ;
	m_nom = nom;
	m_amount = colvo;
}

void Information::get_inform(string& name, char& typ, float& nom, int& colvo)
{
	name = m_name;
	typ = m_typ;
	nom = m_nom;
	colvo = m_amount;
}

void Information::show_inform()
{
	cout << "name: \t" << m_name << endl;
	cout << "type: \t\t" << m_typ << endl;
	cout << "nominal: \t" << m_nom << endl;
	cout << "amount: \t" << m_amount << endl;
}
#endif