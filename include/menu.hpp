#include <string>
#include <vector>

using namespace std;

typedef vector<vector<string>> TD_MENU_ARR;

namespace Aquila {
  class Menu {
    Menu(Screen screen, string menu_string, TD_MENU_ARR layout, TD_MENU_ARR display_layout);

    private:
      Point i_cordinate = point(0, 0);
      TD_MENU_ARR i_layout;
      TD_MENU_ARR i_display_layout;
      string i_menu_string;

      void _up();
      void _down();
      void _right();
      void _left();
      void _enter();
    
    public:
      void act();
  };
}