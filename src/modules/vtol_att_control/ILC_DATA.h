#ifndef ILC_DATA_H
#define ILC_DATA_H

#define NUM_CL_POINTS             (90)

/*
const float CL_SYS_ID[10][NUM_CL_POINTS + 1] = {
{0.00031,0.02102,0.04141,0.06137,0.08079,0.09956,0.11757,0.13472,0.15089,0.16598,0.17987,0.19245,0.20362,0.21327,0.22128,0.22755,0.23203,0.23489,0.23638,0.23672,0.23616,0.23492,0.23313,0.23090,0.22835,0.22559,0.22274,0.21991,0.21722,0.21479,0.21272,0.21110,0.20990,0.20907,0.20853,0.20824,0.20812,0.20812,0.20818,0.20823,0.20823,0.20810,0.20785,0.20746,0.20694,0.20626,0.20543,0.20444,0.20329,0.20197,0.20048,0.19880,0.19693,0.19487,0.19260,0.19012,0.18741,0.18448,0.18132,0.17791,0.17425,0.17034,0.16617,0.16178,0.15716,0.15234,0.14731,0.14211,0.13673,0.13119,0.12550,0.11968,0.11374,0.10769,0.10154,0.09530,0.08900,0.08263,0.07621,0.06976,0.06329,0.05680,0.05032,0.04385,0.03740,0.03100,0.02465,0.01836,0.01215,0.00602,0.00000},
{-0.01469,0.00916,0.03224,0.05446,0.07575,0.09604,0.11525,0.13332,0.15016,0.16570,0.17987,0.19259,0.20379,0.21341,0.22135,0.22755,0.23199,0.23484,0.23633,0.23670,0.23616,0.23494,0.23316,0.23094,0.22839,0.22563,0.22278,0.21995,0.21725,0.21480,0.21272,0.21109,0.20988,0.20903,0.20848,0.20818,0.20806,0.20806,0.20813,0.20821,0.20823,0.20814,0.20793,0.20759,0.20710,0.20645,0.20563,0.20464,0.20346,0.20207,0.20048,0.19866,0.19664,0.19442,0.19201,0.18942,0.18667,0.18376,0.18072,0.17754,0.17425,0.17085,0.16733,0.16370,0.15994,0.15605,0.15203,0.14786,0.14355,0.13909,0.13447,0.12968,0.12472,0.11959,0.11428,0.10878,0.10309,0.09720,0.09111,0.08480,0.07829,0.07155,0.06458,0.05738,0.04994,0.04226,0.03433,0.02615,0.01770,0.00899,0.00000},
{0.00031,0.01548,0.03175,0.04886,0.06656,0.08459,0.10269,0.12063,0.13814,0.15497,0.17087,0.18559,0.19887,0.21046,0.22010,0.22755,0.23266,0.23569,0.23704,0.23707,0.23616,0.23466,0.23270,0.23039,0.22782,0.22510,0.22233,0.21960,0.21703,0.21470,0.21272,0.21116,0.21000,0.20918,0.20863,0.20832,0.20818,0.20815,0.20819,0.20823,0.20823,0.20812,0.20790,0.20755,0.20705,0.20641,0.20560,0.20461,0.20344,0.20206,0.20048,0.19867,0.19665,0.19443,0.19202,0.18943,0.18668,0.18377,0.18072,0.17755,0.17425,0.17085,0.16733,0.16369,0.15993,0.15604,0.15202,0.14786,0.14354,0.13908,0.13446,0.12967,0.12472,0.11959,0.11428,0.10878,0.10309,0.09720,0.09111,0.08480,0.07829,0.07155,0.06458,0.05738,0.04995,0.04226,0.03433,0.02615,0.01770,0.00899,0.00000},
{0.00031,0.02813,0.05332,0.07605,0.09647,0.11476,0.13107,0.14557,0.15843,0.16981,0.17987,0.18877,0.19669,0.20379,0.21023,0.21617,0.22172,0.22672,0.23094,0.23416,0.23616,0.23680,0.23620,0.23459,0.23217,0.22916,0.22578,0.22223,0.21873,0.21548,0.21272,0.21059,0.20906,0.20805,0.20747,0.20723,0.20726,0.20745,0.20774,0.20802,0.20823,0.20827,0.20815,0.20785,0.20737,0.20670,0.20585,0.20480,0.20356,0.20212,0.20048,0.19863,0.19658,0.19434,0.19193,0.18935,0.18660,0.18371,0.18069,0.17753,0.17425,0.17086,0.16736,0.16373,0.15998,0.15610,0.15208,0.14792,0.14361,0.13914,0.13452,0.12973,0.12477,0.11963,0.11432,0.10881,0.10311,0.09722,0.09112,0.08481,0.07829,0.07154,0.06457,0.05737,0.04993,0.04225,0.03432,0.02613,0.01769,0.00898,0.00000},
{0.00031,0.01816,0.03670,0.05566,0.07481,0.09390,0.11269,0.13092,0.14836,0.16475,0.17987,0.19345,0.20525,0.21503,0.22255,0.22755,0.22994,0.23020,0.22894,0.22678,0.22436,0.22217,0.22030,0.21871,0.21737,0.21625,0.21531,0.21452,0.21385,0.21326,0.21272,0.21220,0.21170,0.21122,0.21075,0.21030,0.20986,0.20943,0.20902,0.20862,0.20823,0.20784,0.20744,0.20700,0.20648,0.20588,0.20515,0.20427,0.20321,0.20196,0.20048,0.19875,0.19678,0.19458,0.19218,0.18959,0.18681,0.18388,0.18080,0.17758,0.17425,0.17082,0.16727,0.16362,0.15984,0.15594,0.15191,0.14774,0.14343,0.13897,0.13435,0.12957,0.12462,0.11950,0.11420,0.10872,0.10304,0.09716,0.09108,0.08479,0.07829,0.07156,0.06460,0.05741,0.04998,0.04230,0.03437,0.02618,0.01773,0.00900,0.00000},
{0.00031,0.02131,0.04189,0.06195,0.08140,0.10014,0.11807,0.13511,0.15115,0.16610,0.17987,0.19235,0.20345,0.21309,0.22115,0.22755,0.23223,0.23529,0.23687,0.23712,0.23616,0.23416,0.23131,0.22781,0.22385,0.21966,0.21542,0.21133,0.20762,0.20447,0.20208,0.20061,0.19998,0.20004,0.20065,0.20168,0.20299,0.20444,0.20588,0.20719,0.20823,0.20887,0.20913,0.20902,0.20859,0.20784,0.20682,0.20554,0.20404,0.20234,0.20048,0.19846,0.19630,0.19401,0.19158,0.18901,0.18632,0.18349,0.18053,0.17745,0.17425,0.17093,0.16747,0.16389,0.16017,0.15632,0.15231,0.14816,0.14385,0.13938,0.13475,0.12995,0.12497,0.11981,0.11447,0.10894,0.10322,0.09729,0.09117,0.08483,0.07829,0.07152,0.06453,0.05731,0.04986,0.04217,0.03424,0.02607,0.01764,0.00895,0.00000},
{0.00031,0.02094,0.04128,0.06121,0.08063,0.09941,0.11744,0.13462,0.15082,0.16594,0.17987,0.19248,0.20366,0.21331,0.22131,0.22755,0.23197,0.23478,0.23624,0.23662,0.23616,0.23512,0.23359,0.23164,0.22936,0.22681,0.22407,0.22122,0.21833,0.21547,0.21272,0.21014,0.20776,0.20560,0.20366,0.20197,0.20055,0.19941,0.19856,0.19802,0.19781,0.19793,0.19831,0.19886,0.19951,0.20015,0.20072,0.20112,0.20127,0.20108,0.20048,0.19939,0.19784,0.19587,0.19354,0.19087,0.18793,0.18475,0.18138,0.17787,0.17425,0.17057,0.16682,0.16300,0.15910,0.15510,0.15101,0.14680,0.14248,0.13804,0.13345,0.12873,0.12385,0.11881,0.11360,0.10821,0.10264,0.09687,0.09089,0.08470,0.07829,0.07164,0.06476,0.05762,0.05023,0.04258,0.03465,0.02643,0.01793,0.00912,0.00000},
{0.00031,0.02103,0.04144,0.06140,0.08083,0.09960,0.11761,0.13475,0.15091,0.16598,0.17987,0.19244,0.20361,0.21326,0.22127,0.22755,0.23204,0.23492,0.23641,0.23675,0.23616,0.23487,0.23302,0.23072,0.22810,0.22530,0.22242,0.21960,0.21696,0.21462,0.21272,0.21133,0.21040,0.20983,0.20954,0.20942,0.20939,0.20935,0.20920,0.20886,0.20823,0.20723,0.20591,0.20431,0.20251,0.20055,0.19849,0.19640,0.19432,0.19232,0.19045,0.18876,0.18721,0.18576,0.18436,0.18295,0.18150,0.17995,0.17826,0.17638,0.17425,0.17185,0.16916,0.16619,0.16296,0.15945,0.15568,0.15166,0.14738,0.14286,0.13809,0.13309,0.12786,0.12240,0.11672,0.11082,0.10472,0.09840,0.09189,0.08518,0.07829,0.07120,0.06394,0.05650,0.04890,0.04113,0.03320,0.02512,0.01689,0.00851,0.00000},
{0.00031,0.02101,0.04140,0.06136,0.08078,0.09955,0.11757,0.13472,0.15089,0.16598,0.17987,0.19245,0.20362,0.21327,0.22128,0.22755,0.23202,0.23488,0.23637,0.23672,0.23616,0.23493,0.23315,0.23094,0.22840,0.22566,0.22282,0.21999,0.21729,0.21483,0.21272,0.21105,0.20979,0.20889,0.20829,0.20796,0.20782,0.20783,0.20794,0.20809,0.20823,0.20831,0.20829,0.20815,0.20783,0.20732,0.20656,0.20554,0.20420,0.20253,0.20048,0.19803,0.19521,0.19209,0.18869,0.18509,0.18131,0.17742,0.17346,0.16949,0.16554,0.16166,0.15784,0.15407,0.15031,0.14657,0.14281,0.13901,0.13517,0.13125,0.12725,0.12314,0.11891,0.11453,0.10999,0.10527,0.10035,0.09521,0.08983,0.08419,0.07829,0.07208,0.06557,0.05873,0.05153,0.04397,0.03602,0.02767,0.01890,0.00968,0.00000},
{0.00031,0.02102,0.04141,0.06137,0.08079,0.09956,0.11757,0.13472,0.15089,0.16598,0.17987,0.19245,0.20362,0.21327,0.22128,0.22755,0.23203,0.23489,0.23638,0.23672,0.23616,0.23492,0.23313,0.23090,0.22835,0.22559,0.22274,0.21991,0.21722,0.21479,0.21272,0.21110,0.20990,0.20907,0.20853,0.20824,0.20812,0.20812,0.20818,0.20823,0.20823,0.20810,0.20785,0.20746,0.20694,0.20626,0.20543,0.20444,0.20329,0.20197,0.20048,0.19880,0.19693,0.19487,0.19260,0.19012,0.18741,0.18448,0.18132,0.17791,0.17425,0.17034,0.16617,0.16178,0.15716,0.15234,0.14731,0.14211,0.13673,0.13119,0.12550,0.11968,0.11374,0.10769,0.10154,0.09530,0.08900,0.08263,0.07621,0.06976,0.06329,0.05680,0.05032,0.04385,0.03740,0.03100,0.02465,0.01836,0.01215,0.00602,0.00000}
};
*/

/* for sys ident, delta_u = -0.025 */
const float CL_SYS_ID[10][NUM_CL_POINTS + 1] = {
{0.00031,0.02115,0.04163,0.06164,0.08107,0.09983,0.11781,0.13490,0.15101,0.16604,0.17987,0.19240,0.20354,0.21318,0.22122,0.22755,0.23212,0.23508,0.23661,0.23691,0.23616,0.23457,0.23234,0.22968,0.22679,0.22389,0.22114,0.21862,0.21635,0.21437,0.21272,0.21140,0.21040,0.20966,0.20914,0.20880,0.20859,0.20847,0.20840,0.20833,0.20823,0.20805,0.20777,0.20739,0.20688,0.20624,0.20545,0.20449,0.20335,0.20202,0.20048,0.19872,0.19674,0.19456,0.19218,0.18962,0.18687,0.18395,0.18087,0.17763,0.17425,0.17073,0.16707,0.16326,0.15931,0.15522,0.15098,0.14659,0.14205,0.13735,0.13250,0.12750,0.12233,0.11700,0.11151,0.10586,0.10004,0.09405,0.08789,0.08156,0.07505,0.06837,0.06151,0.05447,0.04725,0.03985,0.03226,0.02448,0.01651,0.00835,0.00000,},//0
{0.00031,0.02115,0.04163,0.06164,0.08107,0.09983,0.11781,0.13490,0.15101,0.16604,0.17987,0.19240,0.20354,0.21318,0.22122,0.22755,0.22862,0.22527,0.21973,0.21428,0.21116,0.21195,0.21547,0.21987,0.22329,0.22389,0.22114,0.21862,0.21635,0.21437,0.21272,0.21140,0.21040,0.20966,0.20914,0.20880,0.20859,0.20847,0.20840,0.20833,0.20823,0.20805,0.20777,0.20739,0.20688,0.20624,0.20545,0.20449,0.20335,0.20202,0.20048,0.19872,0.19674,0.19456,0.19218,0.18962,0.18687,0.18395,0.18087,0.17763,0.17425,0.17073,0.16707,0.16326,0.15931,0.15522,0.15098,0.14659,0.14205,0.13735,0.13250,0.12750,0.12233,0.11700,0.11151,0.10586,0.10004,0.09405,0.08789,0.08156,0.07505,0.06837,0.06151,0.05447,0.04725,0.03985,0.03226,0.02448,0.01651,0.00835,0.00000,},//20,
{0.00031,0.02115,0.04163,0.06164,0.08107,0.09983,0.11781,0.13490,0.15101,0.16604,0.17987,0.19240,0.20354,0.21318,0.22122,0.22755,0.23212,0.23508,0.23661,0.23691,0.23616,0.23107,0.22253,0.21281,0.20417,0.19889,0.19851,0.20174,0.20654,0.21087,0.21272,0.21140,0.21040,0.20966,0.20914,0.20880,0.20859,0.20847,0.20840,0.20833,0.20823,0.20805,0.20777,0.20739,0.20688,0.20624,0.20545,0.20449,0.20335,0.20202,0.20048,0.19872,0.19674,0.19456,0.19218,0.18962,0.18687,0.18395,0.18087,0.17763,0.17425,0.17073,0.16707,0.16326,0.15931,0.15522,0.15098,0.14659,0.14205,0.13735,0.13250,0.12750,0.12233,0.11700,0.11151,0.10586,0.10004,0.09405,0.08789,0.08156,0.07505,0.06837,0.06151,0.05447,0.04725,0.03985,0.03226,0.02448,0.01651,0.00835,0.00000,},//25,
{0.00031,0.02115,0.04163,0.06164,0.08107,0.09983,0.11781,0.13490,0.15101,0.16604,0.17987,0.19240,0.20354,0.21318,0.22122,0.22755,0.23212,0.23508,0.23661,0.23691,0.23616,0.23457,0.23234,0.22968,0.22679,0.22389,0.21764,0.20880,0.19948,0.19175,0.18772,0.18878,0.19352,0.19985,0.20564,0.20880,0.20859,0.20847,0.20840,0.20833,0.20823,0.20805,0.20777,0.20739,0.20688,0.20624,0.20545,0.20449,0.20335,0.20202,0.20048,0.19872,0.19674,0.19456,0.19218,0.18962,0.18687,0.18395,0.18087,0.17763,0.17425,0.17073,0.16707,0.16326,0.15931,0.15522,0.15098,0.14659,0.14205,0.13735,0.13250,0.12750,0.12233,0.11700,0.11151,0.10586,0.10004,0.09405,0.08789,0.08156,0.07505,0.06837,0.06151,0.05447,0.04725,0.03985,0.03226,0.02448,0.01651,0.00835,0.00000,},//30,
{0.00031,0.02115,0.04163,0.06164,0.08107,0.09983,0.11781,0.13490,0.15101,0.16604,0.17987,0.19240,0.20354,0.21318,0.22122,0.22755,0.23212,0.23508,0.23661,0.23691,0.23616,0.23457,0.23234,0.22968,0.22679,0.22389,0.22114,0.21862,0.21635,0.21437,0.21272,0.20790,0.20059,0.19278,0.18652,0.18380,0.18597,0.19160,0.19859,0.20483,0.20823,0.20805,0.20777,0.20739,0.20688,0.20624,0.20545,0.20449,0.20335,0.20202,0.20048,0.19872,0.19674,0.19456,0.19218,0.18962,0.18687,0.18395,0.18087,0.17763,0.17425,0.17073,0.16707,0.16326,0.15931,0.15522,0.15098,0.14659,0.14205,0.13735,0.13250,0.12750,0.12233,0.11700,0.11151,0.10586,0.10004,0.09405,0.08789,0.08156,0.07505,0.06837,0.06151,0.05447,0.04725,0.03985,0.03226,0.02448,0.01651,0.00835,0.00000,},//35,
{0.00031,0.02115,0.04163,0.06164,0.08107,0.09983,0.11781,0.13490,0.15101,0.16604,0.17987,0.19240,0.20354,0.21318,0.22122,0.22755,0.23212,0.23508,0.23661,0.23691,0.23616,0.23457,0.23234,0.22968,0.22679,0.22389,0.22114,0.21862,0.21635,0.21437,0.21272,0.21140,0.21040,0.20966,0.20914,0.20880,0.20586,0.20057,0.19419,0.18799,0.18323,0.18087,0.18073,0.18231,0.18512,0.18868,0.19248,0.19606,0.19891,0.20054,0.20048,0.19872,0.19674,0.19456,0.19218,0.18962,0.18687,0.18395,0.18087,0.17763,0.17425,0.17073,0.16707,0.16326,0.15931,0.15522,0.15098,0.14659,0.14205,0.13735,0.13250,0.12750,0.12233,0.11700,0.11151,0.10586,0.10004,0.09405,0.08789,0.08156,0.07505,0.06837,0.06151,0.05447,0.04725,0.03985,0.03226,0.02448,0.01651,0.00835,0.00000,},//40,
{0.00031,0.02115,0.04163,0.06164,0.08107,0.09983,0.11781,0.13490,0.15101,0.16604,0.17987,0.19240,0.20354,0.21318,0.22122,0.22755,0.23212,0.23508,0.23661,0.23691,0.23616,0.23457,0.23234,0.22968,0.22679,0.22389,0.22114,0.21862,0.21635,0.21437,0.21272,0.21140,0.21040,0.20966,0.20914,0.20880,0.20859,0.20847,0.20840,0.20833,0.20823,0.20703,0.20468,0.20142,0.19753,0.19326,0.18888,0.18465,0.18083,0.17768,0.17548,0.17438,0.17422,0.17472,0.17561,0.17663,0.17751,0.17798,0.17777,0.17662,0.17425,0.17073,0.16707,0.16326,0.15931,0.15522,0.15098,0.14659,0.14205,0.13735,0.13250,0.12750,0.12233,0.11700,0.11151,0.10586,0.10004,0.09405,0.08789,0.08156,0.07505,0.06837,0.06151,0.05447,0.04725,0.03985,0.03226,0.02448,0.01651,0.00835,0.00000,},//50,
{0.00031,0.02115,0.04163,0.06164,0.08107,0.09983,0.11781,0.13490,0.15101,0.16604,0.17987,0.19240,0.20354,0.21318,0.22122,0.22755,0.23212,0.23508,0.23661,0.23691,0.23616,0.23457,0.23234,0.22968,0.22679,0.22389,0.22114,0.21862,0.21635,0.21437,0.21272,0.21140,0.21040,0.20966,0.20914,0.20880,0.20859,0.20847,0.20840,0.20833,0.20823,0.20805,0.20777,0.20739,0.20688,0.20624,0.20545,0.20449,0.20335,0.20202,0.20048,0.19786,0.19411,0.18944,0.18406,0.17821,0.17208,0.16591,0.15990,0.15427,0.14925,0.14499,0.14143,0.13846,0.13595,0.13380,0.13188,0.13007,0.12827,0.12635,0.12420,0.12170,0.11873,0.11518,0.11093,0.10586,0.10004,0.09405,0.08789,0.08156,0.07505,0.06837,0.06151,0.05447,0.04725,0.03985,0.03226,0.02448,0.01651,0.00835,0.00000,},//60,
{0.00031,0.02115,0.04163,0.06164,0.08107,0.09983,0.11781,0.13490,0.15101,0.16604,0.17987,0.19240,0.20354,0.21318,0.22122,0.22755,0.23212,0.23508,0.23661,0.23691,0.23616,0.23457,0.23234,0.22968,0.22679,0.22389,0.22114,0.21862,0.21635,0.21437,0.21272,0.21140,0.21040,0.20966,0.20914,0.20880,0.20859,0.20847,0.20840,0.20833,0.20823,0.20805,0.20777,0.20739,0.20688,0.20624,0.20545,0.20449,0.20335,0.20202,0.20048,0.19872,0.19674,0.19456,0.19218,0.18962,0.18687,0.18395,0.18087,0.17763,0.17425,0.17049,0.16630,0.16172,0.15677,0.15150,0.14592,0.14007,0.13398,0.12768,0.12120,0.11456,0.10781,0.10097,0.09406,0.08713,0.08019,0.07328,0.06644,0.05969,0.05305,0.04657,0.04027,0.03418,0.02833,0.02275,0.01748,0.01253,0.00795,0.00377,0.00000,},//75,
};


/* For Iteraltive test */
/*
const float CL_SYS_ID[10][NUM_CL_POINTS + 1] = {
{0.0229,0.0321,0.0474,0.0670,0.0893,0.1127,0.1355,0.1568,0.1757,0.1912,0.2024,0.2088,0.2114,0.2115,0.2104,0.2097,0.2102,0.2118,0.2140,0.2163,0.2183,0.2194,0.2196,0.2190,0.2177,0.2155,0.2127,0.2091,0.2050,0.2002,0.1948,0.1889,0.1827,0.1761,0.1694,0.1628,0.1562,0.1500,0.1441,0.1388,0.1341,0.1302,0.1271,0.1248,0.1231,0.1221,0.1218,0.1221,0.1230,0.1244,0.1264,0.1288,0.1315,0.1345,0.1376,0.1406,0.1435,0.1460,0.1480,0.1495,0.1502,0.1502,0.1493,0.1476,0.1452,0.1421,0.1385,0.1343,0.1295,0.1243,0.1187,0.1126,0.1063,0.0997,0.0929,0.0859,0.0788,0.0716,0.0644,0.0572,0.0501,0.0431,0.0363,0.0298,0.0237,0.0181,0.0130,0.0086,0.0049,0.0020,-0.0000},
{-0.01469,0.00916,0.03224,0.05446,0.07575,0.09604,0.11525,0.13332,0.15016,0.16570,0.17987,0.19259,0.20379,0.21341,0.22135,0.22755,0.23199,0.23484,0.23633,0.23670,0.23616,0.23494,0.23316,0.23094,0.22839,0.22563,0.22278,0.21995,0.21725,0.21480,0.21272,0.21109,0.20988,0.20903,0.20848,0.20818,0.20806,0.20806,0.20813,0.20821,0.20823,0.20814,0.20793,0.20759,0.20710,0.20645,0.20563,0.20464,0.20346,0.20207,0.20048,0.19866,0.19664,0.19442,0.19201,0.18942,0.18667,0.18376,0.18072,0.17754,0.17425,0.17085,0.16733,0.16370,0.15994,0.15605,0.15203,0.14786,0.14355,0.13909,0.13447,0.12968,0.12472,0.11959,0.11428,0.10878,0.10309,0.09720,0.09111,0.08480,0.07829,0.07155,0.06458,0.05738,0.04994,0.04226,0.03433,0.02615,0.01770,0.00899,0.00000},
{0.00031,0.01548,0.03175,0.04886,0.06656,0.08459,0.10269,0.12063,0.13814,0.15497,0.17087,0.18559,0.19887,0.21046,0.22010,0.22755,0.23266,0.23569,0.23704,0.23707,0.23616,0.23466,0.23270,0.23039,0.22782,0.22510,0.22233,0.21960,0.21703,0.21470,0.21272,0.21116,0.21000,0.20918,0.20863,0.20832,0.20818,0.20815,0.20819,0.20823,0.20823,0.20812,0.20790,0.20755,0.20705,0.20641,0.20560,0.20461,0.20344,0.20206,0.20048,0.19867,0.19665,0.19443,0.19202,0.18943,0.18668,0.18377,0.18072,0.17755,0.17425,0.17085,0.16733,0.16369,0.15993,0.15604,0.15202,0.14786,0.14354,0.13908,0.13446,0.12967,0.12472,0.11959,0.11428,0.10878,0.10309,0.09720,0.09111,0.08480,0.07829,0.07155,0.06458,0.05738,0.04995,0.04226,0.03433,0.02615,0.01770,0.00899,0.00000},
{0.00031,0.02813,0.05332,0.07605,0.09647,0.11476,0.13107,0.14557,0.15843,0.16981,0.17987,0.18877,0.19669,0.20379,0.21023,0.21617,0.22172,0.22672,0.23094,0.23416,0.23616,0.23680,0.23620,0.23459,0.23217,0.22916,0.22578,0.22223,0.21873,0.21548,0.21272,0.21059,0.20906,0.20805,0.20747,0.20723,0.20726,0.20745,0.20774,0.20802,0.20823,0.20827,0.20815,0.20785,0.20737,0.20670,0.20585,0.20480,0.20356,0.20212,0.20048,0.19863,0.19658,0.19434,0.19193,0.18935,0.18660,0.18371,0.18069,0.17753,0.17425,0.17086,0.16736,0.16373,0.15998,0.15610,0.15208,0.14792,0.14361,0.13914,0.13452,0.12973,0.12477,0.11963,0.11432,0.10881,0.10311,0.09722,0.09112,0.08481,0.07829,0.07154,0.06457,0.05737,0.04993,0.04225,0.03432,0.02613,0.01769,0.00898,0.00000},
{0.00031,0.01816,0.03670,0.05566,0.07481,0.09390,0.11269,0.13092,0.14836,0.16475,0.17987,0.19345,0.20525,0.21503,0.22255,0.22755,0.22994,0.23020,0.22894,0.22678,0.22436,0.22217,0.22030,0.21871,0.21737,0.21625,0.21531,0.21452,0.21385,0.21326,0.21272,0.21220,0.21170,0.21122,0.21075,0.21030,0.20986,0.20943,0.20902,0.20862,0.20823,0.20784,0.20744,0.20700,0.20648,0.20588,0.20515,0.20427,0.20321,0.20196,0.20048,0.19875,0.19678,0.19458,0.19218,0.18959,0.18681,0.18388,0.18080,0.17758,0.17425,0.17082,0.16727,0.16362,0.15984,0.15594,0.15191,0.14774,0.14343,0.13897,0.13435,0.12957,0.12462,0.11950,0.11420,0.10872,0.10304,0.09716,0.09108,0.08479,0.07829,0.07156,0.06460,0.05741,0.04998,0.04230,0.03437,0.02618,0.01773,0.00900,0.00000},
{0.00031,0.02131,0.04189,0.06195,0.08140,0.10014,0.11807,0.13511,0.15115,0.16610,0.17987,0.19235,0.20345,0.21309,0.22115,0.22755,0.23223,0.23529,0.23687,0.23712,0.23616,0.23416,0.23131,0.22781,0.22385,0.21966,0.21542,0.21133,0.20762,0.20447,0.20208,0.20061,0.19998,0.20004,0.20065,0.20168,0.20299,0.20444,0.20588,0.20719,0.20823,0.20887,0.20913,0.20902,0.20859,0.20784,0.20682,0.20554,0.20404,0.20234,0.20048,0.19846,0.19630,0.19401,0.19158,0.18901,0.18632,0.18349,0.18053,0.17745,0.17425,0.17093,0.16747,0.16389,0.16017,0.15632,0.15231,0.14816,0.14385,0.13938,0.13475,0.12995,0.12497,0.11981,0.11447,0.10894,0.10322,0.09729,0.09117,0.08483,0.07829,0.07152,0.06453,0.05731,0.04986,0.04217,0.03424,0.02607,0.01764,0.00895,0.00000},
{0.00031,0.02094,0.04128,0.06121,0.08063,0.09941,0.11744,0.13462,0.15082,0.16594,0.17987,0.19248,0.20366,0.21331,0.22131,0.22755,0.23197,0.23478,0.23624,0.23662,0.23616,0.23512,0.23359,0.23164,0.22936,0.22681,0.22407,0.22122,0.21833,0.21547,0.21272,0.21014,0.20776,0.20560,0.20366,0.20197,0.20055,0.19941,0.19856,0.19802,0.19781,0.19793,0.19831,0.19886,0.19951,0.20015,0.20072,0.20112,0.20127,0.20108,0.20048,0.19939,0.19784,0.19587,0.19354,0.19087,0.18793,0.18475,0.18138,0.17787,0.17425,0.17057,0.16682,0.16300,0.15910,0.15510,0.15101,0.14680,0.14248,0.13804,0.13345,0.12873,0.12385,0.11881,0.11360,0.10821,0.10264,0.09687,0.09089,0.08470,0.07829,0.07164,0.06476,0.05762,0.05023,0.04258,0.03465,0.02643,0.01793,0.00912,0.00000},
{0.00031,0.02103,0.04144,0.06140,0.08083,0.09960,0.11761,0.13475,0.15091,0.16598,0.17987,0.19244,0.20361,0.21326,0.22127,0.22755,0.23204,0.23492,0.23641,0.23675,0.23616,0.23487,0.23302,0.23072,0.22810,0.22530,0.22242,0.21960,0.21696,0.21462,0.21272,0.21133,0.21040,0.20983,0.20954,0.20942,0.20939,0.20935,0.20920,0.20886,0.20823,0.20723,0.20591,0.20431,0.20251,0.20055,0.19849,0.19640,0.19432,0.19232,0.19045,0.18876,0.18721,0.18576,0.18436,0.18295,0.18150,0.17995,0.17826,0.17638,0.17425,0.17185,0.16916,0.16619,0.16296,0.15945,0.15568,0.15166,0.14738,0.14286,0.13809,0.13309,0.12786,0.12240,0.11672,0.11082,0.10472,0.09840,0.09189,0.08518,0.07829,0.07120,0.06394,0.05650,0.04890,0.04113,0.03320,0.02512,0.01689,0.00851,0.00000},
{0.00031,0.02101,0.04140,0.06136,0.08078,0.09955,0.11757,0.13472,0.15089,0.16598,0.17987,0.19245,0.20362,0.21327,0.22128,0.22755,0.23202,0.23488,0.23637,0.23672,0.23616,0.23493,0.23315,0.23094,0.22840,0.22566,0.22282,0.21999,0.21729,0.21483,0.21272,0.21105,0.20979,0.20889,0.20829,0.20796,0.20782,0.20783,0.20794,0.20809,0.20823,0.20831,0.20829,0.20815,0.20783,0.20732,0.20656,0.20554,0.20420,0.20253,0.20048,0.19803,0.19521,0.19209,0.18869,0.18509,0.18131,0.17742,0.17346,0.16949,0.16554,0.16166,0.15784,0.15407,0.15031,0.14657,0.14281,0.13901,0.13517,0.13125,0.12725,0.12314,0.11891,0.11453,0.10999,0.10527,0.10035,0.09521,0.08983,0.08419,0.07829,0.07208,0.06557,0.05873,0.05153,0.04397,0.03602,0.02767,0.01890,0.00968,0.00000},
{0.00031,0.02102,0.04141,0.06137,0.08079,0.09956,0.11757,0.13472,0.15089,0.16598,0.17987,0.19245,0.20362,0.21327,0.22128,0.22755,0.23203,0.23489,0.23638,0.23672,0.23616,0.23492,0.23313,0.23090,0.22835,0.22559,0.22274,0.21991,0.21722,0.21479,0.21272,0.21110,0.20990,0.20907,0.20853,0.20824,0.20812,0.20812,0.20818,0.20823,0.20823,0.20810,0.20785,0.20746,0.20694,0.20626,0.20543,0.20444,0.20329,0.20197,0.20048,0.19880,0.19693,0.19487,0.19260,0.19012,0.18741,0.18448,0.18132,0.17791,0.17425,0.17034,0.16617,0.16178,0.15716,0.15234,0.14731,0.14211,0.13673,0.13119,0.12550,0.11968,0.11374,0.10769,0.10154,0.09530,0.08900,0.08263,0.07621,0.06976,0.06329,0.05680,0.05032,0.04385,0.03740,0.03100,0.02465,0.01836,0.01215,0.00602,0.00000}
};
*/

const float U_ILC_INPUT[150] = 
{-0.00241,-0.00236,-0.00231,-0.00225,-0.00219,-0.00212,-0.00205,-0.00197,-0.00189,-0.00180,-0.00171,-0.00162,-0.00152,-0.00141,-0.00131,-0.00119,-0.00108,-0.00096,-0.00083,-0.00070,-0.00057,-0.00044,-0.00030,-0.00016,-0.00001,0.00014,0.00029,0.00044,0.00059,0.00075,0.00091,0.00107,0.00124,0.00141,0.00158,0.00175,0.00192,0.00210,0.00228,0.00246,0.00264,0.00283,0.00301,0.00321,0.00340,0.00360,0.00380,0.00401,0.00422,0.00444,0.00466,0.00489,0.00513,0.00537,0.00562,0.00588,0.00614,0.00642,0.00670,0.00699,0.00730,0.00761,0.00792,0.00825,0.00858,0.00892,0.00926,0.00961,0.00996,0.01032,0.01068,0.01103,0.01139,0.01175,0.01210,0.01245,0.01279,0.01313,0.01346,0.01377,0.01408,0.01437,0.01464,0.01489,0.01512,0.01532,0.01549,0.01563,0.01574,0.01582,0.01585,0.01585,0.01581,0.01572,0.01560,0.01543,0.01522,0.01498,0.01469,0.01438,0.01403,0.01364,0.01323,0.01280,0.01235,0.01187,0.01138,0.01088,0.01036,0.00984,0.00932,0.00879,0.00826,0.00773,0.00721,0.00669,0.00618,0.00568,0.00520,0.00473,0.00427,0.00383,0.00341,0.00301,0.00263,0.00228,0.00194,0.00164,0.00135,0.00110,0.00087,0.00066,0.00048,0.00033,0.00021,0.00010,0.00002,-0.00004,-0.00008,-0.00010,-0.00011,-0.00011,-0.00009,-0.00008,-0.00005,-0.00003,-0.00001,0.00000,0.00000,0.00000};


//{0.01694,0.01724,0.01754,0.01785,0.01816,0.01848,0.01879,0.01912,0.01944,0.01977,0.02010,0.02043,0.02076,0.02110,0.02143,0.02177,0.02211,0.02245,0.02278,0.02312,0.02345,0.02378,0.02410,0.02442,0.02474,0.02505,0.02536,0.02566,0.02595,0.02624,0.02651,0.02678,0.02704,0.02729,0.02754,0.02777,0.02799,0.02821,0.02841,0.02860,0.02878,0.02895,0.02911,0.02926,0.02939,0.02951,0.02961,0.02970,0.02978,0.02985,0.02990,0.02993,0.02995,0.02996,0.02995,0.02992,0.02989,0.02983,0.02976,0.02968,0.02958,0.02946,0.02933,0.02919,0.02903,0.02886,0.02867,0.02847,0.02825,0.02801,0.02777,0.02751,0.02723,0.02694,0.02663,0.02632,0.02598,0.02564,0.02528,0.02490,0.02452,0.02412,0.02371,0.02329,0.02286,0.02242,0.02197,0.02152,0.02105,0.02058,0.02011,0.01962,0.01914,0.01865,0.01816,0.01767,0.01717,0.01668,0.01619,0.01569,0.01521,0.01472,0.01424,0.01376,0.01329,0.01283,0.01236,0.01191,0.01146,0.01101,0.01057,0.01014,0.00971,0.00929,0.00888,0.00847,0.00806,0.00766,0.00727,0.00688,0.00650,0.00613,0.00576,0.00540,0.00504,0.00469,0.00435,0.00401,0.00369,0.00337,0.00306,0.00277,0.00248,0.00220,0.00194,0.00169,0.00145,0.00123,0.00102,0.00083,0.00066,0.00050,0.00036,0.00025,0.00015,0.00008,0.00003,0.00000,0.00000,0.00000};


#define POINT_NUM (4)


const float POINT_ACTION[2][POINT_NUM] = {
//{0.0f, 2.0f, 3.0f, 4.0f, 5.0f, 9.0f},
//{0.0f, 75.0f, 75.0f, 0.0f, 75.0f, 75.0f}
{0.0f, 2.0f, 3.0f, 4.0f},
{0.0f, 80.0f, 80.0f, 80.0f}
};

#endif
