#include "../include/console.h"


void print_character(char text) {

        VGA_MEMORY[CURR_CURSOR] = text;
        VGA_MEMORY[CURR_CURSOR+1] = 0x17;
	CURR_CURSOR = CURR_CURSOR + 2;
}


void print_string(char* text) {

	unsigned int i = 0;
	while (text[i] != '\0'){
		VGA_MEMORY[CURR_CURSOR] = text[i];
		VGA_MEMORY[CURR_CURSOR+1] = 0x47;
		i++;
		CURR_CURSOR = CURR_CURSOR + 2;
	}
}

void print_line(char* text) {
	

        print_string(text);
 
	CURR_CURSOR = CURR_CURSOR + (160 - CURR_CURSOR % 160); 
}
