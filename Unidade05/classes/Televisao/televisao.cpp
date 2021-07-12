#include<iostream>
#include"televisao.h"

using namespace std;

Televisao::Televisao(){
    cout<<"passou aqui 01"<<endl;
    this->channel = 0;
    this->volume = 0;
}

Televisao::Televisao(int channel, int volume){
    this->channel = channel;
    this->volume = volume;
}

Televisao::Televisao(int channel){
    this->channel = channel;
    this->volume = 0;
}

void Televisao::volumeUp(){
    this->volume++;
}

void Televisao::volumeDown(){
    if(this->volume > 0)
        this->volume--;
}

void Televisao::channelUp(){
    this->channel++;
}

void Televisao::channelDown(){
    if(this->channel > 0)
        this->channel--;
}

void Televisao::setChannel(int channel){
    this->channel = channel;
}

void Televisao::setVolume(int volume){
    if(volume > 0)
        this->volume = volume;
}

int Televisao::getChannel(){
    return this->channel;
}

int Televisao::getVolume(){
    return this->volume;
}

