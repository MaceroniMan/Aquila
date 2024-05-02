#include "include/screen.hpp"
#include "include/utils.hpp"

#include "include/menu.hpp"

Aquila::Menu::Menu(Screen screen, string menu_string, MenuStrArr layout, MenuStrArr display_layout) {

}

Aquila::ItemStatus Aquila::Menu::_valid_location(Point location) {
  if (location.y > 0 && location.x > 0) {
    if (location.y < i_layout.size() && location.x < i_layout[0].size()) {
      if (i_layout[location.y][location.x] == "") {
        return Aquila::ItemStatus::BLANK;
      } else {
        return Aquila::ItemStatus::VALID;
      }
    }
  }
  return Aquila::ItemStatus::NONE;
}

void Aquila::Menu::_up() {
  i_cordinate.y -= 1;
  Aquila::ItemStatus res = _valid_location(i_cordinate);
  if (res == Aquila::ItemStatus::NONE) {
    i_cordinate.y += 1;
  } else if (res == Aquila::ItemStatus::BLANK) {
    _up();
  }
}
void Aquila::Menu::_down() {
  i_cordinate.y += 1;
  Aquila::ItemStatus res = _valid_location(i_cordinate);
  if (res == Aquila::ItemStatus::NONE) {
    i_cordinate.y -= 1;
  } else if (res == Aquila::ItemStatus::BLANK) {
    _down();
  }
}
void Aquila::Menu::_right() {
  i_cordinate.x += 1;
  Aquila::ItemStatus res = _valid_location(i_cordinate);
  if (res == Aquila::ItemStatus::NONE) {
    i_cordinate.x -= 1;
  } else if (res == Aquila::ItemStatus::BLANK) {
    _right();
  }
}
void Aquila::Menu::_left() {
  i_cordinate.x -= 1;
  Aquila::ItemStatus res = _valid_location(i_cordinate);
  if (res == Aquila::ItemStatus::NONE) {
    i_cordinate.x += 1;
  } else if (res == Aquila::ItemStatus::BLANK) {
    _left();
  }
}

void Aquila::Menu::act(Term::Key) {
  
}