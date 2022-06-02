#ifdef USE_CATPPUCCIN
static const char *colorname[] = {
	/* 8 normal colors */
	"#6E6C7E",
	"#F28FAD",
	"#ABE9B3",
	"#FAE3B0",
	"#96CDFB",
	"#F5C2E7",
	"#89DCEB",
	"#D9E0EE",

	/* 8 bright colors */
	"#988BA2",
	"#F28FAD",
	"#ABE9B3",
	"#FAE3B0",
	"#96CDFB",
	"#F5C2E7",
	"#89DCEB",
	"#D9E0EE",

	[256] = "#1E1E2E", /* default foreground colour */
	[257] = "#D9E0EE", /* default background colour */
	[258] = "#C3BAC6", /*575268*/
};

#else
static const char *colorname[] = {
	/* 8 normal colors */
	"black",
	"red3",
	"green3",
	"yellow3",
	"blue2",
	"magenta3",
	"cyan3",
	"gray90",

	/* 8 bright colors */
	"gray50",
	"red",
	"green",
	"yellow",
	"#5c5cff",
	"magenta",
	"cyan",
	"white",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#cccccc",
	"#555555",
	"gray90", /* default foreground colour */
	"black", /* default background colour */
};
#endif
