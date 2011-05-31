/****************************************************	
 * sketch = Gatekeeper
 *
 * Nottingham Hackspace
 * CC-BY-SA
 *
 * Source = http://wiki.nottinghack.org.uk/wiki/Gatekeeper
 * Target controller = Arduino 328 (Nanode v5)
 * Clock speed = 16 MHz
 * Development platform = Arduino IDE 0022
 * C compiler = WinAVR from Arduino IDE 0022
 * 
 * 
 * This code is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
 *
 * Gatekeeper is the access control system at 
 * Nottingham Hackspace and is part of the 
 * Hackspace Instrumentation Project
 *
 * 
 ****************************************************/

/*
  These are the global config parameters for Gatekeeper
  Including Pin Outs and IP
  
*/


// Update these with values suitable for your network.
byte mac[]    = {  0xDE, 0xED, 0xBA, 0xFE, 0xFE, 0xED };
byte ip[]     = { 10, 0, 0, 60 }; // Gatekeeper's Reserved IP




// Door Bell Relay
// Volt Free switching
#define DOOR_BELL 10 // changed for nanode v1 cs 8

// Door Bell Button
// HIGH = PUSHED
// Interrupt PIN
#define DOOR_BUTTON 3
// timeout in mills for how often the doorbell can be rang
#define DOOR_BUTTON_TIMEOUT 5000
unsigned long doorTimeOut = 0;

// Status Indicator's 
// BLUE = UNLOCKED
// RED = LOCKED
#define BLUE_LED 5
#define RED_LED 6

// Magnetic Door Contact
#define MAG_CON 9
#define CLOSED HIGH
#define OPEN LOW
boolean magConState = CLOSED;

// Magnetic Door Relase
#define MAG_REL 4
#define UNLOCK HIGH
#define LOCK LOW

// timeout in millis for the how long the magnetic relase will stay unlocked
#define MAG_REL_TIMEOUT 5000

// RFID module Serial 9600N1
#define RFID_TX 0
#define RFID_RX 1
// query to read a serial number
byte query[8] = {
  0xAA, 0x00, 0x03, 0x25, 0x26, 0x00, 0x00, 0xBB};
unsigned char rfidReturn[255] = {};
unsigned long lastCardNumber;
// timeout in mills for how often the same card is read
#define CARD_TIMEOUT 3000
unsigned long cardTimeOut = 0;

// Keypad INT
#define KEYPAD A3

//Speaker
#define SPEAKER A2

//Last Man Out
#define LAST_MAN A1
#define IN HIGH
#define OUT LOW
boolean lastManState = OUT;

// MQTT 

// MQTT server on holly
byte server[] = { 10, 0, 0, 2 };
#define MQTT_PORT 83

// ClientId for connecting to MQTT
#define CLIENT_ID "Gatekeeper"

// Subscribe to topics
#define S_UNLOCK		"nh/gk/Unlock"

// Publish Topics

#define P_DOOR_STATE		"nh/gk/DoorState"
#define P_KEYPAD			"nh/gk/Keypad"
#define P_DOOR_BUTTON		"nh/gk/DoorButton"
#define P_RFID				"nh/gk/RFID"
#define P_LAST_MAN_STATE	"nh/gk/LastManState"



// Status Topic, use to say we are alive or DEAD (will)
#define P_STATUS "nh/gk/Status"













