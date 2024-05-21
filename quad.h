typedef struct quads quads;
struct quads
{
	char *opr;
	char *op1;
	char *op2;
	char *res;
};

struct quads liste[2000];
int qc = 0;

void generer(char *a, char *b, char *c, char *d);
void quadL(int i, char *b, char *c, char *d);
char *convert(int i);
void quad(int i, char *b, char *c, char *d);
void afficher_qdr();
void delete_quad();
void assembler();
