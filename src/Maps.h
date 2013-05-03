/*
* ECE 264 Final Group Prject: Source Code
* Copyright (C) 2013 Daniel Noyes <Reiuiji@gmail.com>
*
* This file is part of the ECE 264 Final Group Prject
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
*/
/*	Map Index
	@ : player
	# : pathway
	w : water


*/
//Status Bar Base Display
#include "Definition.h"

char Map [14][26][52] =
{
//map 1
    {
        "+-------------------------------------------------+",
        "|rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr|",
        "|rrrrrcccccccccccccccccccccccccccccccccccccccrrrrr|",
        "|rrrrrrrcccccccccccccccccccccccccccccccccccrrrrrrr|",
        "|rrrrrrrrrcccccccccccccccccccccccccccccccrrrrrrrrr|",
        "|rrrrrrrrrrrcccccccccccccccccccccccccccrrrrrrrrrrr|",
        "|rrrrrrrrrrrrrccccccccccccccccccccccccrrrrrrrrrrrr|",
        "|rrrrrrrrrrrrrrccccccccccccccccccccccrrrrrrrrrrrrr|",
        "|rrrrrrrrrrrrrrrcccccccccccccccccccrrrrrrrrrrrrrrr|",
        "|rrrrrrrrrrrrrrrrcccccccccccccccccrrrrrrrrrrrrrrrr|",
        "|rrrrrrrrrrrrrrrrrrrrrr+--------------------------|",
        "|rrrrrrrrrrrrrrrrrrrrrr|uuuuuuuuuuuuuuuuuuuuuuuuuu|",
        "|rrrrrrrrrrrrrrrrrrrrrr|##########################:",
        "|rrrrrrrrrrrrrrrrrrrrrr|##########################:",
        "|rrrrrrrrrrrrrrrrrrrrrr|##########################:",
        "|rrrrrrrrrrrrrrrrrrrrrr|###u ---------------------|",
        "|cccccccccccccccccccccc|###u|ccccccccccccccccccccc|",
        "|rrrrrccccccccccccccccc|###u|ccccccccccccccccrrrrr|",
        "|rrrrrrrccccccccccccccc|###u|ccccccccccccccrrrrrrr|",
        "|rrrrrrrrrccccccccccccc|###u|ccccccccccccrrrrrrrrr|",
        "|rrrrrrrrrrrccccccccccc|###u|ccccccccccrrrrrrrrrrr|",
        "|rrrrrrrrrrrrrccccccccc|###u|cccccccccrrrrrrrrrrrr|",
        "|rrrrrrrrrrrrrrcccccccc|###u|ccccccccrrrrrrrrrrrrr|",
        "|rrrrrrrrrrrrrrrccccccc|###u|ccccccrrrrrrrrrrrrrrr|",
        "|rrrrrrrrrrrrrrrrcccccc|###u|cccccrrrrrrrrrrrrrrrr|",
        "+-----------------------,,,-----------------------+",
    },

//map 2
    {
        "+-------------------------------------------------+",
        "|fffffffffffffffffffcccccccccccccccccccccccccccccc|",
        "|fffffffffffffffffffffcccccccccccccccccccccccccccc|",
        "|ffffffffffffffffffffffffccccccccccccccccccccccccc|",
        "|ffffffffffffffffffffffffccccccccccccccccccccccccc|",
        "|fffffffffffffffffffffffffcccccccccccccccccccccccc|",
        "|ffffffffffffffffffffffffffccccccccccccccccccccccc|",
        "|fffffffffffffffffffffffffffffffffffffffffffffffff|",
        "|fffffffffffffffffffffffffffffffffffffffffffffffff|",
        "|fffffffffffffffffffffffffffffffffffffffffffffffff|",
        "|fffffffffffffffffffffffffffffffffffffffffffffffff|",
        "|\\ffffffffffffffffffffffffffffffffffffffffffffffff|",
        ";#################################################:",
        ";#################################################:",
        ";#################################################:",
        "|/ffffffffffffffffffffffffffffffffffffffffffffffff|",
        "|fffffffffffffffffffffffffffffffffffffffffffffffff|",
        "|fffffffffffffffffffffffffffffffffffffffffffffffff|",
        "|fffffffffffffffffffffffffffffffffffffffffffffffff|",
        "|fffffffffffffffffffffffffcccccccccccccccccccccccc|",
        "|fffffffffffffffffffffffcccccccccccccccccccccccccc|",
        "|ffffffffffffffffffffffccccccccccccccccccccccccccc|",
        "|fffffffffffffffffffcccccccccccccccccccccccccccccc|",
        "|fffffff   !!!!!fffccccccccccccccccccccccccccccccc|",
        "|fffffff   ff{~}ffcccccccccccccccccccccccccccccccc|",
        "+-------,,,---------------------------------------+",
    },

//map 3
    {
        "+-------------------------------------------------+",
        "| +-- +                          ccccc            |",
        "| | D |                    cccccccccc             |",
        "| |   |                      cccccc  cc           |",
        "| +- -+                                           |",
        "|   #     +---------+         +---------+         |",
        "|   #     |         |         |         |         |",
        "|   #     |         |         |         |         |",
        "|   #     |    A    |         |    B    |         |",
        "|   #     |         |         |         |         |",
        "|   #     +---- ----+         +---- ----+         |",
        "|   ##         #                   #              |",
        ";###############                   #      ccccc   |",
        ";######        ######################    ccccccc  |",
        ";#####    ccccc         #           #             |",
        "|   ##   ccccc          #           # +------+    |",
        "|    #      ccccc       #           # |      |    |",
        "|    #                  #           # |  [&] |    |",
        "|    #################################       |    |",
        "|---- ----+                           |      |    |",
        "|         |                           +------+    |",
        "|         |                                       |",
        "|    M    |          cccccccccc           J       |",
        "|---------+         ccccccccccccc                 |",
        "|                        cccccccc                 |",
        "+-------------------------------------------------+",
    },

//map 4
    {
        "+-----------------------```-----------------------+",
        "|rrrrrrrrrrrrrrrrrrrrrb|###u|brrrrrrrrrbrrrrrrrrrr|",
        "|rrrrrrrrrrrrrrrrrrrrrb|###u|brrrrrrrrrbrrrrrrrrrr|",
        "|rrrrrrrrrrrrrrrrrrrrrb|####|brrrrrrrrrbrrrrrrr   :",
        "|rrrrrrrrrrrrrrrrrrrrrb|####|brrrrrrrrrbrrrrrr    :",
        "|rrrrrrrrrrrrrrrrrrrrrb|####|brrrrrrrrrrbbbrrr    :",
        "|rrrrrrrrrrrrrrrrrrrrrb|####|brrrrrrrrrbbbbbbb  bb|",
        "|rrrrrrrrrrrrrrrrrrrrrb|####|brrrrrrrrrrrrrrrr  rr|",
        "|rrrrrrrrrrrrrrrrrrrrrb|####|brrrrrrrrrrrrrrr   rr|",
        "|rrrrrrrrrrrrrrrrrrrrrb|####|brrrrrrrrrrrr    rrrr|",
        "|----------------------+####|brrrrrrrr     rrrrrrr|",
        "|r{~}r                  ####|brrrrrrrr rrrrrrrrrrr|",
        "|                       ####|brrrrrrrr  rrrrrrrrrr|",
        "|+---------------------+####|brrrrrrrrr     rrrrrr|",
        "|rrrrrrrrrrrrrrrrrrrrrb|####|brrrrrrrrrrrrr rrrrrr|",
        "|rrrrrrrrrrrrrrrrrrrrrb|####|brrrrrrrrrr    rrrrrr|",
        "|rrrrrrrrrrrrrrrrrrrrrb|####|brrrrrrrrrr rrrrrrrrr|",
        "|rrrrrrrrrrrrrrrrrrrrrb|####|brrrrrr     rrrrrrrrr|",
        "|rrrrrrrrrrrrrrrrrrrrrb|####|brrr    rrrrrrrrrrrrr|",
        "|rrrrrrrrrrrrrrrrrrrrrb|####|brr  rrrrrrrrrrrrrrrr|",
        "|rrrrrrrrrrrrrrrrrrrrrb|####|brr rrrrrrrrrrrrrrrrr|",
        "|rrrrrrrrrrrrrrrrrrrrrb|####|br  rrrrrrrrrrrrrrrrr|",
        "|rrrrrrrrrrrrrrrrrrrrrb|####|b  rrrrrrrrrrrrrrrrrr|",
        "|rrrrrrrrrrrrrrrrrrrrrb|####   rrrrrrrrrrrrrrrrrrr|",
        "|rrrrrrrrrrrrrrrrrrrrrb|####|brrrrrrrrrrrrrrrrrrrr|",
        "+-----------------------,,,,----------------------+",
    },

//map 5
    {
        "+-------```---------------------------------------+",
        "|fffmmmmm             mmmmmmm        mmm       www|",
        "|mmmm                mmmxxxmmm          mm       w|",
        ";              m     mmxxxxxmm     mm     mmmmmm w|",
        ";            m       mmxxxxxmm       m         m  |",
        ";          mm        mmmxxxmmm                    |",
        "| m          m       mm     mm         mm   m    w|",
        "|m                   mm  D  mmm          m m    ww|",
        "|                    m        mmm              www|",
        "|      mmmm        mmm          mmmmmm          ww|",
        "|   mmmm   mmm   mmm               mmmmm         w|",
        "|mmmm         mmm                      mmmmmmmm  w|",
        "|                                                 |",
        "|      0000000        =======        =======      |",
        "|     0       0      /  [&]  v      /  +--+ v     |",
        "|    0 ++      0    |         |    |  B+--+  |    |",
        "|    0 ||   A  0    |         |    |         |    |",
        "|    0 ++      0    |         |    |         |    |",
        "|     0       0      v       /      v       /     |",
        "|      00~ ~00        ==~ ~==        ==~ ~==      |",
        "|        ###            ###            ###        |",
        "|        ####################################     |",
        "|         #####################################   |",
        "|mm                     ###                  #####:",
        "|mm                     ###                    ###:",
        "+-----------------------,,,-----------------------+",
    },

//map 6
    {
        "+-------------------------------------------------+",
        "|wwwmmm                                           |",
        "|wwwww                                            |",
        "|wwwww                                            |",
        "|wwww            wwwwwwwwww                       |",
        "|www            wwwwwwwwwwww                      |",
        "|wwwww     wwwwwww  wwwwwwwwwww                   |",
        "|wwwwwwwwwwwwwwww         wwwwwwww                |",
        "|wwwwwwwwwwww                 wwwwwwwww           |",
        "|www                               wwwww          |",
        "|www          #############################      !:",
        "|ww          ####################################!:",
        "|w           #####                  www        ##!:",
        "|             ###                  www           !:",
        "|             ###                 www             |",
        "|             ###                www              |",
        "|    000      ###               wwwwwwwww         |",
        "|   0xxx0     ###          wwwwwwwwwwwwwwwwww     |",
        "|   0xxx0     ###         ww      wwwwwwwwwwww    |",
        "|    0~0      ###    -!!----------        www     |",
        "|            ####    |  ooooooooo|        www     |",
        "|           #####    |     ++++++|   E    www     |",
        "|       ########     |o    oooooo|   @    wwww    |",
        ";############        |     ++++++|         wwww   |",
        ";#########           |     oooooo|         wwwww  |",
        "+---------------------,,,-------------------------+",
    },

//map 7
    {
        "+-----------------------````----------------------+",
        "|m brrrrrrrrrrrrrrrrrrrb      brb B  brb          |",
        "|m br+-----------------+      brb    brb          |",
        "|m br|         M   {~} |      brb    brb          |",
        "|m br|                 |      bib    bbb          |",
        "|m br+--------   ------+                          +",
        "|m  b   uuuu      uuuu                            |",
        "|m                                                |",
        "|m                                                |",
        "|m                                           #    |",
        "|m                      b+--------------+b   #    +",
        "|m                      b|      G       |b   #    |",
        "|m Z                    b|              |b   ##   |",
        "|m                      b+-----   ------+b    ##  |",
        "|m                        uuuu                 #  |",
        "|m                                   mmmmmmmmmm##m|",
        "|m                                  mmmmmmmrmmm###:",
        "|m      0000u                      mmmmmrrrrrmmm##:",
        "|m     v    0                     mmmmmrrrrrrmmmm#:",
        "|m    0  A                       mmmmmmmrmmmmmmmmm|",
        "|m    0                         mmmmmmmrrrmmmmmmmm|",
        "|m     v    0                  mmmmmmrrrrrrrmmmmmm|",
        "|mm     0000u                 mmmmmrrrrrrrrrrrmmmm|",
        "|mmmmmm                      mmmmrrrrrrrrrrrrrrmmm|",
        "|mmmmmmmmmmmmmmmmmmmmmm     mmmmmmmmmmmmmmmmmmmmmm|",
        "+-----------------------,,,-----------------------+",
    },

//map 8
    {
        "+-----------------------```-----------------------+",
        "|         |         | b    /v/v/v/v/v/v/v/v/v/vb/v|",
        "|    B    |    A    |                            u|",
        "|         |         |                    H      /v|",
        "|         |         |                            u|",
        "+---- ----+---- ----+                            b|",
        "|    #         ###########################        |",
        "|    #         #                         #      /v|",
        "|    #         #                         #        |",
        "|    #####################################        |",
        "+---------+             ###                       |",
        "|         |             ###                       |",
        "|    M    |             ###                     /v|",
        "|         |             ###                       |",
        "|         |             ###                       |",
        "|---- ----+             ###                       |",
        ";####                   ###                       |",
        ";#####                  ###                       |",
        ";#####b                 ###                       |",
        "|  ########################                    /v||",
        "|    uuuuuuuuuuuuuuuuuuuu#u                    {~}|",
        "|                       u#u                       |",
        "|b                      u#u                     /v|",
        "|u                      u#u                     /v|",
        "|b                       #                        |",
        "+-----------------------,,,-----------------------+",
    },
//map 9
    {
        "+---------------------```-------------------------+",
        "|  wwwwwwwwwwwwwwwwwww###wwwwwwwwwwwwwwwwwwwwwwww |",
        "| wwwwwwwwwwwwwwwwwwww###wwwwwwwwwwwwwwwwwwwwwwwww|",
        "|wwwww   /v/v/v       ###        /v/v/v      wwwww|",
        "|wwww                  #                      wwww|",
        "|www    +---------+    #      +---------+      www|",
        "|ww     |         |    #      |         |       ww|",
        "|w      |         |    #      |  Any    |        w|",
        "|w      |    B    |    #      |         |        w|",
        "|w      |         |    #      |         |        w|",
        "|w      +----!----+   ###     +----!----+        w|",
        "|w ##############################################w|",
        "|w #   ffffffffffff###fffffffffffff             #w|",
        "|w #   /v/v/v/vffff###ffff/v/v/v/v              #w|",
        "|w #      /v/vfffff###fffff/v/v                 #w|",
        "|w #          /vfff###fff/v  +-------+-------+  #w|",
        "|w # +---------+ fff###fff   |       |       |  #w|",
        "|w # |         | fff###fff   |   M   |  {~}  |  #w|",
        "|w # |    A    | fff###fff   |       !       |  #w|",
        "|w # |         | fff###fff   |       |       |  #w|",
        "|w # |         | fff###fff   +---!---+-------+  #w|",
        "|w # +---!-----+ fff###fff       ################w|",
        "|w #fffff#ffffffffff###fffffffffffffffffffffffff#w|",
        "|w ##############################################w|",
        "|wwwwwwwwwwwwwwwwwwwww####wwwwwwwwwwwwwwwwwwwwwwww|",
        "+----------------------,,,------------------------+",
    },

//map 10
    {
        "+-----------------------```-----------------------+",
        "|mmmmmmmmmmmmmmmmmmmm/v     mm/vwwwwwwwwwwwwwwwwww|",
        "|mmmmmmmmmmmmmmmmmm/v        m/vwwwwwwwwwwwwwwwwww|",
        "|mmmmmmmmmmmmmmmmmm/v         /vwwwwwwwwwwwwwwwwww|",
        "|mmmmmmmmmmmmmmmmmm/v         /vwwwwwwwwwwwwwwwwww|",
        "|mmmmmmmmmmmmmmmmmm/v         /vwwwwwwwwwwwwwwwwww|",
        "|mmmmmmmmmmmmmmmmmm/v         /vwwwwwwwwwwwwwwwwww|",
        "|mmmmmmmmmmmmmmmmmm/v         /vwwwwwwwwwwwwwwwwww|",
        "|mmmmmmmmmmmmmmmmmm/v         /v/v/v/v/v/v/v/v/v/v|",
        "|mmmmmmmmmmmmmmmmmm/v         /v/v/v/v/v/v/v/v/v/v|",
        "|mmmmmmmmmmmmmmmmmm/v                             :",
        "|mmmmmmmmmmmmmmmmmm/v                             :",
        "|mmmmmmmmmmmmmmmmmm/v                             :",
        "|mmmmmmmmmmmmmmmmmm/v/v/v/v/v/v/v/v/v/v/v/v/v/v/v/|",
        "|mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm/v|",
        "|mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm/v|",
        "|mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm/v|",
        "|mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm/v|",
        "|mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm/v|",
        "|mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm/v|",
        "|mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm/v|",
        "|mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm/v|",
        "|mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm/v|",
        "|mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm/v|",
        "|mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm/v|",
        "+-------------------------------------------------+",
    },

//map 11
    {
        "+-----------------------```-----------------------+",
        "|              wwwwwww   #          bbbbbb        |",
        "|             wwwwwwwww            bxxxxxxb       |",
        "|/v/v         wwwwwwwww            bxxxxxxb       |",
        "|{~}/v/v       wwwwwww              bxxxxb        |",
        "|   /v  /v /v    ww                               |",
        "|        /v  /v w                 u##u            |",
        "| /v    /v  wwww  /v             u##uu     /v     |",
        "|      /v  w/v  w   /v          u##u              |",
        "| /v  /v {~}   /vw   /v        u##u        /v     |",
        ";    /v    /v     w   /v      u##uu               |",
        ";   /v      /v   /vww  /v      u##uu              |",
        ";  /v /v/v  /v         /v       u###u     /v      |",
        "|   /v{~}       /v      /v/v    u###u             |",
        "|   /v   /v /v /v           /v  u###u       /v    |",
        "|   /v /v /v /v/v           /v  u###u             |",
        "|   /v {~}  /v    /v         /v u###u             |",
        "|   /v /v/v   /v      /v        u###u       /v    |",
        "|   /v                    /v     u###uu      /v   |",
        "|   /v   /v    /v   /v            u###u           |",
        "|   /v                            uu###u     /v   |",
        "|    /v         /v                  u###u   /v    |",
        "|/v  /v    /v      /v                 u##u  /v    |",
        "|     /v   /v                         u##u        |",
        "|                                      ##         |",
        "+-------------------------------------------------+",
    },

//map 12
    {
        "+----------------------```------------------------+",
        "|fffffffffffffff       ###          wwwwwwwwwww{~}|",
        "|fffffffffffffff        ###        www{~}wwww     |",
        "|fffffffffffffff        ##          www  wwww     |",
        "|fffffffffffffff         ###       www   wwwwww   |",
        "|fffffffffxxffff          #         www  wwwww    |",
        "|wwwwwwww###wwwwwww         #      www    www     |",
        "|wwwwwww##wwwwwwwww                 www      #    |",
        "|wwwwwwww##wwwwwwww                  www   wwww   |",
        "|wwwwwww##wwwwwwwww                   www  ww     |",
        "|wwwwwwww##wwwwwwww                    www   ww   |",
        "|/vwwwww##wwwwwwwwwww                 www   ww    |",
        "|/vwwwwwww##wwwwwwwwwww                 www   ww  |",
        "|/vwwwwww##wwwwwwwwww                     www  w  |",
        "|/vwwwwwww##wwwwwwwwwww                  www    w |",
        "|/v/vwwww##wwwwwwwwwwwww                    ww   w|",
        "|/v/v www##wwwwwwwwww                       ww    |",
        "|/v/v/v/v   /v/v/v/v                 G     ww     |",
        "|/v/v/v/v    /v/v/v/v                             |",
        "|/v/v/v/v      /v/v/v/v                           |",
        "|/v/v/v/v          /v/v/v/v                       |",
        "|/v/v/v/v            /v/v/v/v                     |",
        "|/v/v/v/v               /v/v/v/v                  |",
        "|/v/v/v/v                   /v/v/v/v              |",
        "|/v/v/v/v                                         |",
        "+-------------------------------------------------+",
    },
//map 13
    {
        "+-------------------------------------------------+",
        "|             cccccccfffffffffcccccc              |",
        "|  [&] /v/v/v/vmmmmwwfffbbffffwwmmmm/v/v/v/v      |",
        "|      /v/v/v/vmmmmwwffbxxbfffwwmmmm/v/v/v/v      |",
        "|     /v/v/v/vmmmmwwfff ## fffwwmmmmm             |",
        "|     /v/v/v/v    ww    ##  www                   |",
        "|                  ww   ## www                    |",
        "|                   www ##ww                      |",
        "|                     w ##w                       |",
        "|                       ##                        |",
        "|                       ##                        |",
        "|          u            ##                        |",
        "|          u u          ##            u           |",
        ",      u   u  u         ##           u  u         |",
        "|      u   u   u        ##    u u  u u[&}uu       |",
        "|      u                ##       uu        u      |",
        "|        u uu           ##                 u      |",
        "|                   u   ##        u               |",
        "|              uuu u    ##              u         |",
        "|              u        ##        u    uu         |",
        "|     u u      u        ##         u   u          |",
        "|        uu  u          ##               u u      |",
        "|           u           ##                        |",
        "|                       ##                        |",
        "|                       ##                        |",
        "+-----------------------,,------------------------+",
    },
//map 14
    {
        "+-----------------------``------------------------+",
        "|wwwwww                  #    [&]  b    b         |",
        "|wwwwww                   #       b               |",
        "| wwwwwww                #         b              |",
        "| wwwwwwww               #b b   b b               |",
        "|  wwwwwww             b #b            b          |",
        "|   wwwwwwwww         b #bbb  b b                 |",
        "|    wwwww           b  #  b  b         b         |",
        "|      wwwww          b #  b   b                  |",
        "|       wwwww         b###b     b        b        |",
        "|         w            b##b               b       |",
        "|           w         ww##ww                      |",
        "|######T####         wwwxxwww                     :",
        "|###########         wwwxxwww                     :",
        "|                    www##www                     |",
        "|                     ww##ww                      |",
        "|                     /v #  u                     |",
        "|                    /v  #    u /v                |",
        "|                   /v   #     u /v               |",
        "|                  /v    #                        |",
        "|mmmmmmmmmmm      /v     #      /v            u   |",
        "|mmmmmmmmmm      /v      #    /v          u  u    |",
        "|mmmmmmmmm       /v      #  /v          u      u  |",
        "|mmmmmmm          /v     #/v#          u  u  [&]  |",
        "|mmmmmm  [&]  /v/v       ###                      |",
        "+-------------------------------------------------+",
    }

};
