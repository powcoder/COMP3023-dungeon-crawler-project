https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef ROOM_H
#define ROOM_H

namespace core {
namespace dungeon {

/**
 * @brief TODO The Room class
 */
class Room
{
public:
  Room(int id);

  /**
   * @brief id Returns the unique integer id of the Room.
   * @return the unique id
   */
  int id();

private:
  int _id;
};

} // namespace dungeon
} // namespace core


#endif // ROOM_H
