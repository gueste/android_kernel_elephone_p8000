#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#endif

#define RBAT_PULL_UP_VOLT          1800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,68237},
        {-15,53650},
        {-10,42506},
        { -5,33892},
        {  0,27219},
        {  5,22021},
        { 10,17926},
        { 15,14674},
        { 20,12081},
        { 25,10000},
        { 30,8315},
        { 35,6948},
        { 40,5834},
        { 45,4917},
        { 50,4161},
        { 55,3535},
        { 60,3014}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
	{0,4173}, 
	{2,4152}, 
	{4,4134}, 
	{5,4115}, 
	{7,4102}, 
	{9,4089}, 
	{11,4074}, 
	{13,4050}, 
	{14,4021}, 
	{16,3996}, 
	{18,3977}, 
	{20,3962}, 
	{22,3949}, 
	{24,3937}, 
	{25,3927}, 
	{27,3916}, 
	{29,3904}, 
	{31,3893}, 
	{33,3882}, 
	{34,3872}, 
	{36,3862}, 
	{38,3854}, 
	{40,3845}, 
	{42,3837}, 
	{44,3830}, 
	{45,3823}, 
	{47,3817}, 
	{49,3810}, 
	{51,3805}, 
	{53,3800}, 
	{54,3796}, 
	{56,3792}, 
	{58,3789}, 
	{60,3785}, 
	{62,3782}, 
	{63,3778}, 
	{65,3773}, 
	{67,3768}, 
	{69,3763}, 
	{71,3758}, 
	{73,3752}, 
	{74,3746}, 
	{76,3740}, 
	{78,3735}, 
	{80,3730}, 
	{82,3725}, 
	{83,3720}, 
	{85,3716}, 
	{87,3711}, 
	{89,3707}, 
	{91,3700}, 
	{92,3690}, 
	{94,3675}, 
	{96,3667}, 
	{97,3661}, 
	{98,3656}, 
	{99,3652}, 
	{99,3648}, 
	{100,3644}, 
	{100,3400}
};      
        
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
	{0,4185}, 
	{2,4165}, 
	{3,4148}, 
	{5,4131}, 
	{7,4115}, 
	{9,4100}, 
	{10,4089}, 
	{12,4079}, 
	{14,4063}, 
	{16,4037}, 
	{17,4012}, 
	{19,3994}, 
	{21,3981}, 
	{23,3971}, 
	{24,3960}, 
	{26,3950}, 
	{28,3939}, 
	{30,3926}, 
	{31,3913}, 
	{33,3900}, 
	{35,3888}, 
	{37,3877}, 
	{38,3866}, 
	{40,3856}, 
	{42,3848}, 
	{44,3840}, 
	{45,3832}, 
	{47,3826}, 
	{49,3819}, 
	{51,3814}, 
	{52,3808}, 
	{54,3803}, 
	{56,3799}, 
	{58,3794}, 
	{59,3790}, 
	{61,3787}, 
	{63,3784}, 
	{65,3782}, 
	{66,3779}, 
	{68,3776}, 
	{70,3772}, 
	{72,3768}, 
	{73,3764}, 
	{75,3759}, 
	{77,3753}, 
	{79,3747}, 
	{80,3740}, 
	{82,3732}, 
	{84,3724}, 
	{86,3716}, 
	{87,3710}, 
	{89,3705}, 
	{91,3701}, 
	{92,3695}, 
	{94,3683}, 
	{96,3648}, 
	{98,3580}, 
	{99,3463}, 
	{100,3368}, 
	{100,3305} 
    
};           

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
	{0,4200}, 
	{2,4176}, 
	{3,4156}, 
	{5,4138}, 
	{7,4122}, 
	{9,4106}, 
	{10,4091}, 
	{12,4079}, 
	{14,4065}, 
	{15,4049}, 
	{17,4030}, 
	{19,4015}, 
	{21,4002}, 
	{22,3991}, 
	{24,3982}, 
	{26,3972}, 
	{27,3961}, 
	{29,3950}, 
	{31,3940}, 
	{32,3930}, 
	{34,3919}, 
	{36,3909}, 
	{38,3898}, 
	{39,3886}, 
	{41,3874}, 
	{43,3862}, 
	{44,3851}, 
	{46,3841}, 
	{48,3833}, 
	{50,3825}, 
	{51,3819}, 
	{53,3813}, 
	{55,3808}, 
	{56,3803}, 
	{58,3799}, 
	{60,3796}, 
	{62,3792}, 
	{63,3788}, 
	{65,3785}, 
	{67,3782}, 
	{68,3780}, 
	{70,3779}, 
	{72,3776}, 
	{74,3773}, 
	{75,3769}, 
	{77,3764}, 
	{79,3757}, 
	{80,3751}, 
	{82,3745}, 
	{84,3735}, 
	{86,3724}, 
	{87,3713}, 
	{89,3699}, 
	{91,3696}, 
	{92,3693}, 
	{94,3691}, 
	{96,3676}, 
	{97,3614}, 
	{99,3508}, 
	{100,3316}
};     

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
	{0 , 4173 }, 
	{2 , 4152 }, 
	{3 , 4134 }, 
	{5 , 4117 }, 
	{7 , 4101 }, 
	{8 , 4086 }, 
	{10 , 4071 }, 
	{12 , 4057 }, 
	{14 , 4043 }, 
	{15 , 4028 }, 
	{17 , 4014 }, 
	{19 , 4002 }, 
	{20 , 3990 }, 
	{22 , 3978 }, 
	{24 , 3966 }, 
	{25 , 3955 }, 
	{27 , 3944 }, 
	{29 , 3934 }, 
	{30 , 3924 }, 
	{32 , 3914 }, 
	{34 , 3905 }, 
	{36 , 3896 }, 
	{37 , 3888 }, 
	{39 , 3879 }, 
	{41 , 3869 }, 
	{42 , 3856 }, 
	{44 , 3841 }, 
	{46 , 3829 }, 
	{47 , 3820 }, 
	{49 , 3813 }, 
	{51 , 3807 }, 
	{52 , 3801 }, 
	{54 , 3796 }, 
	{56 , 3792 }, 
	{58 , 3788 }, 
	{59 , 3784 }, 
	{61 , 3780 }, 
	{63 , 3777 }, 
	{64 , 3774 }, 
	{66 , 3771 }, 
	{68 , 3769 }, 
	{69 , 3765 }, 
	{71 , 3756 }, 
	{73 , 3749 }, 
	{74 , 3744 }, 
	{76 , 3737 }, 
	{78 , 3730 }, 
	{80 , 3724 }, 
	{81 , 3716 }, 
	{83 , 3705 }, 
	{85 , 3695 }, 
	{86 , 3680 }, 
	{88 , 3676 }, 
	{90 , 3674 }, 
	{91 , 3671 }, 
	{93 , 3661 }, 
	{95 , 3669 }, 
	{96 , 3618 }, 
	{98 , 3567 }, 
	{100 , 3437 } 
};           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
	{836,4173}, 
	{836,4152}, 
	{864,4134}, 
	{832,4115}, 
	{839,4102}, 
	{820,4089}, 
	{855,4074}, 
	{839,4050}, 
	{821,4021}, 
	{801,3996}, 
	{802,3977}, 
	{800,3962}, 
	{800,3949}, 
	{801,3937}, 
	{800,3927}, 
	{799,3916}, 
	{798,3904}, 
	{797,3893}, 
	{796,3882}, 
	{798,3872}, 
	{802,3862}, 
	{808,3854}, 
	{812,3845}, 
	{820,3837}, 
	{826,3830}, 
	{837,3823}, 
	{843,3817}, 
	{852,3810}, 
	{861,3805}, 
	{869,3800}, 
	{882,3796}, 
	{894,3792}, 
	{909,3789}, 
	{926,3785}, 
	{946,3782}, 
	{965,3778}, 
	{988,3773}, 
	{1013,3768}, 
	{1036,3763}, 
	{1061,3758}, 
	{1086,3752}, 
	{1111,3746}, 
	{1139,3740}, 
	{1161,3735}, 
	{1185,3730}, 
	{1209,3725}, 
	{1233,3720}, 
	{1260,3716}, 
	{1289,3711}, 
	{1324,3707}, 
	{1365,3700}, 
	{1407,3690}, 
	{1454,3675}, 
	{1526,3667}, 
	{1519,3661}, 
	{1512,3656}, 
	{1505,3652}, 
	{1498,3648}, 
	{1490,3644}, 
	{1084,3400}

};      

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
	{291,4185}, 
	{291,4165}, 
	{295,4148}, 
	{299,4131}, 
	{302,4115}, 
	{304,4100}, 
	{311,4089}, 
	{324,4079}, 
	{331,4063}, 
	{325,4037}, 
	{320,4012}, 
	{318,3994}, 
	{317,3981}, 
	{318,3971}, 
	{316,3960}, 
	{313,3950}, 
	{332,3939}, 
	{316,3926}, 
	{311,3913}, 
	{308,3900}, 
	{305,3888}, 
	{303,3877}, 
	{302,3866}, 
	{302,3856}, 
	{303,3848}, 
	{304,3840}, 
	{306,3832}, 
	{309,3826}, 
	{311,3819}, 
	{315,3814}, 
	{319,3808}, 
	{323,3803}, 
	{326,3799}, 
	{330,3794}, 
	{334,3790}, 
	{337,3787}, 
	{341,3784}, 
	{346,3782}, 
	{352,3779}, 
	{358,3776}, 
	{364,3772}, 
	{370,3768}, 
	{377,3764}, 
	{385,3759}, 
	{392,3753}, 
	{400,3747}, 
	{409,3740}, 
	{416,3732}, 
	{422,3724}, 
	{431,3716}, 
	{447,3710}, 
	{474,3705}, 
	{515,3701}, 
	{572,3695}, 
	{645,3683}, 
	{718,3648}, 
	{824,3580}, 
	{1020,3463}, 
	{1032,3368}, 
	{927,3305}
     
};     

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
	{115,4200}, 
	{115,4176}, 
	{115,4156}, 
	{115,4138}, 
	{115,4122}, 
	{117,4106}, 
	{118,4091}, 
	{118,4079}, 
	{122,4065}, 
	{125,4049}, 
	{123,4030}, 
	{127,4015}, 
	{128,4002}, 
	{132,3991}, 
	{133,3982}, 
	{135,3972}, 
	{138,3961}, 
	{142,3950}, 
	{143,3940}, 
	{147,3930}, 
	{147,3919}, 
	{148,3909}, 
	{147,3898}, 
	{143,3886}, 
	{138,3874}, 
	{133,3862}, 
	{128,3851}, 
	{125,3841}, 
	{123,3833}, 
	{120,3825}, 
	{120,3819}, 
	{120,3813}, 
	{122,3808}, 
	{122,3803}, 
	{123,3799}, 
	{127,3796}, 
	{127,3792}, 
	{127,3788}, 
	{127,3785}, 
	{128,3782}, 
	{130,3780}, 
	{133,3779}, 
	{132,3776}, 
	{133,3773}, 
	{133,3769}, 
	{133,3764}, 
	{132,3757}, 
	{133,3751}, 
	{135,3745}, 
	{135,3735}, 
	{135,3724}, 
	{137,3713}, 
	{128,3699}, 
	{133,3696}, 
	{138,3693}, 
	{150,3691}, 
	{157,3676}, 
	{153,3614}, 
	{165,3508}, 
	{210,3316}
   
}; 

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
	{75,4173}, 
	{75,4152}, 
	{79,4134}, 
	{80,4117}, 
	{82,4101}, 
	{84,4086}, 
	{98,4071}, 
	{101,4057}, 
	{103,4043}, 
	{103,4028}, 
	{105,4014}, 
	{108,4002}, 
	{109,3990}, 
	{111,3978}, 
	{113,3966}, 
	{114,3955}, 
	{117,3944}, 
	{119,3934}, 
	{122,3924}, 
	{124,3914}, 
	{127,3905}, 
	{130,3896}, 
	{133,3888}, 
	{136,3879}, 
	{136,3869}, 
	{131,3856}, 
	{123,3841}, 
	{119,3829}, 
	{118,3820}, 
	{119,3813}, 
	{120,3807}, 
	{121,3801}, 
	{122,3796}, 
	{124,3792}, 
	{125,3788}, 
	{127,3784}, 
	{129,3780}, 
	{131,3777}, 
	{133,3774}, 
	{134,3771}, 
	{136,3769}, 
	{135,3765}, 
	{125,3756}, 
	{123,3749}, 
	{125,3744}, 
	{124,3737}, 
	{124,3730}, 
	{125,3724}, 
	{124,3716}, 
	{119,3705}, 
	{119,3695}, 
	{114,3680}, 
	{128,3676}, 
	{132,3674}, 
	{134,3671}, 
	{127,3661}, 
	{160,3669}, 
	{162,3618}, 
	{237,3567}, 
	{293,3437}  
}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};    

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H

