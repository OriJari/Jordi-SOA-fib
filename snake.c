#include <snake.h>
#include <sched.h>

void init_keyBuffer(){
    lectura = 0; //Lectura y escriptura apuntan al principio del buffer
    escriptura = 0;
    //DEBUGGING
    //keyBuffer[0]='z';
    //keyBuffer[1]='o';
    //escriptura=2;
}

char getKey(){
    return keyBuffer[lectura];
}


int empty_keyBuffer(){
    if (keyBuffer[lectura] == NULL) return 1; //keyBuffer vacio
    return 0;
}

void actualitzaLectura(){
    keyBuffer[lectura] = NULL;
    lectura = (lectura+1) % tam_buff;
}

void actualitzaEscriptura(char c){
    if(c != NULL){
        if(keyBuffer[escriptura] == NULL){ //Si tenemos espacio en el buffer escribimos (NULL --> 0)
            keyBuffer[escriptura] = c;
            escriptura = (escriptura +1) % tam_buff; 
        }
    }
}
