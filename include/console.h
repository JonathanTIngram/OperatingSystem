static char* const VGA_MEMORY = (char*) 0xb8000;

static const int VGA_WIDTH = 80;
static const int VGA_HEIGHT = 25;
static int CURRENT_CURSOR = 0;
static unsigned int j = 0;


void print_character(char text);
void print_string(char* text);
void print_line(char* text);
