
#pragma once

#include "quantum.h"

/*
 * +---+---+  +-------+-------+-------+-------+-------+  +---+---+
 * |90 |A4 |  |91     |92     |93     |94     |95     |  |B0 |B1 |
 * +---+---+  +-------+-------+-------+-------+-------+  +---+---+
 * +----+---+---+---+---+---+---+---+---+---+---+---+---+---+----+      +---+---+---+---+
 * |97  |61 |62 |63 |64 |65 |66 |67 |70 |71 |60 |57 |56 |54 |83  |      |80 |A3 |A5 |A6 |
 * +-------------------------------------------------------------+      +---------------+
 * |A0    |41 |47 |25 |42 |44 |51 |45 |31 |37 |40 |20 |53 |17    |      |07 |10 |11 |12 |
 * +-------------------------------------------------------|     |      +---------------+
 * |87 |A7 |21 |43 |24 |26 |27 |30 |32 |33 |34 |73 |72 |55 |     |      |04 |05 |06 |13 |
 * +-------------------------------------------------------------+---+  +---------------+
 * |86       |52 |50 |23 |46 |22 |36 |35 |74 |75 |76 |77 |86     |81 |  |01 |02 |03 |14 |
 * +---------+-------------------------------------------+-----------+  +---------------+
 *           |85 |84 |96                             |   |A2 |82 |A1 |  |00 |15 |16 |17 |
 *           +---+---+-------------------------------+   +---+---+---+  +---+---+---+---+
 * 
 */

/*#define LAYOUT_8801( \
    K90, KA4, K91, K92, K93, K94, K95, KB0, KB1, \
    K97, K61, K62, K63, K64, K65, K66, K67, K70, K71, K60, K57, K56, K54, K83, K80, KA3, KA5, KA6, \
    KA0, K41, K47, K25, K42, K44, K51, K45, K31, K37, K40, K20, K53, K17,      K07, K10, K11, K12, \
    K87, KA7, K21, K43, K24, K26, K27, K30, K32, K33, K34, K73, K72, K55,      K04, K05, K06, K13, \
    K86, K52, K50, K23, K46, K22, K36, K35, K74, K75, K76, K77, K86X, K81,     K01, K02, K03, K14, \
    K85, K84, K96, KA2, K82, KA1,                                              K00, K15, K16, K17X) { \
    { K00, K01, K02, K03, K04, K05, K06, K07}, \
    { K10, K11, K12, K13, K14, K15, K16, K17}, \
    { K20, K21, K22, K23, K24, K25, K26, K27}, \
    { K30, K31, K32, K33, K34, K35, K36, K37}, \
    { K40, K41, K42, K43, K44, K45, K46, K47}, \
    { K50, K51, K52, K53, K54, K55, K56, K57}, \
    { K60, K61, K62, K63, K64, K65, K66, K67}, \
    { K70, K71, K72, K73, K74, K75, K76, K77}, 
    { K80, K81, K82, K83, K84, K85, K86, K87}, \
    { K90, K91, K92, K93, K94, K95, K96, K97}, \
    { KA0, KA1, KA2, KA3, KA4, KA5, KA6, KA7}, \
    { KB0, KB1, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO}, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO}, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO}, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO}, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO}  \
}*/

/*
 * +---+---+  +-------+-------+-------+-------+-------+  +---+---+      +---+---+---+---+
 * |90 |A4 |  |91     |92     |93     |94     |95     |  |B0 |B1 |      |81 |A1 |A2 |82 |
 * +---+---+  +-------+-------+-------+-------+-------+  +---+---+      +---+---+---+---+
 * +----+---+---+---+---+---+---+---+---+---+---+---+---+---+----+      +---+---+---+---+
 * |97  |61 |62 |63 |64 |65 |66 |67 |70 |71 |60 |57 |56 |54 |83  |      |80 |A3 |A5 |A6 |
 * +-------------------------------------------------------------+      +---------------+
 * |A0    |41 |47 |25 |42 |44 |51 |45 |31 |37 |40 |20 |53 |17    |      |07 |10 |11 |12 |
 * +-------------------------------------------------------|     |      +---------------+
 * |87 |A7 |21 |43 |24 |26 |27 |30 |32 |33 |34 |73 |72 |55 |     |      |04 |05 |06 |13 |
 * +-------------------------------------------------------------+      +---------------+
 * |86       |52 |50 |23 |46 |22 |36 |35 |74 |75 |76 |77 |86     |      |01 |02 |03 |14 |
 * +---------+-------------------------------------------+-------+      +---------------+
 *           |85 |84 |96                             |                  |00 |15 |16 |17 |
 *           +---+---+-------------------------------+                  +---+---+---+---+
 * 
 */

#define LAYOUT_8801mkii( \
    K90, KA4, K91, K92, K93, K94, K95, KB0, KB1,                               K81, KA1, KA2, K82, \
    K97, K61, K62, K63, K64, K65, K66, K67, K70, K71, K60, K57, K56, K54, K83, K80, KA3, KA5, KA6, \
    KA0, K41, K47, K25, K42, K44, K51, K45, K31, K37, K40, K20, K53, K17,      K07, K10, K11, K12, \
    K87, KA7, K21, K43, K24, K26, K27, K30, K32, K33, K34, K73, K72, K55,      K04, K05, K06, K13, \
    K86, K52, K50, K23, K46, K22, K36, K35, K74, K75, K76, K77, K86X,          K01, K02, K03, K14, \
    K85, K84, K96,                                                             K00, K15, K16, K17X ) 	{ \
    { K00, K01, K02, K03, K04, K05, K06, K07}, \
    { K10, K11, K12, K13, K14, K15, K16, K17}, \
    { K20, K21, K22, K23, K24, K25, K26, K27}, \
    { K30, K31, K32, K33, K34, K35, K36, K37}, \
    { K40, K41, K42, K43, K44, K45, K46, K47}, \
    { K50, K51, K52, K53, K54, K55, K56, K57}, \
    { K60, K61, K62, K63, K64, K65, K66, K67}, \
    { K70, K71, K72, K73, K74, K75, K76, K77}, \
    { K80, K81, K82, K83, K84, K85, K86, K87}, \
    { K90, K91, K92, K93, K94, K95, K96, K97}, \
    { KA0, KA1, KA2, KA3, KA4, KA5, KA6, KA7}, \
    { KB0, KB1, K86X, K17X, KC_NO, KC_NO, KC_NO, KC_NO}, } 
