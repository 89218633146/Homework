#include"Menu.h"
#include<PDCurses/curses.h>
#include"Politra.h"


Menu* CreateMenu(GameSize gameSize)
{
    Menu* menu = new Menu;
    menu->gameSize = gameSize;
    menu->menuStrings[Menu::START_GAME] = "Start game";
    menu->menuStrings[Menu::TABLE_RECORD] = "Table records";
    menu->menuStrings[Menu::EXIT] = "Exit";
    menu->currentPoint = Menu::START_GAME;
    return menu;
}
void DestroyMenu(Menu* menu)
{
    delete menu;
}
void PrintMenu(Menu* menu)
{
    if(!menu){ //проверяем на noolptr
        return ;
    }
    attron(COLOR_PAIR(MENU_POL));//инициализировали политру
    for(int i = 0; i < menu->gameSize.width; ++i){
        for(int j = 0; j < menu->gameSize.height; ++j){
            move(i,j);
            addch (' ');
        }
    for(int i = 0; i < Menu::COUNT; ++i){
    mvprintw(i, 1, "%s", menu->menuStrings[i]);
    }
    }
    move(menu->currentPoint, 0);
    addch('*');
    attroff(COLOR_PAIR(MENU_POL));//отключение атрибутов
}
GameState RunMenu(Menu* menu, Menu::MenuKey key)
{
        if(!menu){
            return MENU;
        }
    switch (key) {
    case Menu::UP://нажата клавиша вверх
        if(menu->currentPoint != Menu::FIRST_POINT)//если мы находимся не на самой верхней поз.
            --menu->currentPoint;//мы уменьшаем
        return MENU;
    case Menu::DOWN:
       if(menu->currentPoint != Menu::LAST_POINT)
            ++menu->currentPoint;
        return MENU;
    case Menu::ENTER:
    {
        switch (menu->currentPoint) {
        case Menu::START_GAME:
            return BOARD;
        case Menu::TABLE_RECORD:
            return MENU;
        case Menu::EXIT:
            return EXIT;
        default:
            break;
        }
      }
    }
     return MENU;
}
