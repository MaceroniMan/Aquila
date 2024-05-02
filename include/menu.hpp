#include <string>
#include <vector>
#include <map>

#include "include/utils.hpp"

#include "libs/cpp-terminal/key.hpp"

using namespace std;



namespace Aquila {
  class Menu {
    Menu(Screen screen, string menu_string, MenuStrArr layout, MenuStrArr display_layout);

    private:
      Point i_cordinate = point(0, 0);
      MenuStrArr i_layout;
      MenuStrArr i_display_layout;
      string i_menu_string;


      void _up();
      void _down();
      void _right();
      void _left();
      Aquila::ItemStatus _valid_location(Point location);
    
    public:
      void act();

      Aquila::MenuKeyCode last_key;
      string value;
  };
}