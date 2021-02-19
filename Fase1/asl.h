#ifndef ASL_H 
#define ASL_H 

// Funzioni dedicate all'utilizzo delle liste di semafori


#define MAXPROC 20
#define MAXINT 4294967295
#define HIDDEN static
#define NULL 0
#define TRUE            1
#define FALSE           0

// Array di semafori non attivi
HIDDEN semd_t semd_table[MAXPROC + 2];
// Puntatore alla lista di semafori liberi non in uso
HIDDEN semd_t* semdFree_h;
// Puntatore alla lista dei semafori attualmente in uso
HIDDEN semd_t* semd_h;  



int insertBlocked(int *semAdd, pcb_t *p);

pcb_t* removeBlocked(int *semAdd);

pcb_t* outBlocked(pcb_t *p);

pcb_t* headBlocked(int *semAdd);

void initASL();

#endif // ASL_H