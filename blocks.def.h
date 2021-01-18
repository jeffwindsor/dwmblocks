//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    { "", "~/.local/scripts/statusbar/clock",       5,  11 },
    { "", "~/.local/scripts/statusbar/wifinetwork", 60, 12 },
    { "", "~/.local/scripts/statusbar/volume",      20, 13 },
    { "", "~/.local/scripts/statusbar/cpu",         5,  14 },
    { "", "~/.local/scripts/statusbar/memory",      5,  15 },
    { "", "~/.local/scripts/statusbar/disk",        60, 16 },
    { "", "~/.local/scripts/statusbar/battery",     20, 17 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " : ";
static unsigned int delimLen = 5;
