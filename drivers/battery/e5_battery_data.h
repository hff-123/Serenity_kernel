#define CAPACITY_MAX			980
#define CAPACITY_MAX_MARGIN     30
#define CAPACITY_MIN			0

#if defined(CONFIG_MACH_E5_USA_TFN)
static sec_bat_adc_table_data_t temp_table[] = {
	{25954,	900},
	{26005,	890},
	{26052,	880},
	{26105,	870},
	{26151,	860},
	{26207,	850},
	{26253,	840},
	{26302,	830},
	{26354,	820},
	{26405,	810},
	{26454,	800},
	{26503,	790},
	{26554,	780},
	{26602,	770},
	{26657,	760},
	{26691,	750},
	{26757,	740},
	{26823,	730},
	{26889,	720},
	{26955,	710},
	{27020,	700},
	{27081,	690},
	{27142,	680},
	{27203,	670},
	{27264,	660},
	{27607, 650},
	{27881, 620},
	{28061, 600},
	{28345, 580},
	{28729, 550},
	{28921, 530},
	{29177, 510},
	{29454, 490},
	{29601, 480},
	{29917, 460},
	{30212, 440},
	{30894, 400},
	{31898, 350},
	{32564, 300},
	{33513, 250},
	{34570, 200},
	{35669, 150},
	{36261, 130},
	{37487, 100},
	{37293, 80},
	{37967, 50},
	{38347, 30},
	{38700, 10},
	{38909, 0},
	{39107, -10},
	{39423, -30},
	{39698, -50},
	{40009, -70},
	{40438, -100},
	{40982, -150},
	{41459, -200},
};
#else
static sec_bat_adc_table_data_t temp_table[] = {
	{26034, 900},
	{26255, 850},
	{26535, 800},
	{26847, 750},
	{27215, 700},
	{27647,	650},
	{27940,	620},
	{28042,	610},
	{28146,	600},
	{28262,	590},
	{28378,	580},
	{28748,	550},
	{29414,	500},
	{29699,	480},
	{29867,	470},
	{30016,	460},
	{30174,	450},
	{30332,	440},
	{31008,	400},
	{31936,	350},
	{32984,	300},
	{34034,	250},
	{35115,	200},
	{36203,	150},
	{37253,	100},
	{38228,	50},
	{38775,	20},
	{38948,	10},
	{39125,	0},
	{39290,	-10},
	{39450,	-20},
	{39610,	-30},
	{39758,	-40},
	{39912,	-50},
	{40058,	-60},
	{40201,	-70},
	{40590,	-100},
	{41146,	-150},
	{41637,	-200},
	{41976,	-250},
	{42273,	-300},
};

static sec_bat_adc_table_data_t temp_table_e5_r09[] = {
	{25951, 900},
	{26158, 850},
	{26398, 800},
	{26682, 750},
	{27002, 700},
	{27357,	650},
	{27605,	620},
	{27695,	610},
	{27782,	600},
	{27874,	590},
	{27968,	580},
	{28302,	550},
	{28842,	500},
	{29078,	480},
	{29191,	470},
	{29315,	460},
	{29430,	450},
	{29562,	440},
	{30079,	400},
	{30712,	350},
	{31363,	300},
	{32290,	250},
	{32793,	200},
	{33441,	150},
	{34055,	100},
	{34604,	50},
	{34897,	20},
	{34978,	10},
	{35072,	0},
	{35165,	-10},
	{35245,	-20},
	{35327,	-30},
	{35407,	-40},
	{35480,	-50},
	{35549,	-60},
	{35618,	-70},
	{35818,	-100},
	{36094,	-150},
	{36308,	-200},
	{36484,	-250},
	{36618,	-300},
};
#endif

#define TEMP_HIGHLIMIT_THRESHOLD_EVENT		800
#define TEMP_HIGHLIMIT_RECOVERY_EVENT		750
#define TEMP_HIGHLIMIT_THRESHOLD_NORMAL		800
#define TEMP_HIGHLIMIT_RECOVERY_NORMAL		750
#define TEMP_HIGHLIMIT_THRESHOLD_LPM		800
#define TEMP_HIGHLIMIT_RECOVERY_LPM		750

#if defined(CONFIG_MACH_E5_USA_TFN)
#define TEMP_HIGH_THRESHOLD_EVENT  635
#define TEMP_HIGH_RECOVERY_EVENT   490
#define TEMP_LOW_THRESHOLD_EVENT   (-50)
#define TEMP_LOW_RECOVERY_EVENT    1
#define TEMP_HIGH_THRESHOLD_NORMAL 525
#define TEMP_HIGH_RECOVERY_NORMAL  475
#define TEMP_LOW_THRESHOLD_NORMAL  (-50)
#define TEMP_LOW_RECOVERY_NORMAL   5
#define TEMP_HIGH_THRESHOLD_LPM    510
#define TEMP_HIGH_RECOVERY_LPM     490
#define TEMP_LOW_THRESHOLD_LPM     (-30)
#define TEMP_LOW_RECOVERY_LPM      0
#else
#define TEMP_HIGH_THRESHOLD_EVENT  600
#define TEMP_HIGH_RECOVERY_EVENT   490
#define TEMP_LOW_THRESHOLD_EVENT   (-50)
#define TEMP_LOW_RECOVERY_EVENT    1
#define TEMP_HIGH_THRESHOLD_NORMAL 600
#define TEMP_HIGH_RECOVERY_NORMAL  490
#define TEMP_LOW_THRESHOLD_NORMAL  (-50)
#define TEMP_LOW_RECOVERY_NORMAL   1
#define TEMP_HIGH_THRESHOLD_LPM    600
#define TEMP_HIGH_RECOVERY_LPM     490
#define TEMP_LOW_THRESHOLD_LPM     (-50)
#define TEMP_LOW_RECOVERY_LPM      1
#endif

#if defined(CONFIG_BATTERY_SWELLING)
#define BATT_SWELLING_HIGH_TEMP_BLOCK		500
#define BATT_SWELLING_HIGH_TEMP_RECOV		450
#define BATT_SWELLING_LOW_TEMP_BLOCK		-200
#define BATT_SWELLING_LOW_TEMP_RECOV		-200
#define BATT_SWELLING_RECHG_VOLTAGE		4150
#define BATT_SWELLING_BLOCK_TIME	10 * 60 /* 10 min */
#endif
