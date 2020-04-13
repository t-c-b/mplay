#include <stdlib.h>

#include "sound_driver.h"

int main(int argc, char ** argv)
{
  SoundDriver snd;
  while(1) {
    int rnd = rand();
    snd.write(reinterpret_cast<char*>(&rnd), sizeof(int));
  }
  return 0;
}
