#include "Politra.h"
#include <PDCurses/curses.h>

void InitPolitra()
{
 start_color();//включить работу с цветами
 init_pair(BOARD_POL, COLOR_PAIRS, COLOR_YELLOW);
}
