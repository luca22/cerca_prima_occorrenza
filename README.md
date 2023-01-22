# cerca_prima_occorrenza

Creare i file cerca.h e cerca.c che consentano di utilizzare la seguente funzione:

extern int cerca_primo (const char *s, char c);


La funzione accetta come parametro un puntatore ad un vettore di char zero terminato (stringa C) in cui cercare la prima occorrenza del carattere passato col parametro c. La funzione restituisce l'indice di c nella stringa s (come al solito, partendo da 0 per il primo carattere). Nel caso il carattere non sia presente deve ritornare -1.
