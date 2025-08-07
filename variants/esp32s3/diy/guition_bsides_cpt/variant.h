#undef GPS_RX_PIN
#undef GPS_TX_PIN

// I2C
#define I2C_SCL 4
#define I2C_SDA 8
// UART
#define UART_TX 17
#define UART_RX 18


#define BUTTON_PIN 0

// Radio
#define USE_SX1262

#define LORA_SCK 16
#define LORA_MOSI 15
#define LORA_MISO 7
#define SX126X_CS 5
#define SX126X_RESET 9
#define SX126X_BUSY 14
#define SX126X_DIO1 6
#define SX126X_DIO3_TCXO_VOLTAGE 1.8
#define TCXO_OPTIONAL

// #define SX126X_DIO2_AS_RF_SWITCH // All switching is performed with DIO2, it is automatically inverted using circuitry.
// CDEBYTE EoRa-S3 uses an XTAL, thus we do not need DIO3 as TCXO voltage reference. Don't define SX126X_DIO3_TCXO_VOLTAGE for
// simplicity rather than defining it as 0.

// #define SX126X_MAX_POWER
//     22 // E22-900MM22S and E22-400MM22S have a raw SX1262 or SX1268 respsectively, they are rated to output up and including 22
//        // dBm out of their SX126x IC.

// Compatibility with old variant.h file structure - FIXME: this should be done in the respective radio interface modules to clean
// up all variants.
#define LORA_CS SX126X_CS
#define LORA_DIO1 SX126X_DIO1

