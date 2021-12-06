#include "../include/console.h"

int terminal_font_color = GRAY;

void print_character(char text) {

        VGA_MEMORY[CURR_CURSOR] = text;
        VGA_MEMORY[CURR_CURSOR+1] = terminal_font_color;
	CURR_CURSOR = CURR_CURSOR + 2;
}


void print_string(char* text) {

	unsigned int i = 0;
	while (text[i] != '\0'){
		VGA_MEMORY[CURR_CURSOR] = text[i];
		VGA_MEMORY[CURR_CURSOR+1] = terminal_font_color;
		i++;
		CURR_CURSOR = CURR_CURSOR + 2;
	}
}

void print_line(char* text) {
	

        print_string(text);
 
	CURR_CURSOR = CURR_CURSOR + (160 - CURR_CURSOR % 160); 
}


void set_terminal_font_color(enum Color c) {

        terminal_font_color = c;
}

void print_character_with_color(char text, enum Color c) {

	set_terminal_font_color(c);
	print_character(text);
}

void print_string_with_color(char* text, enum Color c) {
	
	set_terminal_font_color(c);
	print_string(text);
}

void print_line_with_color(char* text, enum Color c) {

	set_terminal_font_color(c);
	print_line(text);
}

void shift_terminal_up() {

	for (int i = 0; i < CURR_CURSOR; i++) {
		
		VGA_MEMORY[i] = VGA_MEMORY[i + 160];
		
	}
}




