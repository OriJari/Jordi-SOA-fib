#define tam_buff 5

char keyBuffer[tam_buff]; //Buffer que guarda las teclas apretadas
int lectura;
int escriptura;

void init_keyBuffer();

char getKey();

int empty_keyBuffer();

void actualitzaEscriptura(char c);

void actualitzaLectura();


