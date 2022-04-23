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

// R25 = 100 kOhm, beta25 = 4540, 4.7 kOhm pull-up, Epcos B57861S104F40 Mendel90 bed thermistor
constexpr temp_entry_t temptable_41[] PROGMEM = {
    {     982,       200     }, // r=   300 adc=61.38
    {    1091,       195     }, // r=   336 adc=68.19
    {    1214,       190     }, // r=   376 adc=75.84
    {    1351,       185     }, // r=   423 adc=84.46
    {    1506,       180     }, // r=   476 adc=94.15
    {    1681,       175     }, // r=   538 adc=105.06
    {    1877,       170     }, // r=   609 adc=117.34
    {    2098,       165     }, // r=   691 adc=131.13
    {    2346,       160     }, // r=   786 adc=146.61
    {    2623,       155     }, // r=   897 adc=163.95
    {    2933,       150     }, // r=  1026 adc=183.33
    {    3279,       145     }, // r=  1177 adc=204.93
    {    3662,       140     }, // r=  1355 adc=228.90
    {    4086,       135     }, // r=  1564 adc=255.39
    {    4552,       130     }, // r=  1810 adc=284.48
    {    5060,       125     }, // r=  2103 adc=316.24
    {    5610,       120     }, // r=  2451 adc=350.62
    {    6200,       115     }, // r=  2866 adc=387.52
    {    6828,       110     }, // r=  3364 adc=426.72
    {    7486,       105     }, // r=  3962 adc=467.90
    {    8170,       100     }, // r=  4684 adc=510.63
    {    8870,        95     }, // r=  5559 adc=554.35
    {    9575,        90     }, // r=  6625 adc=598.45
    {   10276,        85     }, // r=  7928 adc=642.25
    {   10961,        80     }, // r=  9528 adc=685.06
    {   11620,        75     }, // r= 11501 adc=726.23
    {   12242,        70     }, // r= 13947 adc=765.15
    {   12822,        65     }, // r= 16994 adc=801.36
    {   13352,        60     }, // r= 20807 adc=834.50
    {   13830,        55     }, // r= 25606 adc=864.35
    {   14253,        50     }, // r= 31678 adc=890.83
    {   14624,        45     }, // r= 39403 adc=913.98
    {   14943,        40     }, // r= 49289 adc=933.94
    {   15215,        35     }, // r= 62016 adc=950.93
    {   15443,        30     }, // r= 78504 adc=965.21
    {   15633,        25     }, // r=100000 adc=977.08
    {   15789,        20     }, // r=128214 adc=986.83
    {   15916,        15     }, // r=165504 adc=994.75
    {   16018,        10     }, // r=215143 adc=1001.13
    {   16099,         5     }, // r=281716 adc=1006.21
    {   16164,         0     }, // r=371694 adc=1010.23
};
