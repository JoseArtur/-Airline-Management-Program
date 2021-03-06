#include "plane.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Plane::Plane(string mat, string type, int cap) {
    this->mat = mat;
    this->type = type;
    this->cap = cap;
}

string Plane::getMat(){
    return mat;
}

void Plane::setMat(string & mat){
    this->mat = mat;
}

string Plane::getType(){
    return type;
}

void Plane::setType(string & type){
    this->type = type;
}

int Plane::getCap(){
    return cap;
}

void Plane::setCap(int & cap){
    this->cap=cap;
}

bool Plane::addflight(Flight &flight) {
    int count = -1;
    for(auto x:flights){
        if(x == flight) return false;
    }
    if (count == -1) flights.push_back(flight);
    return true;
}

bool Plane::removeflight(int num) {
    for(int i = 0; i < flights.size();i++){
        if(flights[i].getnum() == num){
            flights.erase(flights.begin()+i);
            return true;
        }
    }
    return false;
}

bool Plane::addpassenger(Flight &flight, Passenger &pass) {
    int count = -1;
    for(int i = 0; i < flights.size();i++) {
        if(flights[i].getnum() == flight.getnum()){
            for(int j = 0; j < flights[i].getPassenger().size();j++){
                if(flights[i].getPassenger()[j].getid() == pass.getid()){
                    count++;
                }
            }
            if ( this->cap - flights[i].getPassenger().size() > 0 && count == -1) {
                pass.setticket(true);
                flights[i].getPassenger().push_back(pass);
                return true;
            }
        }
    }
    return false;
}




void Plane::scheduleService(planeService service) {
    this->scheduled.push(service);
}

void Plane::completeService() {
    this->completed.push(scheduled.front());
    this->scheduled.pop();
}


vector<Flight> Plane::getflights(){
    return flights;
}

void Plane::setflights(vector<Flight> &flights) {
    this->flights = flights;
}
