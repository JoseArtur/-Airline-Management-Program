//
// Created by jccmg on 04/12/2021.
//

#include "Passenger.h"

#include <iostream>
#include <string>
#include <vector>

Passenger::Passenger(int id, string name, bool ticket, bool bagage, bool group){
    this->id = id;
    this->name = name;
    this->ticket = ticket;
    this->bagage = bagage;
    this->group = group;
}

int Passenger::getid(){
    return id;
}

void Passenger::setid(int id){
    this->id = id;
}

string Passenger::getname(){
    return name;
}

void Passenger::setname(string name){
    this->name = name;
}
bool Passenger::getticket(){
    return ticket;
}

void Passenger::setticket(bool ticket){
    this->ticket = ticket;
}

bool Passenger::getbagage(){
    return bagage;
}

void Passenger::setbagage(bool bagage){
    this->bagage = bagage;
}

bool Passenger::getgroup(){
    return group;
}
void Passenger::setgroup(bool group){
    this->group = group;
}

