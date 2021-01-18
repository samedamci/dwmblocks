// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/

    /* {"  ", "sb-minexmr",		360,		0}, */
    {"  ",    "sb-disk",       60,          0},
    {" ",     "sb-internet",   60,          0},
    {" ",     "sb-music",      1,           2},
    {"",       "sb-alsa",       4,           1},
    {"",       "sb-mails",      50,          0},
    {" ",     "sb-packages",   50,          0},
    {" ",     "sb-date",       60,          0},
    {" ",     "sb-clock",      60,          0},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
