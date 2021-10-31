#include "../include/console.h"
#include <string.h>
#include <stdio.h>

void print_character(char text) {

        VGA_MEMORY[j] = text;
        VGA_MEMORY[j+1] = 0x17;

}


void print_string(char* text) {
	
	unsigned int i = 0;
        while (text[i] != '\0') {
		VGA_MEMORY[j] = text[i];
		VGA_MEMORY[j+1] = 0x47;
		i++;
		j = j + 2;
	}
}

void print_line(char* text) {

	unsigned int i = 0;

        while (text[i] !=  '\0') {
		
		VGA_MEMORY[j] = text[i];
		VGA_MEMORY[j+1] = 0x17;
		i++;
		j = j + 2;
	}

	j = j + 2;
	VGA_MEMORY[j] = '\n';
 
}
