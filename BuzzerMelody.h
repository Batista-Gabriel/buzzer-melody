/*Those melodies were made to work with buzzersong.h that you may download at https://github.com/SrManinka/buzzer-song-maker
 * You may use it with ToneMelody function https://www.arduino.cc/en/Tutorial/toneMelody but will have to do some adjustments
 * If you find any bug or want to contribute, please coment at https://github.com/SrManinka/buzzer-melody
 * 
 * Thank You :D
 */

#include "pitches.h"

//respective Number of Notes
#define marioNotes 12
#define coinNotes 2
#define pacManNotes 37


// Mario's song melody:
int marioMelody[] = {
  NOTE_F7, NOTE_C7, NOTE_A6, NOTE_D7, NOTE_E7, NOTE_D7, NOTE_CS7, NOTE_DS7, NOTE_CS7, NOTE_C7, NOTE_AS7, NOTE_C7
};

// Mario's  song time marking
int marioTime[] = {
  4, 4, 4, 6, 6, 6, 6, 6, 6, 6, 8, 1
};

// Mario's coin melody:
int coinMelody[] = {
NOTE_A6, NOTE_E6
};

// Mario's coin time marking:
int coinTime[] = {
  8,4
};
//pacman's start song melody
int pacManMelody[] = {
 NOTE_C6, NOTE_C7, NOTE_G6, NOTE_E6, NOTE_C7, NOTE_G6, NOTE_E6,0, 
 NOTE_CS6, NOTE_CS7, NOTE_GS6, NOTE_F6,NOTE_CS7, NOTE_GS6,NOTE_F6,0, 
 NOTE_C6, NOTE_C7, NOTE_G6, NOTE_E6, NOTE_C7, NOTE_G6, NOTE_E6,0,  
 NOTE_E6, NOTE_F6, NOTE_FS6,0, NOTE_FS6, NOTE_G6, NOTE_GS6, 0,NOTE_GS6,NOTE_A6, NOTE_AS6, 0,NOTE_C7  
};

// packman's time marking:
int pacManTime[] = {
 4,6,6,6,12,12,12,6,
 4,6,6,6,12,12,12,6,
 4,6,6,6,12,12,12,6,
 12,14,14,12,12,14,14,12,12,14,14,12,6
};
