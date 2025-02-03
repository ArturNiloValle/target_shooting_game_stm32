#include "figuras.h"

static const uint16_t  target_shoooting_grande [] = {

		 0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,
		 0b0000000000001111,  0b1111110000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000011,  0b1000001110000000,  0b0000000000000000,  0b0000000000000010,  0b0000000000000000,  0b0000000000000000,
		 0b0000000000001111,  0b1111111000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000001111,  0b1111001111000000,  0b0000000000000000,  0b0000000000000110,  0b0000000000000000,  0b0000000000000000,
		 0b0000000000011100,  0b1110011000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000001100,  0b0111100111000000,  0b0000000000000000,  0b0000000100000000,  0b0000000000000000,  0b0000000000000000,
		 0b0000000000011000,  0b1110011000000000,  0b0000000000000000,  0b0000000000000000,  0b1000000000011000,  0b0011100111000000,  0b0000000000000000,  0b0000001100000000,  0b0000000000000000,  0b0000000000000000,
		 0b0000000000011000,  0b1110001000000000,  0b0000000000000000,  0b0000000000000001,  0b1000000000011000,  0b0001000111000000,  0b0000000000000000,  0b0000001100000000,  0b0000000000000000,  0b0000000000000000,
		 0b0000000000000000,  0b1110000000111100,  0b0011110110000111,  0b1111000111100011,  0b1111000000011111,  0b1000000111011100,  0b0000111100000111,  0b1000111111001110,  0b0111101110000001,  0b1111110000000000,
		 0b0000000000000000,  0b1110000001111111,  0b0001111111001111,  0b1111001111110001,  0b1100000000001111,  0b1111000111101110,  0b0001111110001111,  0b1100011110001110,  0b0011110111000011,  0b1111110000000000,
		 0b0000000000000000,  0b1110000001100111,  0b0000110111011100,  0b1110011100011001,  0b1000000000000111,  0b1111100111000110,  0b0011000111011100,  0b0110011100000110,  0b0001100011000111,  0b0011100000000000,
		 0b0000000000000000,  0b1110000001101111,  0b0000110010011100,  0b1110011000011001,  0b1000000000000000,  0b0111100111000110,  0b0111000011011000,  0b0110011100000110,  0b0001100011100111,  0b0011100000000000,
		 0b0000000000000000,  0b1110000000111111,  0b0000110000001100,  0b1100011111111001,  0b1000000000010000,  0b0001100111000110,  0b0111000011011000,  0b0110011100000110,  0b0001100011100011,  0b0011000000000000,
		 0b0000000000000000,  0b1110000011100111,  0b0000110000001111,  0b1000011100000001,  0b1000000000011000,  0b0001100111000110,  0b0111000011011000,  0b0110011100000110,  0b0001100011100011,  0b1110000000000000,
		 0b0000000000000000,  0b1110000011000111,  0b0000110000011000,  0b0000011000000001,  0b1001000000011100,  0b0001100111000110,  0b0011000111011100,  0b0110011100100110,  0b0001100011100110,  0b0000000000000000,
		 0b0000000000000000,  0b1110000011101111,  0b0000110000011111,  0b1100001100011001,  0b1101000000011110,  0b0011000111000110,  0b0011100110001100,  0b1100001101000110,  0b0001100011100111,  0b1111000000000000,
		 0b0000000000000011,  0b1111000001111011,  0b1011111100001111,  0b1110000111110000,  0b1111000000011011,  0b1110001111101111,  0b1001111100000111,  0b1000001111001111,  0b1111110111110011,  0b1111100000000000,
		 0b0000000000000000,  0b0000000000000000,  0b0000000000011100,  0b0110000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000111,  0b0001100000000000,
		 0b0000000000000000,  0b0000000000000000,  0b0000000000011000,  0b0110000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000111,  0b0001100000000000,
		 0b0000000000000000,  0b0000000000000000,  0b0000000000001111,  0b1100000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000011,  0b1111000000000000,
		 0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000
};

static const uint16_t gun_shot_title0[] = {

		  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000001110000,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000010101000,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000100000100,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0000110000000001,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000100100100,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000011111,  0b1111111111100010,  0b1000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000000010,  0b0000000000000000,
		  0b0000000000000000,  0b0011111111100100,  0b1000100000011010,  0b1000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000100010,  0b0000000000000000,
		  0b0000000000000000,  0b0100000000001001,  0b1100010001100110,  0b1100000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000000010,  0b0000000000000000,
		  0b0000000000000000,  0b0100000000010000,  0b0000011110000000,  0b0100000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010000100001,  0b0000000000000000,
		  0b0000000000000000,  0b0100000011010000,  0b0000100000000000,  0b1000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010000000001,  0b0000000000000000,
		  0b0000000000000000,  0b0100001100100111,  0b1111111111111111,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000011010101011,  0b0000000000000000,
		  0b0000000000000000,  0b0100110001010101,  0b0010000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010000000001,  0b0000000000000000,
		  0b0000000000000000,  0b0011000001001011,  0b0010000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010000100001,  0b0000000000000000,
		  0b0000000000000000,  0b0000000010010001,  0b0010000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000000010,  0b0000000000000000,
		  0b0000000000000000,  0b0000000010010000,  0b1001000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000100010,  0b0000000000000000,
		  0b0000000000000000,  0b0000000010100000,  0b1001000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000000010,  0b0000000000000000,
		  0b0000000000000000,  0b0000000001100000,  0b0100100000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000100100100,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0100100000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000100000100,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0011100000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000010101000,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000001110000,  0b0000000000000000
};

static const uint16_t gun_shot_title1[] = {

		  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000010000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000001110000,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0100100000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000010101000,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001001000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000100000100,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0000110000000001,  0b0000101000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000100100100,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000011111,  0b1111111111100010,  0b1011001000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000000010,  0b0000000000000000,
		  0b0000000000000000,  0b0011111111100110,  0b0000100000011010,  0b1000100000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000100010,  0b0000000000000000,
		  0b0000000000000000,  0b0100000000001111,  0b0000010001100110,  0b1100000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000000010,  0b0000000000000000,
		  0b0000000000000000,  0b0100000000010000,  0b0000011110000000,  0b0100000111000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010000100001,  0b0000000000000000,
		  0b0000000000000000,  0b0100000011010000,  0b0000100000000000,  0b1001000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010000000001,  0b0000000000000000,
		  0b0000000000000000,  0b0100001100100111,  0b1111111111111111,  0b0001100000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000011010101011,  0b0000000000000000,
		  0b0000000000000000,  0b0100110001010101,  0b0010000000000000,  0b0000100000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010000000001,  0b0000000000000000,
		  0b0000000000000000,  0b0011000001001011,  0b0010000000000000,  0b0010100000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010000100001,  0b0000000000000000,
		  0b0000000000000000,  0b0000000010010001,  0b0010000000000000,  0b0000101000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000000010,  0b0000000000000000,
		  0b0000000000000000,  0b0000000010010000,  0b1001000000000000,  0b0000010000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000100010,  0b0000000000000000,
		  0b0000000000000000,  0b0000000010100000,  0b1001000000000000,  0b0001000010000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000000010,  0b0000000000000000,
		  0b0000000000000000,  0b0000000001100000,  0b0100100000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000100100100,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0100100000000000,  0b0000000000100000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000100000100,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0011100000000000,  0b0000100000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000010101000,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000001110000,  0b0000000000000000
};
static const uint16_t gun_shot_title2 [] = {

		  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000001110000,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010010000100,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000010101000,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000100000100,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0000110000000001,  0b0001000010100000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000100100100,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000011111,  0b1111111111100010,  0b1000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000000010,  0b0000000000000000,
		  0b0000000000000000,  0b0011111111100100,  0b1000100000011010,  0b1000010000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000100010,  0b0000000000000000,
		  0b0000000000000000,  0b0100000000001001,  0b1100010001100110,  0b1100000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000000010,  0b0000000000000000,
		  0b0000000000000000,  0b0100000000010000,  0b0000011110000000,  0b0100100000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010000100001,  0b0000000000000000,
		  0b0000000000000000,  0b0100000011010000,  0b0000100000000000,  0b1000000000100000,  0b0000000000000000,  0b0000011100000000,  0b0000000000000000,  0b0000000000000000,  0b0000010000000001,  0b0000000000000000,
		  0b0000000000000000,  0b0100001100100111,  0b1111111111111111,  0b0000000000000000,  0b0100000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000011010101011,  0b0000000000000000,
		  0b0000000000000000,  0b0100110001010101,  0b0010000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010000000001,  0b0000000000000000,
		  0b0000000000000000,  0b0011000001001011,  0b0010000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010000100001,  0b0000000000000000,
		  0b0000000000000000,  0b0000000010010001,  0b0010000000000000,  0b0000000001000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000000010,  0b0000000000000000,
		  0b0000000000000000,  0b0000000010010000,  0b1001000000000000,  0b0000001000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000100010,  0b0000000000000000,
		  0b0000000000000000,  0b0000000010100000,  0b1001000000000000,  0b0000000000010000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000000010,  0b0000000000000000,
		  0b0000000000000000,  0b0000000001100000,  0b0100100000000000,  0b0000010000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000100100100,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0100100000000000,  0b0000001000000100,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000100000100,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0011100000000000,  0b0010000010000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000010101000,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000010000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000001110000,  0b0000000000000000
};
static const uint16_t gun_shot_title3 [] = {

		  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000001110000,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000010000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000010101000,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000001000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000100000100,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0000110000000001,  0b0000010000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000100100100,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000011111,  0b1111111111100010,  0b1000000000001000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000000010,  0b0000000000000000,
		  0b0000000000000000,  0b0011111111100100,  0b1000100000011010,  0b1000000010000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000100010,  0b0000000000000000,
		  0b0000000000000000,  0b0100000000001001,  0b1100010001100110,  0b1100000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000000010,  0b0000000000000000,
		  0b0000000000000000,  0b0100000000010000,  0b0000011110000000,  0b0100000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010000100001,  0b0000000000000000,
		  0b0000000000000000,  0b0100000011010000,  0b0000100000000000,  0b1000000000000000,  0b0000000100000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010000000001,  0b0000000000000000,
		  0b0000000000000000,  0b0100001100100111,  0b1111111111111111,  0b0000000000000100,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000111000000,  0b0000011010101011,  0b0000000000000000,
		  0b0000000000000000,  0b0100110001010101,  0b0010000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010000000001,  0b0000000000000000,
		  0b0000000000000000,  0b0011000001001011,  0b0010000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010000100001,  0b0000000000000000,
		  0b0000000000000000,  0b0000000010010001,  0b0010000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000000010,  0b0000000000000000,
		  0b0000000000000000,  0b0000000010010000,  0b1001000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000100010,  0b0000000000000000,
		  0b0000000000000000,  0b0000000010100000,  0b1001000000000000,  0b0000000000000010,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000000010,  0b0000000000000000,
		  0b0000000000000000,  0b0000000001100000,  0b0100100000000000,  0b0000000010000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000100100100,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0100100000000000,  0b0000000000010000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000100000100,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0011100000000000,  0b0000000000000000,  0b1000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000010101000,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000001110000,  0b0000000000000000
};
static const uint16_t gun_shot_title4 [] = {

		  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0001000001000010,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000001110000,  0b0000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000100000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000010101000,  0b0100000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0001000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0100000100000100,  0b0000100100000000,
		  0b0000000000000000,  0b0000000000000000,  0b0000110000000001,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010100100101,  0b0010000000000000,
		  0b0000000000000000,  0b0000000000011111,  0b1111111111100010,  0b1000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000000010,  0b0011010000000000,
		  0b0000000000000000,  0b0011111111100100,  0b1000100000011010,  0b1000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000100010,  0b0110000000000000,
		  0b0000000000000000,  0b0100000000001001,  0b1100010001100110,  0b1100000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000000010,  0b1010000000000000,
		  0b0000000000000000,  0b0100000000010000,  0b0000011110000000,  0b0100000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010001101001,  0b0000000000000000,
		  0b0000000000000000,  0b0100000011010000,  0b0000100000000000,  0b1000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010101010001,  0b0000000000000000,
		  0b0000000000000000,  0b0100001100100111,  0b1111111111111111,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000011011111011,  0b0100111000000000,
		  0b0000000000000000,  0b0100110001010101,  0b0010000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010001110001,  0b0000000000000000,
		  0b0000000000000000,  0b0011000001001011,  0b0010000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000010100110001,  0b0100000000000000,
		  0b0000000000000000,  0b0000000010010001,  0b0010000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001100001010,  0b1000000000000000,
		  0b0000000000000000,  0b0000000010010000,  0b1001000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000100010,  0b0100100000000000,
		  0b0000000000000000,  0b0000000010100000,  0b1001000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000001000000010,  0b0011000000000000,
		  0b0000000000000000,  0b0000000001100000,  0b0100100000000000,  0b0000000000000000,  0b0001000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000100100100,  0b0001000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0100100000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0001000100000100,  0b0000000010000000,
		  0b0000000000000000,  0b0000000000000000,  0b0011100000000000,  0b0000000000000100,  0b0000001000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000010101000,  0b1000000000000000,
		  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000001000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000000000000,  0b0000000001110000,  0b0000100000000000
};


FigDef fig_target_shooting = {160,19,target_shoooting_grande};

FigDef fig_gun_shot_title[] = {{160,19,gun_shot_title0},{160,19,gun_shot_title1}, {160,19,gun_shot_title2}, {160,19,gun_shot_title3}, {160,19,gun_shot_title4}} ;

static const uint16_t soldado0[]={0b0000000000000000,
								0b0001000000000000,
								0b0011111000000000,
								0b0011000000000000,
								0b0011100000000000,
								0b0110110000000000,
								0b0100011000000000};

FigDef soldado = {7,7,soldado0};



