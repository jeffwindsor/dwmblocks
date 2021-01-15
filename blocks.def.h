//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    { " ",     "~/.local/statusbar/clock",               5,    13 },
    { " ",     "~/.local/statusbar/wifinetwork",         60,   15 },
    { " ",     "~/.local/statusbar/volume",              20,   10 },
    { " ",     "~/.local/statusbar/cpu",                 5,    18 },
    { " ",     "~/.local/statusbar/memory",              5,    19 },
    { " ",     "~/.local/statusbar/disk",                60,   16 },
    //{ " ",     "~/.local/statusbar/lightlockerstatus",   0,    14 },
    //{ " ",     "~/.local/statusbar/kblayout",            0,    12 },
    //{ "  ",     "~/.local/statusbar/brightness",         0,    11 },
    { " ",     "~/.local/statusbar/battery",             20,    17 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "";
static unsigned int delimLen = 5;
