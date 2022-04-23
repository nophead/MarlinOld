/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 4085, 4.7 kOhm pull-up, Epcos B57560G104F 100K on JHeadMKV
constexpr temp_entry_t temptable_42[] PROGMEM = {
    {     344,       300     }, // r=   101 adc=21.47
    {     369,       295     }, // r=   108 adc=23.08
    {     397,       290     }, // r=   117 adc=24.83
    {     428,       285     }, // r=   126 adc=26.75
    {     461,       280     }, // r=   136 adc=28.84
    {     498,       275     }, // r=   147 adc=31.12
    {     538,       270     }, // r=   160 adc=33.63
    {     582,       265     }, // r=   173 adc=36.37
    {     630,       260     }, // r=   188 adc=39.38
    {     683,       255     }, // r=   205 adc=42.69
    {     741,       250     }, // r=   223 adc=46.32
    {     805,       245     }, // r=   243 adc=50.31
    {     875,       240     }, // r=   266 adc=54.71
    {     953,       235     }, // r=   290 adc=59.55
    {    1038,       230     }, // r=   318 adc=64.88
    {    1132,       225     }, // r=   349 adc=70.77
    {    1236,       220     }, // r=   384 adc=77.26
    {    1351,       215     }, // r=   423 adc=84.42
    {    1477,       210     }, // r=   466 adc=92.32
    {    1617,       205     }, // r=   515 adc=101.05
    {    1771,       200     }, // r=   570 adc=110.68
    {    1941,       195     }, // r=   632 adc=121.30
    {    2128,       190     }, // r=   702 adc=133.01
    {    2335,       185     }, // r=   782 adc=145.91
    {    2562,       180     }, // r=   872 adc=160.11
    {    2811,       175     }, // r=   975 adc=175.70
    {    3085,       170     }, // r=  1092 adc=192.81
    {    3384,       165     }, // r=  1225 adc=211.53
    {    3711,       160     }, // r=  1378 adc=231.95
    {    4066,       155     }, // r=  1554 adc=254.15
    {    4451,       150     }, // r=  1756 adc=278.21
    {    4866,       145     }, // r=  1989 adc=304.15
    {    5312,       140     }, // r=  2258 adc=331.99
    {    5787,       135     }, // r=  2570 adc=361.68
    {    6290,       130     }, // r=  2934 adc=393.15
    {    6820,       125     }, // r=  3357 adc=426.25
    {    7373,       120     }, // r=  3852 adc=460.80
    {    7945,       115     }, // r=  4433 adc=496.54
    {    8531,       110     }, // r=  5116 adc=533.16
    {    9125,       105     }, // r=  5921 adc=570.31
    {    9722,       100     }, // r=  6875 adc=607.60
    {   10314,        95     }, // r=  8007 adc=644.61
    {   10895,        90     }, // r=  9356 adc=680.92
    {   11458,        85     }, // r= 10968 adc=716.13
    {   11998,        80     }, // r= 12903 adc=749.86
    {   12509,        75     }, // r= 15234 adc=781.80
    {   12987,        70     }, // r= 18051 adc=811.66
    {   13428,        65     }, // r= 21469 adc=839.27
    {   13832,        60     }, // r= 25635 adc=864.50
    {   14197,        55     }, // r= 30732 adc=887.30
    {   14523,        50     }, // r= 36995 adc=907.68
    {   14811,        45     }, // r= 44725 adc=925.72
    {   15064,        40     }, // r= 54309 adc=941.52
    {   15284,        35     }, // r= 66249 adc=955.23
    {   15472,        30     }, // r= 81195 adc=967.02
    {   15633,        25     }, // r=100000 adc=977.08
    {   15769,        20     }, // r=123783 adc=985.58
    {   15883,        15     }, // r=154025 adc=992.71
    {   15978,        10     }, // r=192694 adc=998.64
    {   16057,         5     }, // r=242427 adc=1003.54
    {   16121,         0     }, // r=306773 adc=1007.56
};
