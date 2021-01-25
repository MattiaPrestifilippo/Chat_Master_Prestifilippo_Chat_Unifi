//
// Created by matti on 12/01/2021.
//

#include "Chats.h"
#include <iostream>
using namespace std;

Chats::Chats() {}

Chats::~Chats() {

}

void Chats::printAll() {
    for(int i=0;i<registroChat.size();i++){
        cout<<"Chat Nome : "<<registroChat[i].getNome().getNominativo()<<endl;
        cout<<"Chat destinatario : "<<registroChat[i].getDestinatario().getNominativo()<<endl;
        registroChat[i].leggiMessaggi();
    }
}

void Chats::inserisciMessaggio(const Messaggio &msg) {
for(int i=0;i<registroChat.size();i++){
    if(msg.getMittente()==registroChat[i].getNome()||
    msg.getMittente()==registroChat[i].getDestinatario()||
    msg.getDestinatario()==registroChat[i].getNome()
    ||msg.getDestinatario()==registroChat[i].getDestinatario()){
        registroChat[i].inserisciMessaggio(msg);
    }
}
}

void Chats::printChat(const Chat &chat) {
    for(int i=0;i<registroChat.size();i++){
        if(registroChat[i]==chat){
            cout<<"Chat tra "<<registroChat[i].getNome().getNominativo()<<" e "<<registroChat[i].getDestinatario().getNominativo()<<endl;
            registroChat[i].leggiMessaggi();
        }
    }
}
void Chats::printChatNonLetti(const Chat &chat) {
    for(int i=0;i<registroChat.size();i++){
        if(registroChat[i]==chat){
            cout<<"Chat tra "<<registroChat[i].getNome().getNominativo()<<" e "<<registroChat[i].getDestinatario().getNominativo()<<endl;
            registroChat[i].leggiMessaggiNonLetti();
        }
    }
}


void Chats::inserisciChat(const Chat &chat) {
registroChat.push_back(chat);
}

