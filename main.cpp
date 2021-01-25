#include <iostream>
#include "Messaggio.h"
#include "Utente.h"
#include "Chat.h"
#include "Chats.h"
using namespace std;
int main() {
    Chats registro;
    Utente Mattia("Mattia");
    Utente Giulia("Giulia");
    Utente Brian("Brian");
    Utente Marco("Marco");
    Chat mg(Mattia,Giulia);
    Chat gm(Giulia,Mattia);
    Chat mb(Mattia,Brian);
    Messaggio a("Ciao Giulia, come stai",Mattia,Giulia);
    Messaggio b("Tutto bene, tu ? ",Giulia,Mattia);
    Messaggio c("Quando vieni a casa mia",Mattia,Giulia);
    Messaggio d("Ciao Mattia sono Brian",Brian, Marco);
    Messaggio e("Ciao Brian sono Mattia",Mattia ,Brian);
    registro.inserisciChat(gm);
    registro.inserisciChat(mg);
    registro.inserisciChat(mb);
    registro.inserisciMessaggio(a);
    registro.inserisciMessaggio(d);
    registro.inserisciMessaggio(e);
    registro.printChatNonLetti(gm);
    registro.inserisciMessaggio(b);
    registro.inserisciMessaggio(c);
    registro.printChatNonLetti(gm);
    registro.printChatNonLetti(gm);
    registro.printChatNonLetti(mb);
    registro.printChatNonLetti(mg);
    registro.printChatNonLetti(gm);
    registro.printChatNonLetti(mb);
    return 0;
}

