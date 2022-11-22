## Assignment 1 Dungeon Crawler

This is the provided Qt Creator for the the Dungeon Crawler assignment
for the course COMP3023 Software Development with C++.

Please familiarise yourself the content of this project. Also, do not
forget to initialise a git repository in this folder once you have
extracted the folder to your filesystem.

First thing you will need to do is modify the main.cpp file to include
your name (the author) and the name you would like to call the game.
You may call your game whatever you like.

In this project, all of the class declarations have been provided for
you, except for any additional classes you thought necesayr to include
in your design. You will need to complete the classes with the correct
inheritance, data members, member functions, etc.

Some classes already come with some provided code and/or suggested
interfaces. Code that MUST NOT be changed is clearly marked, while
code that you are allowed to change is clearly marked that you are
allowed to or may need to modify it, as some of the provided
examples do not conform to what you need to end up implementing.

Please read the comments in the files, particularly those with
provided implementations as they will tell you what the code is for.

To reduce the number of files included in the project, some of the
classes have been grouped together. For example, all weapons and
enchantment related classes are included in weapons.h and weapons.cpp.

The following is a brief list of the files included in this project and
their purpose:

- basicdungeon.h/.cpp: header and implementation file for concrete classes
                       related to the Basic Dungeon type.
- character.h/.cpp: header and implementation file for the Character class
- commondungeon.h/.cpp: header and implementation file for concrete classes
                        common to both dungeon types, e.g., OpenDoorway
- creatures.h/.cpp: header and implementation file for the Creature class
- creature_types.csv: a CSV file containing the three original creature types;
                      this is the file you will load when you instantiate your
                      creature prototypes from the data file.
- creature_types_sample.csv: a CSV file used by the CsvFile Unit Tests; DO NOT MODIFY
- csvfile.h/.cpp: header and implementation file for the CsvFile class
- door.h/.cpp: header and implementation file for the abstract Door class
- dungeon.h/.cpp: header and implementation file for the abstract Dungeon class
- game.h/.cpp: header and implementation file for the Game class; includes
               a suggested interface, but can be changed. Implemented helper
               functions must not be changed.
- magicaldungeon.h/.cpp: header and implementation file for concrete classes
                         related to the Magical Dungeon type.
- main.cpp: implementation only, includes the main function
- menuinterface.h/.cpp: header and implementation file for the MenuInterface
                        class; fundamentals are implemented, menus and processing
                        must be completed by you to fulfill the assignment specs.
- room.h/.cpp: header and implementation file for the abstract Room class
- testing.h/.cpp: header and implementation file for the simple Unit Testing
                  framework. Includes complete tests for CsvFile, you should
                  implement additional tests for your own work.
- testingsettings.h: header only, includes some macro defintions to enable/disable testing
- wall.h/.cpp: header and implementation file for the abstract Wall class
- weapons.h/.cpp: header and implementation file for the weapon related classes,
                  such as, Weapon, Fists, Enchantment, FlamingEnchantment, etc.
# COMP3023 dungeon crawler project
# 加微信 powcoder

# [代做各类CS相关课程和程序语言](https://powcoder.com/)

[成功案例](https://powcoder.com/tag/成功案例/)

[java代写](https://powcoder.com/tag/java/) [c/c++代写](https://powcoder.com/tag/c/) [python代写](https://powcoder.com/tag/python/) [drracket代写](https://powcoder.com/tag/drracket/) [MIPS汇编代写](https://powcoder.com/tag/MIPS/) [matlab代写](https://powcoder.com/tag/matlab/) [R语言代写](https://powcoder.com/tag/r/) [javascript代写](https://powcoder.com/tag/javascript/)

[prolog代写](https://powcoder.com/tag/prolog/) [haskell代写](https://powcoder.com/tag/haskell/) [processing代写](https://powcoder.com/tag/processing/) [ruby代写](https://powcoder.com/tag/ruby/) [scheme代写](https://powcoder.com/tag/drracket/) [ocaml代写](https://powcoder.com/tag/ocaml/) [lisp代写](https://powcoder.com/tag/lisp/)

- [数据结构算法 data structure algorithm 代写](https://powcoder.com/category/data-structure-algorithm/)
- [计算机网络 套接字编程 computer network socket programming 代写](https://powcoder.com/category/network-socket/)
- [数据库 DB Database SQL 代写](https://powcoder.com/category/database-db-sql/)
- [机器学习 machine learning 代写](https://powcoder.com/category/machine-learning/)
- [编译器原理 Compiler 代写](https://powcoder.com/category/compiler/)
- [操作系统OS(Operating System) 代写](https://powcoder.com/category/操作系统osoperating-system/)
- [计算机图形学 Computer Graphics opengl webgl 代写](https://powcoder.com/category/computer-graphics-opengl-webgl/)
- [人工智能 AI Artificial Intelligence 代写](https://powcoder.com/category/人工智能-ai-artificial-intelligence/)
- [大数据 Hadoop Map Reduce Spark HBase 代写](https://powcoder.com/category/hadoop-map-reduce-spark-hbase/)
- [系统编程 System programming 代写](https://powcoder.com/category/sys-programming/)
- [网页应用 Web Application 代写](https://powcoder.com/category/web/)
- [自然语言处理 NLP natural language processing 代写](https://powcoder.com/category/nlp/)
- [计算机体系结构 Computer Architecture 代写](https://powcoder.com/category/computer-architecture/)
- [计算机安全密码学computer security cryptography 代写](https://powcoder.com/category/computer-security/)
- [计算机理论 Computation Theory 代写](https://powcoder.com/category/computation-theory/)
- [计算机视觉(Compute Vision) 代写](https://powcoder.com/category/计算机视觉compute-vision/)

