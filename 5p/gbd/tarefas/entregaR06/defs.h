
#ifndef DEFS_FILE
#define DEFS_FILE

#define TAM_PAGINA 512
#define TAM_UNION TAM_PAGINA - sizeof(int)

typedef struct Registro
{
  int seqAluno;
  char matriculaAluno[12];
  char nomeAluno[36];
} Registro;

#endif