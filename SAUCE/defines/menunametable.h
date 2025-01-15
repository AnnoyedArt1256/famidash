const unsigned char game_main_menu[284]={ // level select
0x03,0x02,0x03,0x3f,0xff,0x03,0x05,0x0a,0x0b,0x06,0x0e,0x03,0x04,0x06,0x0e,0x0e,
0x07,0x0e,0x03,0x04,0x07,0x0a,0x0b,0xff,0x03,0x0d,0x08,0x05,0x03,0x04,0x08,0x05,
0x05,0x09,0x05,0x03,0x04,0x09,0xff,0x03,0x8d,0x5c,0xfe,0x03,0x11,0x5d,0xff,0x03,
0x0b,0xfe,0x03,0x11,0x8e,0xfe,0xff,0x03,0x0b,0xfe,0x03,0x13,0xff,0x03,0x0b,0xfe,
0x03,0x13,0xff,0x03,0x0b,0xfe,0x02,0x02,0xfe,0x03,0x10,0xff,0x03,0x0b,0x6c,0xfe,
0x03,0x11,0x6d,0xff,0x03,0x07,0x6e,0xff,0x03,0x19,0x6f,0xff,0x03,0x03,0x7e,0xff,
0x03,0x07,0xee,0xef,0xf2,0xed,0xe1,0xec,0xff,0xed,0xef,0xe4,0xe5,0xff,0x03,0x06,
0x7f,0xff,0x03,0x07,0x7c,0xfe,0x03,0x11,0x7d,0xff,0x03,0x2f,0xf0,0xf2,0xe1,0xe3,
0xf4,0xe9,0xe3,0xe5,0xff,0xed,0xef,0xe4,0xe5,0xff,0x03,0x0e,0x7c,0xfe,0x03,0x11,
0x7d,0xff,0x03,0x65,0x2a,0xff,0x03,0x1d,0x2a,0x06,0x07,0x11,0x03,0x05,0x10,0x11,
0x03,0x06,0x10,0x11,0x03,0x06,0x10,0x11,0x03,0x04,0x06,0x07,0x08,0x09,0x2a,0x13,
0x03,0x04,0x12,0x13,0x03,0x06,0x12,0x13,0x03,0x06,0x12,0x13,0x03,0x03,0x2a,0x08,
0x09,0x2e,0x2f,0x06,0x07,0x13,0x03,0x03,0x12,0x13,0x03,0x06,0x12,0x13,0x03,0x06,
0x12,0x13,0x03,0x02,0x06,0x07,0x2e,0x2f,0x3e,0x3f,0x08,0x09,0x2a,0x13,0x03,0x02,
0x12,0x13,0x03,0x06,0x12,0x13,0x03,0x06,0x12,0x13,0x13,0x2a,0x08,0x09,0x3e,0x3f,
0x02,0x03,0x3f,0x00,0x00,0x50,0x10,0x40,0x50,0x00,0x03,0x0a,0x84,0x21,0x00,0x03,
0x02,0x01,0x00,0x03,0x05,0x04,0x01,0x00,0x00,0x04,0x05,0x03,0x03,0x01,0x00,0x03,
0x08,0x41,0x00,0x03,0x05,0x14,0x00,0x03,0x06,0x00,0x03,0x00
};
const unsigned char gameover[187]={
0x03,0x02,0xfe,0x02,0x03,0x02,0xfe,0x02,0x03,0x10,0xfe,0xfe,0x02,0xfe,0x03,0x02,
0x02,0x02,0xfe,0x02,0xfe,0xfe,0x02,0xfe,0x02,0x03,0x08,0xfe,0xfe,0x02,0x03,0x05,
0xfe,0x03,0x02,0x02,0xfe,0x03,0x02,0x02,0x02,0xfe,0x03,0x02,0x02,0x03,0x09,0xfe,
0x02,0xfe,0x03,0x13,0x02,0x02,0xfe,0x02,0x03,0x06,0xfe,0x03,0xde,0xc1,0xbb,0xc7,
0xbf,0xfe,0x03,0x3f,0xc9,0xdb,0xbf,0xcc,0xfe,0x03,0x99,0x98,0x99,0x98,0x99,0xfe,
0x03,0x1b,0xa8,0xa9,0xa8,0xa9,0xfe,0x03,0x5c,0x9a,0x9b,0xfe,0x03,0x1d,0xaa,0xab,
0xfe,0x03,0xb4,0x02,0xfe,0xfe,0x02,0x03,0x05,0xfe,0xfe,0x02,0x03,0x05,0xfe,0x03,
0x04,0x02,0x03,0x02,0xfe,0x03,0x02,0x02,0xfe,0x03,0x02,0x02,0xfe,0x02,0xfe,0x03,
0x04,0x02,0x03,0x09,0xfe,0x02,0xfe,0xfe,0x02,0x03,0x02,0xfe,0xfe,0x00,0x00,0x50,
0x10,0x40,0x50,0x00,0x03,0x0a,0x84,0x21,0x00,0x03,0x02,0x01,0x00,0x03,0x05,0x04,
0x01,0x00,0x00,0x04,0x05,0x00,0x04,0x05,0x01,0x00,0x03,0x03,0x44,0x00,0x03,0x03,
0x41,0x00,0x03,0x05,0x14,0x00,0x03,0x06,0x00,0x03,0x00
};


const unsigned char game_start_screen[293]={
0x01,0xff,0x01,0x87,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x22,0x23,
0x22,0x2b,0x2c,0x2c,0xff,0x01,0x0f,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,
0x39,0x32,0x33,0x3a,0x3b,0x3c,0x3d,0xff,0x01,0x0f,0x40,0xff,0x42,0x43,0x44,0x45,
0x46,0x47,0x48,0x49,0x42,0x43,0x4a,0x4b,0x4c,0x4c,0xff,0x01,0xaf,0x54,0x55,0x56,
0x57,0xff,0xff,0x50,0x51,0x52,0x53,0xff,0xff,0x54,0x55,0x56,0x57,0xff,0x01,0x0f,
0x64,0x65,0x66,0x67,0xff,0xff,0x60,0x61,0x62,0x63,0xff,0xff,0x58,0x59,0x5a,0x5b,
0xff,0x01,0x0f,0x74,0x75,0x76,0x77,0xff,0xff,0x70,0x71,0x72,0x73,0xff,0xff,0x68,
0x69,0x6a,0x77,0xff,0x01,0x0f,0x84,0x85,0x86,0x87,0xff,0xff,0x80,0x81,0x82,0x83,
0xff,0xff,0x84,0x85,0x86,0x87,0xff,0x01,0xc7,0x10,0x11,0x01,0x06,0x10,0x11,0x01,
0x06,0x10,0x11,0x01,0x06,0x10,0x11,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,
0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,
0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,
0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,
0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,
0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,
0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,
0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x00,0x01,0x09,0x55,0x01,0x03,0x00,
0x01,0x0b,0x55,0x44,0x11,0x55,0x00,0x01,0x09,0xf0,0x01,0x07,0xff,0x01,0x07,0x0f,
0x01,0x06,0x0f,0x01,0x00
};




const unsigned char customizescreen[254]={
0x03,0x02,0x03,0x3f,0x06,0x07,0x06,0x07,0x0f,0xff,0x03,0x1a,0x08,0x09,0x08,0x09,
0xff,0x03,0x1b,0x06,0x07,0x0f,0xff,0x03,0x05,0xe3,0xf5,0xf3,0xf4,0xef,0xed,0xe9,
0xfa,0xe5,0xff,0xe9,0xe3,0xef,0xee,0xff,0x03,0x03,0xd0,0xa1,0xff,0x03,0x02,0x08,
0x09,0xff,0x03,0x18,0xd0,0xa0,0xff,0x03,0x02,0x0f,0xff,0x03,0x2d,0x12,0x13,0xff,
0x03,0x1d,0x20,0x21,0xff,0x03,0x1d,0x30,0x31,0xff,0x03,0x1d,0x10,0x11,0xff,0x03,
0x54,0x12,0x13,0xff,0x03,0x06,0x12,0x13,0xff,0x03,0x06,0x12,0x13,0xff,0x03,0x0b,
0x48,0x49,0xff,0x03,0x06,0x4a,0x4b,0xff,0x03,0x06,0x4c,0x4d,0xff,0x03,0x0b,0x58,
0x59,0xff,0x03,0x06,0x5a,0x5b,0xff,0x03,0x06,0x5c,0x5d,0xff,0x03,0x0b,0x10,0x11,
0xff,0x03,0x06,0x10,0x11,0xff,0x03,0x06,0x10,0x11,0xff,0x03,0xc5,0x0f,0xff,0x03,
0x1d,0x0f,0x06,0x07,0xff,0x03,0x1b,0x06,0x07,0x08,0x09,0x0f,0xff,0x03,0x03,0xf0,
0xf2,0xe5,0xf3,0xf3,0xff,0xe2,0xff,0xf4,0xef,0xff,0xf2,0xe5,0xf4,0xf5,0xf2,0xee,
0xff,0x03,0x04,0x0f,0x08,0x09,0x06,0x07,0x06,0x07,0xff,0x03,0x17,0x06,0x07,0x06,
0x07,0x08,0x09,0x08,0x09,0x0f,0xff,0x03,0x15,0x0f,0x08,0x09,0x08,0x09,0x02,0x03,
0x3f,0xd0,0x10,0x00,0x03,0x05,0x17,0x00,0x03,0x05,0x01,0x00,0x03,0x02,0x08,0x02,
0x00,0x03,0x03,0x80,0x00,0x80,0x20,0x00,0x20,0x00,0x03,0x08,0x10,0x00,0x03,0x05,
0x40,0xd7,0x10,0x00,0x03,0x03,0x40,0x7d,0x00,0x03,0x06,0x00,0x03,0x00
};


