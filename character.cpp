https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "character.h"

using core::Character;

Character::Character(const std::string &name)
  : _name{name}
{

}

const std::string& Character::name() const {
  return _name;
}


std::ostream& operator<<(std::ostream &stream, const Character &character) {
  stream << character.name();
  return stream;
}
