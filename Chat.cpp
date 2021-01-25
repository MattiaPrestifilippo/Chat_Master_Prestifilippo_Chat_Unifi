//
// Created by matti on 10/01/2021.
//

#include "Chat.h"


Chat::Chat(const Utente &nome, const Utente &destinatario) : nome(nome), destinatario(destinatario) {}

Chat::Chat() {}

Chat::~Chat() {

}


const Utente &Chat::getNome() const {
    return nome;
}

const Utente &Chat::getDestinatario() const {
    return destinatario;
}

const vector<Messaggio> &Chat::getChat() const {
    return chat;
}

void Chat::inserisciMessaggio(const Messaggio &msg) {
if(msg.getMittente()==nome && msg.getDestinatario()==destinatario){
    inserisciMessaggioInviati(msg);
}
else if(msg.getMittente()==destinatario && msg.getDestinatario()==nome){
        inserisciMessaggiArrivo(msg);
    }
}

void Chat::inserisciMessaggiArrivo(const Messaggio &msg) {
    cout<<"Notifica : Messaggio in arrivo da "<<msg.getMittente().getNominativo()<<endl<<endl;
chat.push_back(msg);
}

void Chat::inserisciMessaggioInviati(const Messaggio &msg) {
    cout<<"Messaggio inviato correttamente"<<endl<<endl;
    chat.push_back(msg);
}

void Chat::leggiMessaggi() {
for(int i=0;i<chat.size();i++){
        chat[i].print();
}
}

void Chat::leggiMessaggiNonLetti() {

    for(int i=0;i<chat.size();i++){

        if(chat[i].isLetto()== false){
            chat[i].print();

        }

    }

}

bool Chat::operator==(const Chat &rhs) const {
    return nome == rhs.nome &&
           destinatario == rhs.destinatario;
}

bool Chat::operator!=(const Chat &rhs) const {
    return !(rhs == *this);
}

