// Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"[MEM: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 30, 0},
    {"", "date '+%a. %d %b - %H:%M'", 5, 0},
    {"VOL: ", "pamixer --get-volume-human", 0, 10},
    //{"VOL:", "awk -F\"[][]\" '/Left:/ { print $2 }' <(amixer sget Master)", 0, 10},
    {"BAT: ", "echo \"$(</sys/class/power_supply/BAT0/capacity)%\"", 60, 0},
    {"BL: ", "echo \"$(brightnessctl -m -d 'intel_backlight' | cut -d, -f4)]\"", 0, 20},
};

// Sets delimeter between status commands. NULL character ('\0') means no delimeter.

static char delim[] = "] [";
static unsigned int delimLen = 3;
