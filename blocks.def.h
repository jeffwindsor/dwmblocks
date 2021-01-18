//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    { "", "~/.local/scripts/sb-clock",       5,  11 },
    { "", "~/.local/scripts/sb-wifinetwork", 60, 12 },
    { "", "~/.local/scripts/sb-volume",      20, 13 },
    { "", "~/.local/scripts/sb-cpu",         5,  14 },
    { "", "~/.local/scripts/sb-memory",      5,  15 },
    { "", "~/.local/scripts/sb-disk",        60, 16 },
    { "", "~/.local/scripts/sb-battery",     20, 17 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " : ";
static unsigned int delimLen = 5;
