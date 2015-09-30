/*
 * Copyright 2000-2015 Rochus Keller <mailto:rkeller@nmr.ch>
 *
 * This file is part of the CARA (Computer Aided Resonance Assignment,
 * see <http://cara.nmr.ch/>) NMR Application Framework (NAF) library.
 *
 * The following is the license that applies to this copy of the
 * library. For a license to use the library under conditions
 * other than those described here, please email to rkeller@nmr.ch.
 *
 * GNU General Public License Usage
 * This file may be used under the terms of the GNU General Public
 * License (GPL) versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the file LICENSE.GPL included in
 * the packaging of this file. Please review the following information
 * to ensure GNU General Public Licensing requirements will be met:
 * http://www.fsf.org/licensing/licenses/info/GPLv2.html and
 * http://www.gnu.org/copyleft/gpl.html.
 */

#include "Icon.h"
//Added by qt3to4:
#include <QPixmap>
using namespace Lexi;

static const char*  empty[] = {
"22 22 2 1",
" 	c None",
".	c #000000",
"                      ",
"                      ",
"                      ",
"                      ",
"                      ",
"                      ",
"                      ",
"                      ",
"                      ",
"                      ",
"                      ",
"                      ",
"                      ",
"                      ",
"                      ",
"                      ",
"                      ",
"                      ",
"                      ",
"                      ",
"                      ",
"                      "};
static const char*  pointer[] = {
"22 22 2 1",
" 	c None",
".	c #000000",
"                      ",
"                      ",
"                      ",
"                      ",
"                      ",
"       .              ",
"       ..             ",
"       ...            ",
"       ....           ",
"       .....          ",
"       ......         ",
"       .......        ",
"       .....          ",
"       .....          ",
"       .  ...         ",
"          ...         ",
"           ...        ",
"           ...        ",
"                      ",
"                      ",
"                      ",
"                      "};
static const char*  magnify[] = {
"22 22 2 1",
" 	c None",
".	c #000000",
"                      ",
"                      ",
"                      ",
"                      ",
"          ...         ",
"        .      .      ",
"      .          .    ",
"     .            .   ",
"    .              .  ",
"   .               .  ",
"   .               .  ",
"    .             .   ",
"      .        .      ",
"         .  .         ",
"          ..          ",
"          ..          ",
"          ..          ",
"          ..          ",
"          ..          ",
"          ..          ",
"                      ",
"                      "};
static const char* home[] = {
/* columns rows colors chars-per-pixel */
"22 22 132 2",
"   c Gray0",
".  c #080800000000",
"X  c #080808080000",
"o  c #080810100808",
"O  c #101010100000",
"+  c #292921210000",
"@  c #313129290000",
"#  c #393929290000",
"$  c #393931310000",
"%  c #393939390808",
"&  c #393939391010",
"*  c #393931312929",
"=  c #313139393131",
"-  c #4a4a42420808",
";  c #525252521818",
":  c #424242423131",
">  c #424242423939",
",  c #42424a4a3131",
"<  c #52525a5a2121",
"1  c #636352520000",
"2  c #63635a5a0808",
"3  c #6b6b5a5a0000",
"4  c #6b6b5a5a1010",
"5  c #737373731818",
"6  c #63636b6b2121",
"7  c #6b6b73732121",
"8  c #737373732929",
"9  c #73737b7b2929",
"0  c #7b7b7b7b2121",
"q  c #7b7b7b7b2929",
"w  c #42424a4a4a4a",
"e  c #4a4a42424242",
"r  c Gray29",
"t  c #4a4a52525252",
"y  c #52524a4a4a4a",
"u  c #5a5a52524a4a",
"i  c Gray32",
"p  c #5a5a5a5a5252",
"a  c #525263635a5a",
"s  c #636363635a5a",
"d  c Gray39",
"f  c #63636b6b6363",
"g  c #6b6b6b6b6363",
"h  c Gray42",
"j  c #73736b6b6363",
"k  c #73736b6b6b6b",
"l  c #7b7b73736b6b",
"z  c Gray45",
"x  c #7b7b73737373",
"c  c #7b7b7b7b7373",
"v  c #7b7b7b7b7b7b",
"b  c #7b7b84847b7b",
"n  c #8c8c7b7b0808",
"m  c #84847b7b1818",
"M  c #8c8c7b7b1010",
"N  c #84847b7b7373",
"B  c #8c8c84841818",
"V  c #949484840808",
"C  c #848484842929",
"Z  c #848484843939",
"A  c #949484842121",
"S  c #a5a594942121",
"D  c #adad9c9c2121",
"F  c #b5b5a5a50808",
"G  c #b5b5a5a51818",
"H  c #b5b5a5a52121",
"J  c #bdbdadad2929",
"K  c #bdbdadad3131",
"L  c #8c8c94945252",
"P  c #949494944a4a",
"I  c #949494945252",
"U  c #94949c9c5a5a",
"Y  c #8c8c8c8c6b6b",
"T  c #848484847b7b",
"R  c #8c8c84847b7b",
"E  c #9c9c9c9c6363",
"W  c #9c9c9c9c6b6b",
"Q  c #a5a5a5a57373",
"!  c #cecebdbd2121",
"~  c #c6c6b5b53131",
"^  c #c6c6b5b53939",
"/  c #cecec6c63131",
"(  c #d6d6c6c63131",
")  c #e7e7d6d61818",
"_  c #f7f7dede1818",
"`  c #e7e7d6d63939",
"'  c #efefdede3131",
"]  c #efefdede3939",
"[  c #f7f7e7e71818",
"{  c #ffffe7e71818",
"}  c #848484848484",
"|  c #84848c8c8484",
" . c #8c8c84848484",
".. c #8c8c8c8c8484",
"X. c Gray55",
"o. c #94948c8c8484",
"O. c #949494948484",
"+. c #949494948c8c",
"@. c #9c9c94948c8c",
"#. c #9c9c9c9c8c8c",
"$. c #9c9c9c9c9494",
"%. c Gray61",
"&. c #9c9ca5a59c9c",
"*. c #9c9cadada5a5",
"=. c #a5a594948c8c",
"-. c #a5a59c9c9494",
";. c #a5a59c9c9c9c",
":. c #a5a5a5a59c9c",
">. c #adada5a59c9c",
",. c #b5b5a5a59c9c",
"<. c #a5a5a5a5a5a5",
"1. c #a5a5adada5a5",
"2. c #a5a5adadadad",
"3. c #adadadada5a5",
"4. c Gray68",
"5. c #adadb5b5adad",
"6. c #a5a5bdbdb5b5",
"7. c #adadb5b5b5b5",
"8. c #b5b5adada5a5",
"9. c Gray71",
"0. c #b5b5bdbdb5b5",
"q. c #bdbdb5b5b5b5",
"w. c #bdbdbdbdb5b5",
"e. c Gray74",
"r. c #adadc6c6bdbd",
"t. c #bdbdc6c6bdbd",
"y. c #c0c0c0c0c0c0",
"u. c #c6c6d6d6cece",
"i. c #c6c6deded6d6",
"p. c #cecededed6d6",
"a. c #d6d6e7e7e7e7",
"s. c None",
/* pixels */
"s.s.s.s.s.s.s.s.s.s.3.%.s.s.s.s.s.s.s.s.s.s.",
"s.s.s.s.s.s.s.s.s.9.e.| 4.s.s.s.s.s.s.s.s.s.",
"s.s.s.s.s.s.s.s.e.:.p.&.g e.s.s.s.s.s.s.s.s.",
"s.s.s.s.s.s.s.s.<.2.5.R t } s.s.s.s.s.s.s.s.",
"s.s.s.s.s.s.s.9.&.6.&. .d t %.s.s.s.s.s.s.s.",
"s.s.s.s.s.s.e.;.>.1.i.&.l p y 9.s.s.s.s.s.s.",
"s.s.s.s.s.s.%.-.-.3.a.>.N s e d e.s.s.s.s.s.",
"s.s.s.s.s.4.| 6.t.2.:.:.N i a w X.s.s.s.s.s.",
"s.s.s.s.e.+.*.r.5.1.%...b s f a = <.s.s.s.s.",
"s.s.s.e.$.=.>.@.;.0.u.-.:.k j u * r 9.s.s.s.",
"s.s.s.4.o.1.8.>.3.u.a.,.8.x g g y = } s.s.s.",
"s.s.s.e.7.1.v k z b T R c s : * z 4.e.s.s.s.",
"s.s.s.s.s.9.4 1 - $ + O O . O X c s.s.s.s.s.",
"s.s.s.s.s.w.! [ ] ` / D M 2 @ O c s.s.s.s.s.",
"s.s.s.s.s.e.~ ) ' ] ] ( H V 3 @ c s.s.s.s.s.",
"s.s.s.s.s.e.~ ) ' K A S G M 1 @ v s.s.s.s.s.",
"s.s.s.s.s.e.^ _ D O   O 4 n 2 $ T s.s.s.s.s.",
"s.s.s.s.s.q.J _ m   O X @ M 3 # > h v s.s.s.",
"s.s.s.s.e.Y F { B   X   % M 3 @ . O , s.s.s.",
"s.s.s.t.O.6 B ) B o & < 0 n 2 - ; 9 Y s.s.s.",
"s.s.s.#.7 9 q C C 8 9 9 9 5 8 q C q O.s.s.s.",
"s.s.s.Q W W W E E U U L I L P P P Z :.s.s.s."
};
static const char* help[] = {
/* columns rows colors chars-per-pixel */
"22 22 102 2",
"   c #4a4a00004242",
".  c #525218185252",
"X  c #4a4a31314a4a",
"o  c #525229295252",
"O  c #636310105a5a",
"+  c #737308086b6b",
"@  c #6b6b21216b6b",
"#  c #636339396363",
"$  c #737329296b6b",
"%  c #5a5a4a4a5a5a",
"&  c #636352525a5a",
"*  c #63635a5a6363",
"=  c #73736b6b7373",
"-  c #8c8c00008484",
";  c #8c8c10108484",
":  c #949400008c8c",
">  c #949439398c8c",
",  c #9c9c31319494",
"<  c #adad08089c9c",
"1  c #a5a510109c9c",
"2  c #a5a51010a5a5",
"3  c #bdbd0808b5b5",
"4  c #bdbd2121b5b5",
"5  c #8c8c5a5a8c8c",
"6  c #9c9c42429c9c",
"7  c #9c9c5a5a9c9c",
"8  c #8c8c73738c8c",
"9  c #949463639494",
"0  c #a5a54242a5a5",
"q  c #b5b55252adad",
"w  c #bdbd5a5abdbd",
"e  c #a5a56b6b9c9c",
"r  c #adad7b7ba5a5",
"t  c #c6c60808bdbd",
"y  c #cece2929bdbd",
"u  c #d6d61010cece",
"i  c #d6d62121cece",
"p  c #d6d62121d6d6",
"a  c #d6d63131cece",
"s  c #e7e71818d6d6",
"d  c #efef1010e7e7",
"f  c #e7e72121dede",
"g  c #efef2121e7e7",
"h  c #efef2929e7e7",
"j  c #efef3939efef",
"k  c #ffff2121f7f7",
"l  c #ffff3131ffff",
"z  c #ffff3939ffff",
"x  c #c6c65a5abdbd",
"c  c #c6c66b6bbdbd",
"v  c #cece5a5ac6c6",
"b  c #d6d64242cece",
"n  c #dede4a4ad6d6",
"m  c #d6d65a5ad6d6",
"M  c #cece6b6bcece",
"N  c #cece7373c6c6",
"B  c #d6d66363d6d6",
"V  c #d6d66b6bd6d6",
"C  c #e7e74a4adede",
"Z  c #e7e75252dede",
"A  c #e7e75a5adede",
"S  c #e7e74a4ae7e7",
"D  c #efef4242efef",
"F  c #efef4a4aefef",
"G  c #e7e75252e7e7",
"H  c #ffff4242ffff",
"J  c #ffff4a4affff",
"K  c #f7f75a5aefef",
"L  c #f7f75252f7f7",
"P  c #ffff5252ffff",
"I  c #ffff5a5affff",
"U  c #ffff6363ffff",
"Y  c #ffff6b6bffff",
"T  c #ffff7373ffff",
"R  c #8c8c84848c8c",
"E  c Gray58",
"W  c #a5a59c9c9c9c",
"Q  c #a5a59c9ca5a5",
"!  c #adad9c9cadad",
"~  c #b5b58484adad",
"^  c #b5b58c8cb5b5",
"/  c #bdbd8c8cbdbd",
"(  c #bdbd9c9cbdbd",
")  c Gray68",
"_  c #b5b5adadb5b5",
"`  c #bdbda5a5bdbd",
"'  c #bdbdadadbdbd",
"]  c Gray71",
"[  c #bdbdb5b5bdbd",
"{  c Gray74",
"}  c #c6c68484c6c6",
"|  c #c6c6bdbdc6c6",
" . c #ffff8484ffff",
".. c #ffff8c8cffff",
"X. c #ffff9494ffff",
"o. c #ffff9c9cffff",
"O. c #ffffa5a5ffff",
"+. c #ffffadadffff",
"@. c #ffffbdbdffff",
"#. c #c0c0c0c0c0c0",
"$. c #ffffc6c6ffff",
"%. c None",
/* pixels */
"%.%.%.%.%.| ' } B Z S C n x ~ _ { %.%.%.%.%.",
"%.%.%.%.[ } K T O.+.O...T J k i e ] %.%.%.%.",
"%.%.%.[ B  .o. .Y U I I I I P z d , ) %.%.%.",
"%.%.{ V X.$.X.L 4 , 7 7 0 a P Y P d > ] %.%.",
"%.%./ U o.U p . R { { { { W 6 j P z t 8 %.%.",
"%.%.G T Y h   E %.%.%.%.%.%.) y H P s @ %.%.",
"%.%.w b F 2 & { %.%.%.%.%.%.{ v H I f O %.%.",
"%.%.{ ) Q W { %.%.%.%.%.%.%.[ C U P i o %.%.",
"%.%.%.%.%.%.%.%.%.%.%.%.%.' m  . .z - = %.%.",
"%.%.%.%.%.%.%.%.%.%.%.%.( G o.o.H : X ] %.%.",
"%.%.%.%.%.%.%.%.%.%.%./ K @...z 3 o ) %.%.%.",
"%.%.%.%.%.%.%.%.%.%./ I O.T k < # ) %.%.%.%.",
"%.%.%.%.%.%.%.%.%.` D I P l - * { %.%.%.%.%.",
"%.%.%.%.%.%.%.%.%.N J T J 2 = { %.%.%.%.%.%.",
"%.%.%.%.%.%.%.%.| B  .U 1 % { %.%.%.%.%.%.%.",
"%.%.%.%.%.%.%.%.[ A U z : = %.%.%.%.%.%.%.%.",
"%.%.%.%.%.%.%.%.{ r q w 9 ) %.%.%.%.%.%.%.%.",
"%.%.%.%.%.%.%.%.%.%._ ^ ! { %.%.%.%.%.%.%.%.",
"%.%.%.%.%.%.%.%.%.( L P g 5 { %.%.%.%.%.%.%.",
"%.%.%.%.%.%.%.%.| M o.$.L + ) %.%.%.%.%.%.%.",
"%.%.%.%.%.%.%.%.%.c l H u . ) %.%.%.%.%.%.%.",
"%.%.%.%.%.%.%.%.%._ 0 ; $ R %.%.%.%.%.%.%.%."
};
static const char* editredo[] = {
/* columns rows colors chars-per-pixel */
"22 22 8 1",
"  c Gray100",
". c #848284",
"X c #000084",
"o c Gray0",
"O c None",
"+ c Gray0",
"@ c Gray0",
"# c Gray0",
/* pixels */
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOO.XXXXXXOOOOOOOOOOO",
"OOOXXXXXXXXXXOOOOOOXOO",
"OO.XXOOOOOOXXXXOOOXXOO",
"OOXXOOOOOOOOOXXXOXXXOO",
"OOXXOOOOOOOOOOXXXXXXOO",
"OOXXOOOOOOOOOOOXXXXXOO",
"OOXXOOOOOOOOOOXXXXXXOO",
"OOXXOOOOOOOOOXXXXXXXOO",
"OO.XXOOOOOOOXXXXXXXXOO",
"OOOXXX.OOOOOOOOOOOOOOO",
"OOOOXXXOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO"
};
static const char* editundo[] = {
/* columns rows colors chars-per-pixel */
"22 22 8 1",
"  c Gray100",
". c #848284",
"X c #000084",
"o c Gray0",
"O c None",
"+ c Gray0",
"@ c Gray0",
"# c Gray0",
/* pixels */
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOXXXXXX.OOOO",
"OOXOOOOOOXXXXXXXXXXOOO",
"OOXXOOOXXXXOOOOOOXX.OO",
"OOXXXOXXXOOOOOOOOOXXOO",
"OOXXXXXXOOOOOOOOOOXXOO",
"OOXXXXXOOOOOOOOOOOXXOO",
"OOXXXXXXOOOOOOOOOOXXOO",
"OOXXXXXXXOOOOOOOOOXXOO",
"OOXXXXXXXXOOOOOOOXX.OO",
"OOOOOOOOOOOOOOO.XXXOOO",
"OOOOOOOOOOOOOOOXXXOOOO",
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO"
};
static const char* editpaste[] = {
/* columns rows colors chars-per-pixel */
"22 22 8 1",
"  c Gray100",
". c Yellow",
"X c #c6c3c6",
"o c #848284",
"O c #848200",
"+ c #000084",
"@ c Gray0",
"# c None",
/* pixels */
"######################",
"#######@@@@@##########",
"##@@@@@@...@@@@@@#####",
"#@@@@@@.....@@@@@@####",
"@@oOo@@.@@@.@@oOo@@###",
"@oOo@XXXXXXXXX@oOo@###",
"@OoO@XXXXXXXXX@OoO@###",
"@oOo@@@@@@@@@@@oOo@###",
"@OoOoOoOoOoOoOoOoO@###",
"@oOoOoOoOoOoOoOoOo@###",
"@OoOoOoO++++++++++@###",
"@oOoOoOo+       + +###",
"@OoOoOoO+ +++++ +  +##",
"@oOoOoOo+       +   +#",
"@OoOoOoO+ +++++ +    +",
"@oOoOoOo+       ++++++",
"@OoOoOoO+ +++++      +",
"@oOoOoOo+            +",
"@OoOoOoO+ ++++++++++ +",
"#@@@@@@@+            +",
"########++++++++++++++",
"######################"
};
static const char* editcut[] = {
/* columns rows colors chars-per-pixel */
"22 22 4 1",
"  c Gray100",
". c #000082",
"X c Gray0",
"o c None",
/* pixels */
"oooooooooooooooooooooo",
"oooooooXoooooXoooooooo",
"oooooooXoooooXoooooooo",
"oooooooXoooooXoooooooo",
"oooooooXooooXXoooooooo",
"oooooooXXoooXooooooooo",
"ooooooooXoooXooooooooo",
"ooooooooXXoXXooooooooo",
"oooooooooXXXoooooooooo",
"oooooooooXXXoooooooooo",
"ooooooooooXooooooooooo",
"ooooooooo.X.oooooooooo",
"oooooooo..o...oooooooo",
"ooooooo.o.o.oo.ooooooo",
"oooooo.oo.o.ooo.oooooo",
"ooooo.ooo.o.oooo.ooooo",
"oooo.oooo.o.oooo.ooooo",
"oooo.oooo.oo.ooo.ooooo",
"oooo.oooo.oo.oo.oooooo",
"oooo.ooo.oooo..ooooooo",
"ooooo...oooooooooooooo",
"oooooooooooooooooooooo"
};
static const char* editcopy[] = {
/* columns rows colors chars-per-pixel */
"22 22 8 1",
"  c Gray100",
". c #8b8bfd",
"X c #3c3cfd",
"o c #000082",
"O c Gray0",
"+ c None",
"@ c Gray0",
"# c Gray0",
/* pixels */
"++++++++++++++++++++++",
"++++++++++++++++++++++",
"OOOOOOOO++++++++++++++",
"O      OO+++++++++++++",
"O OOOO O O++++++++++++",
"O      O  O+++++++++++",
"O OOOO Ooooooooo++++++",
"O      Oo      oo+++++",
"O OOOOO o OOOO oXo++++",
"O       o      o.Xo+++",
"O OOOOO o OOOO o .Xo++",
"O       o      oooooo+",
"O OOOOO o OOOO      o+",
"O       o           o+",
"O OOOOO o OOOOOOOOO o+",
"O       o           o+",
"OOOOOOOOo OOOOOOOOO o+",
"++++++++o           o+",
"++++++++o OOOOOOOOO o+",
"++++++++o           o+",
"++++++++ooooooooooooo+",
"++++++++++++++++++++++"
};
static const char* filenew[] = {
/* columns rows colors chars-per-pixel */
"22 22 8 1",
"  c Gray100",
". c Gray76",
"X c Gray53",
"o c Gray36",
"O c Gray18",
"+ c Gray0",
"@ c None",
"# c Gray0",
/* pixels */
"@@@@@@@@@@@@@@@@@@@@@@",
"@@@@++++++++++@@@@@@@@",
"@@@@+       +O+@@@@@@@",
"@@@@+       +oO+@@@@@@",
"@@@@+       +XoO+@@@@@",
"@@@@+       +.XoO+@@@@",
"@@@@+       + .XoO+@@@",
"@@@@+       +++++++@@@",
"@@@@+             +@@@",
"@@@@+             +@@@",
"@@@@+             +@@@",
"@@@@+             +@@@",
"@@@@+             +@@@",
"@@@@+             +@@@",
"@@@@+             +@@@",
"@@@@+             +@@@",
"@@@@+             +@@@",
"@@@@+             +@@@",
"@@@@+             +@@@",
"@@@@+++++++++++++++@@@",
"@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@"
};
static const char* filesave[] = {
/* columns rows colors chars-per-pixel */
"22 22 8 1",
"  c Gray100",
". c #cab5d1",
"X c #c1c1c1",
"o c #848200",
"O c Gray0",
"+ c None",
"@ c Gray0",
"# c Gray0",
/* pixels */
"++++++++++++++++++++++",
"+OOOOOOOOOOOOOOOOOOOO+",
"+OooOXXXXXXXXXXXXOXXO+",
"+OooOXXXXXXXXXXXXOXXO+",
"+OooOXXXXXXXXX.XXOOOO+",
"+OooOXXX..XXXXXXXOooO+",
"+OooOXXX..XXXXXXXOooO+",
"+OooOXXXXXXXXXXXXOooO+",
"+OooOXXXXXXXXXXXXOooO+",
"+OooOXXXXXXXXXXXXOooO+",
"+OooOXXXXXXXXXXXXOooO+",
"+OoooOOOOOOOOOOOOoooO+",
"+OooooooooooooooooooO+",
"+OooooooooooooooooooO+",
"+OoooOOOOOOOOOOOOOooO+",
"+OoooOOOOOOOOOXXXOooO+",
"+OoooOOOOOOOOOXXXOooO+",
"+OoooOOOOOOOOOXXXOooO+",
"+OoooOOOOOOOOOXXXOooO+",
"+OoooOOOOOOOOOXXXOooO+",
"++OOOOOOOOOOOOOOOOOO++",
"++++++++++++++++++++++"
};
static const char* fileopen[] = {
/* columns rows colors chars-per-pixel */
"22 22 8 1",
"  c Gray100",
". c Yellow",
"X c #848200",
"o c Gray0",
"O c None",
"+ c Gray0",
"@ c Gray0",
"# c Gray0",
/* pixels */
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOooooOOOOoO",
"OOOOOOOOOOOoOOOOooOooO",
"OOOOOOOOOOOOOOOOOOoooO",
"OOOOOOOOOOOOOOOOOooooO",
"OooooOOOOOOOOOOOoooooO",
"o. . ooooooooooOOOOOOO",
"o . . . . . . oOOOOOOO",
"o. . . . . . .oOOOOOOO",
"o . . . . . . oOOOOOOO",
"o. . . ooooooooooooooo",
"o . . ooXXXXXXXXXXXXoo",
"o. . ooXXXXXXXXXXXXooO",
"o . ooXXXXXXXXXXXXooOO",
"o. ooXXXXXXXXXXXXooOOO",
"o ooXXXXXXXXXXXXooOOOO",
"oooXXXXXXXXXXXXooOOOOO",
"ooXXXXXXXXXXXXooOOOOOO",
"oooooooooooooooOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOO"
};
static const char *left_arrow[] = {
/* columns rows colors chars-per-pixel */
"22 22 113 2",
"   c #08082929efef",
".  c #00002929ffff",
"X  c #08082929f7f7",
"o  c #08083131ffff",
"O  c #10102929e7e7",
"+  c #10102929ffff",
"@  c #18183131e7e7",
"#  c #18183939e7e7",
"$  c #10103131ffff",
"%  c #10103939ffff",
"&  c #21213939e7e7",
"*  c #10104242ffff",
"=  c #18184242ffff",
"-  c #29294242dede",
";  c #31314242d6d6",
":  c #39395252dede",
">  c #21214242e7e7",
",  c #29294242e7e7",
"<  c #21215252ffff",
"1  c #29295252ffff",
"2  c #29295a5affff",
"3  c #31316363ffff",
"4  c #39396363ffff",
"5  c #39396b6bffff",
"6  c #5a5a6b6bbdbd",
"7  c #6b6b7373b5b5",
"8  c #42425252c6c6",
"9  c #4a4a5a5acece",
"0  c #42425252d6d6",
"q  c #52526363c6c6",
"w  c #5a5a6b6bc6c6",
"e  c #42426363e7e7",
"r  c #42426b6bffff",
"t  c #42427373efef",
"y  c #42427373ffff",
"u  c #4a4a7373ffff",
"i  c #4a4a7b7bffff",
"p  c #7b7b8484b5b5",
"a  c #52528484ffff",
"s  c #5a5a8c8cffff",
"d  c #6b6b8c8cdede",
"f  c #7b7b8484c6c6",
"g  c #7b7b8c8cc6c6",
"h  c #7b7b8c8ccece",
"j  c #73738c8cd6d6",
"k  c #7b7b8c8cd6d6",
"l  c #7b7b9494d6d6",
"z  c #7b7b9c9cd6d6",
"x  c #63638484efef",
"c  c #63638c8cffff",
"v  c #6b6b9494efef",
"b  c #63639494ffff",
"n  c #63639c9cffff",
"m  c #6b6b9c9cffff",
"M  c #73739494e7e7",
"N  c #73739c9ce7e7",
"B  c #73739c9cf7f7",
"V  c #7373a5a5ffff",
"C  c #7b7badadffff",
"Z  c #7b7bb5b5ffff",
"A  c #84849494bdbd",
"S  c #8c8c9494bdbd",
"D  c #94949494adad",
"F  c #94949494b5b5",
"G  c #94949c9cbdbd",
"H  c #9c9c9c9cbdbd",
"J  c #9c9ca5a5b5b5",
"K  c Gray68",
"L  c #a5a5a5a5bdbd",
"P  c #adadadadb5b5",
"I  c #adadadadbdbd",
"U  c #b5b5b5b5bdbd",
"Y  c #b5b5bdbdbdbd",
"T  c Gray74",
"R  c #84849494c6c6",
"E  c #8c8c9c9cc6c6",
"W  c #8484a5a5efef",
"Q  c #8c8ca5a5e7e7",
"!  c #8484adadffff",
"~  c #8c8cb5b5efef",
"^  c #8484b5b5ffff",
"/  c #8484bdbdffff",
"(  c #8c8cbdbdffff",
")  c #9c9cb5b5f7f7",
"_  c #9c9cbdbdf7f7",
"`  c #adadadadc6c6",
"'  c #b5b5b5b5c6c6",
"]  c #b5b5bdbdc6c6",
"[  c #bdbdbdbdc6c6",
"{  c #adadbdbdefef",
"}  c #9494c6c6ffff",
"|  c #9494ceceffff",
" . c #9c9cceceffff",
".. c #a5a5d6d6ffff",
"X. c #adaddedeffff",
"o. c #bdbdcecef7f7",
"O. c #b5b5dedeffff",
"+. c #bdbdd6d6ffff",
"@. c #adade7e7ffff",
"#. c #bdbde7e7ffff",
"$. c #c0c0c0c0c0c0",
"%. c #cecededef7f7",
"&. c #c6c6e7e7ffff",
"*. c #c6c6efefffff",
"=. c #cecee7e7ffff",
"-. c #d6d6e7e7ffff",
";. c #dedee7e7ffff",
":. c #d6d6ffffffff",
">. c #dedeffffffff",
",. c #efefffffffff",
"<. c #f7f7ffffffff",
"1. c Gray100",
"2. c None",
/* pixels */
"2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.",
"2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.",
"2.2.2.2.2.2.2.G Q k U 2.2.2.2.2.2.2.2.2.2.2.",
"2.2.2.2.2.2.F ) 1.{ ' 2.2.2.2.2.2.2.2.2.2.2.",
"2.2.2.2.T E o.1.>.~ U 2.2.2.2.2.2.2.2.2.2.2.",
"2.2.2.T S -.1.:...N ] 2.2.2.2.2.2.2.2.2.2.2.",
"2.2.T R %.1.:. .( M U 2.2.2.2.2.2.2.2.2.2.2.",
"2.U g ;.1.&.} ^ Z B F T [ Y ' H R g j M j L ",
"[ h -.1.*./ C C C m t d l z W _ X.=.*.#.n 0 ",
"A +.<.*.} ! C V V V C ..O.#.&.O.X. .( C 5 , ",
"W ,.@.( C C V V V V C C ! C V V V m m b 2 > ",
"c | ^ ! C V V V V V V V m m m m m b b s 1 # ",
"q 1 s m V m m m V m u 4 5 y i a a s a a < , ",
"K ; * u b m m m V b + O @   X $ = = < 1 % - ",
"2.J - = r c b m m c 7 J I D f 6 8 ; - , - p ",
"2.2.U 0 o 3 a b b v U 2.2.2.2.2.2.T U U U 2.",
"2.2.2.P 9 o 3 s s x I 2.2.2.2.2.2.2.2.2.2.2.",
"2.2.2.2.Y w o 2 y e I 2.2.2.2.2.2.2.2.2.2.2.",
"2.2.2.2.2.T 7 . * , ` 2.2.2.2.2.2.2.2.2.2.2.",
"2.2.2.2.2.2.T p & : U 2.2.2.2.2.2.2.2.2.2.2.",
"2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.",
"2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2."
};

static const char *right_arrow[] = {
/* columns rows colors chars-per-pixel */
"22 22 113 2",
"   c #00001818f7f7",
".  c #00001818ffff",
"X  c #00002121f7f7",
"o  c #00002121ffff",
"O  c #00002929ffff",
"+  c #10103131efef",
"@  c #18183131e7e7",
"#  c #18183939e7e7",
"$  c #10103131ffff",
"%  c #10103939ffff",
"&  c #29293939d6d6",
"*  c #31313939cece",
"=  c #10104242ffff",
"-  c #18184242ffff",
";  c #39394a4ac6c6",
":  c #29295252ffff",
">  c #29295a5affff",
",  c #31315252efef",
"<  c #31315a5affff",
"1  c #31316363ffff",
"2  c #39396b6bffff",
"3  c #4a4a5a5abdbd",
"4  c #63636b6bbdbd",
"5  c #6b6b7373b5b5",
"6  c #73737b7bbdbd",
"7  c #42424a4ac6c6",
"8  c #4a4a5252c6c6",
"9  c #4a4a5a5acece",
"0  c #52525a5ac6c6",
"q  c #52526363c6c6",
"w  c #52526b6bcece",
"e  c #5a5a6b6bc6c6",
"r  c #4a4a7373e7e7",
"t  c #4a4a7373efef",
"y  c #42427373ffff",
"u  c #4a4a7b7bffff",
"i  c #52527b7bffff",
"p  c #63637373c6c6",
"a  c #63637373cece",
"s  c #6b6b7b7bc6c6",
"d  c #7b7b8484b5b5",
"f  c #5a5a8484e7e7",
"g  c #5a5a8484efef",
"h  c #52528484f7f7",
"j  c #52528484ffff",
"k  c #5a5a8c8cffff",
"l  c #5a5a9494ffff",
"z  c #6b6b8484d6d6",
"x  c #6b6b8c8cd6d6",
"c  c #73738484c6c6",
"v  c #7b7b8c8ccece",
"b  c #63638484e7e7",
"n  c #63638c8cefef",
"m  c #6b6b8484e7e7",
"M  c #63639494ffff",
"N  c #6b6b9494ffff",
"B  c #6b6b9c9cffff",
"V  c #73739c9ce7e7",
"C  c #73739c9cffff",
"Z  c #7373a5a5ffff",
"A  c #7b7badadffff",
"S  c #84848484b5b5",
"D  c #84848c8cbdbd",
"F  c #8c8c9494b5b5",
"G  c #94949494b5b5",
"H  c #94949c9cb5b5",
"J  c #9c9c9c9cb5b5",
"K  c #9c9c9c9cbdbd",
"L  c #a5a5a5a5b5b5",
"P  c #adadadadb5b5",
"I  c #adadadadbdbd",
"U  c #b5b5b5b5bdbd",
"Y  c #b5b5bdbdbdbd",
"T  c Gray74",
"R  c #84849494c6c6",
"E  c #84849494cece",
"W  c #8c8ca5a5cece",
"Q  c #8c8cadadd6d6",
"!  c #9c9ca5a5c6c6",
"~  c #9494adadd6d6",
"^  c #9c9cadadd6d6",
"/  c #9c9cbdbdd6d6",
"(  c #8c8cadadefef",
")  c #8484adadffff",
"_  c #8484b5b5ffff",
"`  c #8c8cb5b5f7f7",
"'  c #8c8cb5b5ffff",
"]  c #8c8cbdbdffff",
"[  c #9494bdbdffff",
"{  c #a5a5bdbdd6d6",
"}  c #b5b5b5b5c6c6",
"|  c #bdbdbdbdc6c6",
" . c #adadbdbdefef",
".. c #8c8cc6c6ffff",
"X. c #9494c6c6ffff",
"o. c #9494ceceffff",
"O. c #9c9cceceffff",
"+. c #a5a5d6d6ffff",
"@. c #adaddedeffff",
"#. c #b5b5d6d6ffff",
"$. c #adade7e7ffff",
"%. c #b5b5e7e7ffff",
"&. c #bdbde7e7ffff",
"*. c #bdbdefefffff",
"=. c #c0c0c0c0c0c0",
"-. c #c6c6cececece",
";. c #c6c6efefffff",
":. c #ceceefefffff",
">. c #c6c6f7f7ffff",
",. c #cecef7f7ffff",
"<. c #d6d6f7f7ffff",
"1. c #e7e7ffffffff",
"2. c None",
/* pixels */
"2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.",
"2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.",
"2.2.2.2.2.2.2.2.2.2.2.T ! f G T 2.2.2.2.2.2.",
"2.2.2.2.2.2.2.2.2.2.2.Y -.;.t D 2.2.2.2.2.2.",
"2.2.2.2.2.2.2.2.2.2.2.T { *.o.h p T 2.2.2.2.",
"2.2.2.2.2.2.2.2.2.2.2.Y / O.+.O.u 6 T 2.2.2.",
"2.2.2.2.2.2.2.2.2.2.2.T Q X.X.o.O.k a U 2.2.",
"P E m z c R K } T | T H V ] ] ] X.X.l 9 I 2.",
"x <.1.:.#.O.` ( W ~ ^  .' A _ _ ] ] ] j w P ",
"g >.%.$.@.%.%.&.;.,.<.;.[ A _ _ _ ) _ ] u q ",
"n $.O.[ ] ] ] _ ] ] ] _ A ) A ) A A Z Z M , ",
"g O.X._ _ A A A A A A A _ A A A A Z N j > # ",
"r .._ Z B M k k u 2 2 k A A A A C B i : o 3 ",
"e y 1 : - $ + @ & ; ; + k ) Z Z B u - o 7 U ",
"L 9 & & 3 4 S J U T T F b Z C N j - o * L 2.",
"2.Y P Y 2.2.2.2.2.2.2.T W M M y % o 8 P 2.2.",
"2.2.2.2.2.2.2.2.2.2.2.2.W j y = . 0 Y 2.2.2.",
"2.2.2.2.2.2.2.2.2.2.2.2.v < % X 4 P 2.2.2.2.",
"2.2.2.2.2.2.2.2.2.2.2.2.s O   5 | 2.2.2.2.2.",
"2.2.2.2.2.2.2.2.2.2.2.2.D & d T 2.2.2.2.2.2.",
"2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.",
"2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2.2."
};

static QPixmap toXpm( Icon::Symbol s )
{
	switch( s )
	{
	case Icon::FileOpen:
		return fileopen;
	case Icon::FileSave:
		return filesave;
	case Icon::FileNew:
		return filenew;
	case Icon::EditCopy:
		return editcopy;
	case Icon::EditCut:
		return editcut;
	case Icon::EditPaste:
		return editpaste;
	case Icon::EditUndo:
		return editundo;
	case Icon::EditRedo:
		return editredo;
	case Icon::Help:
		return help;
	case Icon::Home:
		return home;
	case Icon::Pointer:
		return pointer;
	case Icon::Left:
		return left_arrow;
	case Icon::Right:
		return right_arrow;
	case Icon::Magnify:
		return magnify;
	default:
		return empty;
	}
}

Icon::Icon(const char* xpm[]):
	d_pixmap( xpm )
{

}

Icon::Icon(Symbol s):
	d_pixmap( toXpm( s ) )
{

}

Icon::~Icon()
{
}

void Icon::draw( Canvas & v, const Allocation & a)
{
	v.drawIcon( a.getX(), a.getY(), this );
}

void Icon::request(Requisition & r)
{
	Requirement& rx = r.getRequirement( DimensionX );
	Requirement& ry = r.getRequirement( DimensionY );
	rx.setNatural( Viewport::toTwip( d_pixmap.width() ) );
	ry.setNatural( Viewport::toTwip( d_pixmap.height() ) );
}

void Icon::pick( Twips x, Twips y, const Allocation& a, Trace& t)
{
    if( a.isHit( x, y ) ) 
	{
		t.push_back( this );
	}
}

Icon::Icon():
	d_pixmap( empty )
{

}
