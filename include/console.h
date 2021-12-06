static char* const VGA_MEMORY = (char*) 0xb8000;

static const int VGA_WIDTH = 80;
static const int VGA_HEIGHT = 25;
static unsigned int CURR_CURSOR = 0;


enum Color {
        BLACK = 0,
        BLUE,
        GREEN,
        CYAN,
        RED,
        PURPLE,
        BROWN,
        GRAY,
        DARK_GRAY,
        LIGHT_BLUE,
        LIGHT_GREEN,
        LIGHT_CYAN,
        LIGHT_RED,
        LIGHT_PURPLE,
        YELLOW,
        WHITE
};

extern int terminal_font_color;

void print_character(char text);
void print_string(char* text);
void print_line(char* text);

void set_terminal_font_color(enum Color c);
void print_character_with_color(char text, enum Color c);
void print_string_with_color(char* text, enum Color c);
void print_line_with_color(char* text, enum Color c);
void shift_terminal_up();
