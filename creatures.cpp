https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "creatures.h"

using namespace core::creatures;

/* ------------------------------------------------------------------------------
 * Creature member implementations
 * -----------------------------------------------------------------------------*/

Creature::Creature(const std::string &name)
  : _name{name}
{

}

const std::string& Creature::name() const {
  return _name;
}
