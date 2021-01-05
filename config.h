//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"","date \"+%a %b %d %I:%M%p\n\"",5,3},
	{"","printf \"[%d%%]\n\" \"$(cat /sys/class/power_supply/BAT1/capacity)\"",	60,	1},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:
// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.config/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
