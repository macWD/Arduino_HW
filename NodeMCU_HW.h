/************************* NodeMCU Definitions ******************************/
// PIN MAPPING
// NodeMCU pin labels matched to the GPIOs used in the Arduino ditigal pin functions.
#define D0  16 // WAKE -- must be high at boot
#define D1  5
#define D2  4
#define D3  0  // _FLASH -- must be high for boot
#define D4  2  // _LED -- msut be high for boot
#define D5  14
#define D6  12
#define D7  13
#define D8  15 // CS -- must be low for boot
#define RX  3
#define TX  1  // Serial debug -- must be high for boot
#define SD2 9
#define SD3 10
// Defines by secondary function
#define RXD0   3
#define TXD0   1
#define TXD1   2
#define RXD2   13
#define TXD2   15
#define FLASH  0 // Active low
#define USER   16
#define WAKE   16 // Active low
#define HSCLK  14
#define HMISO  12
#define HMOSI  13
#define HCS    15
