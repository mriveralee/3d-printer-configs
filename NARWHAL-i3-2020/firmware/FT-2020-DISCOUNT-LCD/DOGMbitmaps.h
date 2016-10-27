#define START_BMPWIDTH 	59	//Width in pixels - http://www.digole.com/tools/PicturetoC_Hex_converter.php
#define START_BMPHEIGHT 	64	//Height in pixels
#define START_BMPBYTEWIDTH 	8	//Width in bytes
const unsigned char start_bmp[574] PROGMEM = { //AVR-GCC, WinAVR
7, 224, 0, 63, 0, 0, 252, 0, 24, 24, 0, 255, 192, 3, 3, 0, 32, 4, 1, 255, 224, 4, 0, 128, 64, 2, 3, 255, 240, 8, 0, 64, 64, 2, 3, 255, 240, 8, 0, 64, 64, 2, 3, 255, 240, 8, 0, 64, 64, 2, 3, 255, 240, 8, 0, 64, 64, 2, 3, 255, 240, 8, 0, 64, 64, 2, 3, 255, 240, 8, 0, 64, 64, 2, 3, 255, 240, 8, 0, 64, 32, 4, 1, 255, 224, 4, 0, 128, 16, 8, 0, 255, 192, 2, 1, 0, 15, 240, 0, 127, 128, 1, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 224, 0, 63, 0, 0, 252, 0, 31, 248, 0, 192, 192, 3, 255, 0, 63, 252, 1, 0, 32, 7, 255, 128, 127, 254, 2, 0, 16, 15, 255, 192, 127, 254, 2, 0, 16, 15, 255, 192, 127, 254, 2, 0, 16, 15, 255, 192, 127, 254, 2, 0, 16, 15, 255, 192, 127, 254, 2, 0, 16, 15, 255, 192, 127, 254, 2, 0, 16, 15, 255, 192, 127, 254, 2, 0, 16, 15, 255, 192, 63, 252, 1, 0, 32, 7, 255, 128, 31, 248, 0, 128, 64, 3, 255, 0, 15, 240, 0, 127, 128, 1, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 224, 255, 255, 255, 255, 255, 255, 255, 224, 255, 255, 255, 255, 255, 255, 255, 224, 252, 63, 127, 255, 255, 255, 255, 224, 253, 255, 127, 255, 255, 255, 255, 224, 252, 99, 113, 198, 159, 255, 255, 224, 253, 221, 110, 186, 111, 255, 255, 224, 253, 221, 110, 134, 255, 255, 255, 224, 253, 221, 110, 190, 255, 255, 255, 224, 253, 227, 176, 198, 255, 255, 255, 224, 255, 255, 254, 255, 255, 255, 255, 224, 255, 255, 241, 255, 255, 255, 255, 224, 255, 255, 255, 254, 15, 255, 127, 224, 254, 1, 224, 127, 191, 255, 127, 224, 254, 1, 224, 127, 184, 227, 15, 224, 255, 207, 159, 159, 183, 93, 119, 224, 255, 207, 159, 159, 176, 223, 119, 224, 255, 207, 255, 159, 183, 221, 119, 224, 255, 207, 252, 127, 184, 227, 119, 224, 255, 207, 252, 127, 255, 255, 255, 224, 255, 207, 255, 159, 255, 255, 255, 224, 255, 207, 159, 159, 28, 113, 199, 224, 255, 207, 159, 158, 235, 174, 187, 224, 254, 1, 224, 127, 235, 190, 187, 224, 254, 1, 224, 127, 219, 189, 187, 224, 255, 255, 255, 255, 187, 187, 187, 224, 255, 255, 255, 255, 123, 183, 187, 224, 255, 255, 255, 254, 12, 96, 199, 224, 255, 255, 255, 255, 255, 255, 255, 224, 255, 255, 255, 255, 255, 255, 255, 224, 255, 255, 255, 255, 255, 255, 255, 224
};

// Here comes a compile-time operation to match the extruder symbols 
// on the info screen to the set number of extruders in configuration.h
// 
// When only one extruder is selected, the "1" on the symbol will not 
// be displayed.

#if EXTRUDERS == 1
	#define STATUS_SCREENWIDTH 		115	//Width in pixels
	#define STATUS_SCREENHEIGHT 	19	//Height in pixels
	#define STATUS_SCREENBYTEWIDTH 	15	//Width in bytes
	const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xE0,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0xE0,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x63,0x0C,0x60,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x47,0x0E,0x20,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4F,0x0F,0x20,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5F,0x0F,0xA0,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5E,0x07,0xA0,
	0x7F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x04,0x00,0x40,0x60,0x20,
	0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x82,0x00,0x40,0xF0,0x20,
	0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x82,0x00,0x40,0xF0,0x20,
	0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x04,0x00,0x40,0x60,0x20,
	0x7F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x82,0x08,0x00,0x5E,0x07,0xA0,
	0x7F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x04,0x10,0x00,0x5F,0x0F,0xA0,
	0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x04,0x10,0x00,0x4F,0x0F,0x20,
	0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x82,0x08,0x00,0x47,0x0E,0x20,
	0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x04,0x00,0x63,0x0C,0x60,
	0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0xE0,
	0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0x80,0x7F,0xFF,0xE0,
	0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0x80,0x00,0x00,0x00
	};

	#define STATUS_SCREENWIDTH 		115	//Width in pixels
	#define STATUS_SCREENHEIGHT 	19	//Height in pixels
	#define STATUS_SCREENBYTEWIDTH 	15	//Width in bytes
	const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xE0,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0xE0,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x61,0xF8,0x60,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0xF8,0x20,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0xF0,0x20,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x60,0x20,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x58,0x01,0xA0,
	0x7F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x04,0x00,0x5C,0x63,0xA0,
	0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x82,0x00,0x5E,0xF7,0xA0,
	0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x82,0x00,0x5E,0xF7,0xA0,
	0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x04,0x00,0x5C,0x63,0xA0,
	0x7F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x82,0x08,0x00,0x58,0x01,0xA0,
	0x7F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x04,0x10,0x00,0x40,0x60,0x20,
	0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x04,0x10,0x00,0x40,0xF0,0x20,
	0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x82,0x08,0x00,0x41,0xF8,0x20,
	0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x04,0x00,0x61,0xF8,0x60,
	0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0xE0,
	0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0x80,0x7F,0xFF,0xE0,
	0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0x80,0x00,0x00,0x00
	};
#elif EXTRUDERS == 2
	#define STATUS_SCREENWIDTH 		115	//Width in pixels
	#define STATUS_SCREENHEIGHT 	19	//Height in pixels
	#define STATUS_SCREENBYTEWIDTH 	15	//Width in bytes
	const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xE0,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0xE0,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x63,0x0C,0x60,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x47,0x0E,0x20,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4F,0x0F,0x20,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5F,0x0F,0xA0,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5E,0x07,0xA0,
	0x7F,0x80,0x00,0x3F,0xC0,0x00,0x00,0x00,0x00,0x41,0x04,0x00,0x40,0x60,0x20,
	0xFB,0xC0,0x00,0x79,0xE0,0x00,0x00,0x00,0x00,0x20,0x82,0x00,0x40,0xF0,0x20,
	0xF3,0xC0,0x00,0x76,0xE0,0x00,0x00,0x00,0x00,0x20,0x82,0x00,0x40,0xF0,0x20,
	0xEB,0xC0,0x00,0x7E,0xE0,0x00,0x00,0x00,0x00,0x41,0x04,0x00,0x40,0x60,0x20,
	0x7B,0x80,0x00,0x3D,0xC0,0x00,0x00,0x00,0x00,0x82,0x08,0x00,0x5E,0x07,0xA0,
	0x7B,0x80,0x00,0x3B,0xC0,0x00,0x00,0x00,0x01,0x04,0x10,0x00,0x5F,0x0F,0xA0,
	0xFB,0xC0,0x00,0x77,0xE0,0x00,0x00,0x00,0x01,0x04,0x10,0x00,0x4F,0x0F,0x20,
	0xFB,0xC0,0x00,0x70,0xE0,0x00,0x00,0x00,0x00,0x82,0x08,0x00,0x47,0x0E,0x20,
	0xFF,0xC0,0x00,0x7F,0xE0,0x00,0x00,0x00,0x00,0x41,0x04,0x00,0x63,0x0C,0x60,
	0x3F,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0xE0,
	0x1E,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0x80,0x7F,0xFF,0xE0,
	0x0C,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0x80,0x00,0x00,0x00
	};

	#define STATUS_SCREENWIDTH 		115	//Width in pixels
	#define STATUS_SCREENHEIGHT 	19	//Height in pixels
	#define STATUS_SCREENBYTEWIDTH 	15	//Width in bytes
	const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xE0,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0xE0,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x61,0xF8,0x60,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0xF8,0x20,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0xF0,0x20,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x60,0x20,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x58,0x01,0xA0,
	0x7F,0x80,0x00,0x3F,0xC0,0x00,0x00,0x00,0x00,0x41,0x04,0x00,0x5C,0x63,0xA0,
	0xFB,0xC0,0x00,0x79,0xE0,0x00,0x00,0x00,0x00,0x20,0x82,0x00,0x5E,0xF7,0xA0,
	0xF3,0xC0,0x00,0x76,0xE0,0x00,0x00,0x00,0x00,0x20,0x82,0x00,0x5E,0xF7,0xA0,
	0xEB,0xC0,0x00,0x7E,0xE0,0x00,0x00,0x00,0x00,0x41,0x04,0x00,0x5C,0x63,0xA0,
	0x7B,0x80,0x00,0x3D,0xC0,0x00,0x00,0x00,0x00,0x82,0x08,0x00,0x58,0x01,0xA0,
	0x7B,0x80,0x00,0x3B,0xC0,0x00,0x00,0x00,0x01,0x04,0x10,0x00,0x40,0x60,0x20,
	0xFB,0xC0,0x00,0x77,0xE0,0x00,0x00,0x00,0x01,0x04,0x10,0x00,0x40,0xF0,0x20,
	0xFB,0xC0,0x00,0x70,0xE0,0x00,0x00,0x00,0x00,0x82,0x08,0x00,0x41,0xF8,0x20,
	0xFF,0xC0,0x00,0x7F,0xE0,0x00,0x00,0x00,0x00,0x41,0x04,0x00,0x61,0xF8,0x60,
	0x3F,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0xE0,
	0x1E,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0x80,0x7F,0xFF,0xE0,
	0x0C,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0x80,0x00,0x00,0x00
	};
#else
	#define STATUS_SCREENWIDTH 		115	//Width in pixels
	#define STATUS_SCREENHEIGHT 	19	//Height in pixels
	#define STATUS_SCREENBYTEWIDTH 	15	//Width in bytes
	const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xE0,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0xE0,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x63,0x0C,0x60,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x47,0x0E,0x20,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4F,0x0F,0x20,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5F,0x0F,0xA0,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5E,0x07,0xA0,
	0x7F,0x80,0x00,0x3F,0xC0,0x00,0x3F,0xC0,0x00,0x41,0x04,0x00,0x40,0x60,0x20,
	0xFB,0xC0,0x00,0x79,0xE0,0x00,0x79,0xE0,0x00,0x20,0x82,0x00,0x40,0xF0,0x20,
	0xF3,0xC0,0x00,0x76,0xE0,0x00,0x76,0xE0,0x00,0x20,0x82,0x00,0x40,0xF0,0x20,
	0xEB,0xC0,0x00,0x7E,0xE0,0x00,0x7E,0xE0,0x00,0x41,0x04,0x00,0x40,0x60,0x20,
	0x7B,0x80,0x00,0x3D,0xC0,0x00,0x39,0xC0,0x00,0x82,0x08,0x00,0x5E,0x07,0xA0,
	0x7B,0x80,0x00,0x3B,0xC0,0x00,0x3E,0xC0,0x01,0x04,0x10,0x00,0x5F,0x0F,0xA0,
	0xFB,0xC0,0x00,0x77,0xE0,0x00,0x76,0xE0,0x01,0x04,0x10,0x00,0x4F,0x0F,0x20,
	0xFB,0xC0,0x00,0x70,0xE0,0x00,0x79,0xE0,0x00,0x82,0x08,0x00,0x47,0x0E,0x20,
	0xFF,0xC0,0x00,0x7F,0xE0,0x00,0x7F,0xE0,0x00,0x41,0x04,0x00,0x63,0x0C,0x60,
	0x3F,0x00,0x00,0x1F,0x80,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x70,0x00,0xE0,
	0x1E,0x00,0x00,0x0F,0x00,0x00,0x0F,0x00,0x01,0xFF,0xFF,0x80,0x7F,0xFF,0xE0,
	0x0C,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x01,0xFF,0xFF,0x80,0x00,0x00,0x00
	};

	#define STATUS_SCREENWIDTH 		115	//Width in pixels
	#define STATUS_SCREENHEIGHT 	19	//Height in pixels
	#define STATUS_SCREENBYTEWIDTH 	15	//Width in bytes
	const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xE0,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0xE0,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x61,0xF8,0x60,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0xF8,0x20,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0xF0,0x20,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x60,0x20,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x58,0x01,0xA0,
	0x7F,0x80,0x00,0x3F,0xC0,0x00,0x3F,0xC0,0x00,0x41,0x04,0x00,0x5C,0x63,0xA0,
	0xFB,0xC0,0x00,0x79,0xE0,0x00,0x79,0xE0,0x00,0x20,0x82,0x00,0x5E,0xF7,0xA0,
	0xF3,0xC0,0x00,0x76,0xE0,0x00,0x76,0xE0,0x00,0x20,0x82,0x00,0x5E,0xF7,0xA0,
	0xEB,0xC0,0x00,0x7E,0xE0,0x00,0x7E,0xE0,0x00,0x41,0x04,0x00,0x5C,0x63,0xA0,
	0x7B,0x80,0x00,0x3D,0xC0,0x00,0x39,0xC0,0x00,0x82,0x08,0x00,0x58,0x01,0xA0,
	0x7B,0x80,0x00,0x3B,0xC0,0x00,0x3E,0xC0,0x01,0x04,0x10,0x00,0x40,0x60,0x20,
	0xFB,0xC0,0x00,0x77,0xE0,0x00,0x76,0xE0,0x01,0x04,0x10,0x00,0x40,0xF0,0x20,
	0xFB,0xC0,0x00,0x70,0xE0,0x00,0x79,0xE0,0x00,0x82,0x08,0x00,0x41,0xF8,0x20,
	0xFF,0xC0,0x00,0x7F,0xE0,0x00,0x7F,0xE0,0x00,0x41,0x04,0x00,0x61,0xF8,0x60,
	0x3F,0x00,0x00,0x1F,0x80,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x70,0x00,0xE0,
	0x1E,0x00,0x00,0x0F,0x00,0x00,0x0F,0x00,0x01,0xFF,0xFF,0x80,0x7F,0xFF,0xE0,
	0x0C,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x01,0xFF,0xFF,0x80,0x00,0x00,0x00
	};
#endif // Extruders 

