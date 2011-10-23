//
// Copyright (c) 2011 Kim Walisch, <kim.walisch@gmail.com>.
// All rights reserved.
//
// This file is part of primesieve.
// Homepage: http://primesieve.googlecode.com
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//
//   * Redistributions of source code must retain the above copyright
//     notice, this list of conditions and the following disclaimer.
//   * Redistributions in binary form must reproduce the above
//     copyright notice, this list of conditions and the following
//     disclaimer in the documentation and/or other materials provided
//     with the distribution.
//   * Neither the name of the author nor the names of its
//     contributors may be used to endorse or promote products derived
//     from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
// FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
// COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
// OF THE POSSIBILITY OF SUCH DAMAGE.

#include "WheelFactorization.h"
#include "defs.h"

const InitWheel init30Wheel[30] = { { 1, 1 }, { 0, 1 }, { 5, 2 }, { 4, 2 }, {
    3, 2 }, { 2, 2 }, { 1, 2 }, { 0, 2 }, { 3, 3 }, { 2, 3 }, { 1, 3 },
    { 0, 3 }, { 1, 4 }, { 0, 4 }, { 3, 5 }, { 2, 5 }, { 1, 5 }, { 0, 5 }, { 1,
        6 }, { 0, 6 }, { 3, 7 }, { 2, 7 }, { 1, 7 }, { 0, 7 }, { 5, 0 },
    { 4, 0 }, { 3, 0 }, { 2, 0 }, { 1, 0 }, { 0, 0 } };

const InitWheel init210Wheel[210] = { { 1, 1 }, { 0, 1 }, { 9, 2 }, { 8, 2 }, {
    7, 2 }, { 6, 2 }, { 5, 2 }, { 4, 2 }, { 3, 2 }, { 2, 2 }, { 1, 2 },
    { 0, 2 }, { 1, 3 }, { 0, 3 }, { 3, 4 }, { 2, 4 }, { 1, 4 }, { 0, 4 }, { 1,
        5 }, { 0, 5 }, { 3, 6 }, { 2, 6 }, { 1, 6 }, { 0, 6 }, { 5, 7 },
    { 4, 7 }, { 3, 7 }, { 2, 7 }, { 1, 7 }, { 0, 7 }, { 1, 8 }, { 0, 8 }, { 5,
        9 }, { 4, 9 }, { 3, 9 }, { 2, 9 }, { 1, 9 }, { 0, 9 }, { 3, 10 }, { 2,
        10 }, { 1, 10 }, { 0, 10 }, { 1, 11 }, { 0, 11 }, { 3, 12 }, { 2, 12 },
    { 1, 12 }, { 0, 12 }, { 5, 13 }, { 4, 13 }, { 3, 13 }, { 2, 13 },
    { 1, 13 }, { 0, 13 }, { 5, 14 }, { 4, 14 }, { 3, 14 }, { 2, 14 },
    { 1, 14 }, { 0, 14 }, { 1, 15 }, { 0, 15 }, { 5, 16 }, { 4, 16 },
    { 3, 16 }, { 2, 16 }, { 1, 16 }, { 0, 16 }, { 3, 17 }, { 2, 17 },
    { 1, 17 }, { 0, 17 }, { 1, 18 }, { 0, 18 }, { 5, 19 }, { 4, 19 },
    { 3, 19 }, { 2, 19 }, { 1, 19 }, { 0, 19 }, { 3, 20 }, { 2, 20 },
    { 1, 20 }, { 0, 20 }, { 5, 21 }, { 4, 21 }, { 3, 21 }, { 2, 21 },
    { 1, 21 }, { 0, 21 }, { 7, 22 }, { 6, 22 }, { 5, 22 }, { 4, 22 },
    { 3, 22 }, { 2, 22 }, { 1, 22 }, { 0, 22 }, { 3, 23 }, { 2, 23 },
    { 1, 23 }, { 0, 23 }, { 1, 24 }, { 0, 24 }, { 3, 25 }, { 2, 25 },
    { 1, 25 }, { 0, 25 }, { 1, 26 }, { 0, 26 }, { 3, 27 }, { 2, 27 },
    { 1, 27 }, { 0, 27 }, { 7, 28 }, { 6, 28 }, { 5, 28 }, { 4, 28 },
    { 3, 28 }, { 2, 28 }, { 1, 28 }, { 0, 28 }, { 5, 29 }, { 4, 29 },
    { 3, 29 }, { 2, 29 }, { 1, 29 }, { 0, 29 }, { 3, 30 }, { 2, 30 },
    { 1, 30 }, { 0, 30 }, { 5, 31 }, { 4, 31 }, { 3, 31 }, { 2, 31 },
    { 1, 31 }, { 0, 31 }, { 1, 32 }, { 0, 32 }, { 3, 33 }, { 2, 33 },
    { 1, 33 }, { 0, 33 }, { 5, 34 }, { 4, 34 }, { 3, 34 }, { 2, 34 },
    { 1, 34 }, { 0, 34 }, { 1, 35 }, { 0, 35 }, { 5, 36 }, { 4, 36 },
    { 3, 36 }, { 2, 36 }, { 1, 36 }, { 0, 36 }, { 5, 37 }, { 4, 37 },
    { 3, 37 }, { 2, 37 }, { 1, 37 }, { 0, 37 }, { 3, 38 }, { 2, 38 },
    { 1, 38 }, { 0, 38 }, { 1, 39 }, { 0, 39 }, { 3, 40 }, { 2, 40 },
    { 1, 40 }, { 0, 40 }, { 5, 41 }, { 4, 41 }, { 3, 41 }, { 2, 41 },
    { 1, 41 }, { 0, 41 }, { 1, 42 }, { 0, 42 }, { 5, 43 }, { 4, 43 },
    { 3, 43 }, { 2, 43 }, { 1, 43 }, { 0, 43 }, { 3, 44 }, { 2, 44 },
    { 1, 44 }, { 0, 44 }, { 1, 45 }, { 0, 45 }, { 3, 46 }, { 2, 46 },
    { 1, 46 }, { 0, 46 }, { 1, 47 }, { 0, 47 }, { 9, 0 }, { 8, 0 }, { 7, 0 }, {
        6, 0 }, { 5, 0 }, { 4, 0 }, { 3, 0 }, { 2, 0 }, { 1, 0 }, { 0, 0 } };

const WheelElement Modulo30Wheel::wheel_[8 * 8] = { { BIT5, 1, 1, 1 }, { BIT0,
    3, 1, 1 }, { BIT4, 2, 1, 1 }, { BIT3, 1, 0, 1 }, { BIT7, 2, 1, 1 }, { BIT6,
    1, 1, 1 }, { BIT2, 2, 1, 1 }, { BIT1, 3, 1, -7 }, { BIT4, 1, 1, 1 }, {
    BIT1, 3, 2, 1 }, { BIT3, 2, 1, 1 }, { BIT7, 1, 1, 1 }, { BIT5, 2, 2, 1 }, {
    BIT0, 1, 0, 1 }, { BIT6, 2, 2, 1 }, { BIT2, 3, 2, -7 }, { BIT3, 1, 1, 1 },
    { BIT2, 3, 2, 1 }, { BIT7, 2, 2, 1 }, { BIT5, 1, 1, 1 }, { BIT4, 2, 2, 1 },
    { BIT1, 1, 1, 1 }, { BIT0, 2, 1, 1 }, { BIT6, 3, 3, -7 },
    { BIT2, 1, 0, 1 }, { BIT3, 3, 0, 1 }, { BIT6, 2, 1, 1 }, { BIT0, 1, 0, 1 },
    { BIT1, 2, 0, 1 }, { BIT4, 1, 0, 1 }, { BIT5, 2, 0, 1 },
    { BIT7, 3, 1, -7 }, { BIT1, 1, 0, 1 }, { BIT4, 3, 1, 1 },
    { BIT2, 2, 0, 1 }, { BIT6, 1, 1, 1 }, { BIT0, 2, 0, 1 }, { BIT5, 1, 0, 1 },
    { BIT7, 2, 1, 1 }, { BIT3, 3, 1, -7 }, { BIT0, 1, 0, 1 },
    { BIT5, 3, 2, 1 }, { BIT1, 2, 1, 1 }, { BIT2, 1, 0, 1 }, { BIT6, 2, 1, 1 },
    { BIT7, 1, 1, 1 }, { BIT3, 2, 1, 1 }, { BIT4, 3, 2, -7 },
    { BIT7, 1, 1, 1 }, { BIT6, 3, 3, 1 }, { BIT5, 2, 2, 1 }, { BIT4, 1, 1, 1 },
    { BIT3, 2, 2, 1 }, { BIT2, 1, 1, 1 }, { BIT1, 2, 2, 1 },
    { BIT0, 3, 2, -7 }, { BIT6, 1, 0, 1 }, { BIT7, 3, 1, 1 },
    { BIT0, 2, 0, 1 }, { BIT1, 1, 0, 1 }, { BIT2, 2, 0, 1 }, { BIT3, 1, 0, 1 },
    { BIT4, 2, 0, 1 }, { BIT5, 3, 0, -7 } };

const WheelElement Modulo210Wheel::wheel_[48 * 8] = { { BIT5, 1, 1, 1 }, {
    BIT0, 5, 2, 1 }, { BIT3, 1, 0, 1 }, { BIT7, 2, 1, 1 }, { BIT6, 1, 1, 1 }, {
    BIT2, 2, 1, 1 }, { BIT1, 3, 1, 1 }, { BIT5, 1, 1, 1 }, { BIT0, 3, 1, 1 }, {
    BIT4, 2, 1, 1 }, { BIT3, 1, 0, 1 }, { BIT7, 2, 1, 1 }, { BIT6, 3, 2, 1 }, {
    BIT1, 3, 1, 1 }, { BIT5, 1, 1, 1 }, { BIT0, 3, 1, 1 }, { BIT4, 2, 1, 1 }, {
    BIT3, 1, 0, 1 }, { BIT7, 3, 2, 1 }, { BIT2, 2, 1, 1 }, { BIT1, 3, 1, 1 }, {
    BIT5, 4, 2, 1 }, { BIT4, 2, 1, 1 }, { BIT3, 1, 0, 1 }, { BIT7, 2, 1, 1 }, {
    BIT6, 1, 1, 1 }, { BIT2, 2, 1, 1 }, { BIT1, 4, 2, 1 }, { BIT0, 3, 1, 1 }, {
    BIT4, 2, 1, 1 }, { BIT3, 3, 1, 1 }, { BIT6, 1, 1, 1 }, { BIT2, 2, 1, 1 }, {
    BIT1, 3, 1, 1 }, { BIT5, 1, 1, 1 }, { BIT0, 3, 1, 1 }, { BIT4, 3, 1, 1 }, {
    BIT7, 2, 1, 1 }, { BIT6, 1, 1, 1 }, { BIT2, 2, 1, 1 }, { BIT1, 3, 1, 1 }, {
    BIT5, 1, 1, 1 }, { BIT0, 3, 1, 1 }, { BIT4, 2, 1, 1 }, { BIT3, 1, 0, 1 }, {
    BIT7, 2, 1, 1 }, { BIT6, 1, 1, 1 }, { BIT2, 5, 2, -47 }, { BIT4, 1, 1, 1 },
    { BIT1, 5, 3, 1 }, { BIT7, 1, 1, 1 }, { BIT5, 2, 2, 1 }, { BIT0, 1, 0, 1 },
    { BIT6, 2, 2, 1 }, { BIT2, 3, 2, 1 }, { BIT4, 1, 1, 1 }, { BIT1, 3, 2, 1 },
    { BIT3, 2, 1, 1 }, { BIT7, 1, 1, 1 }, { BIT5, 2, 2, 1 }, { BIT0, 3, 2, 1 },
    { BIT2, 3, 2, 1 }, { BIT4, 1, 1, 1 }, { BIT1, 3, 2, 1 }, { BIT3, 2, 1, 1 },
    { BIT7, 1, 1, 1 }, { BIT5, 3, 2, 1 }, { BIT6, 2, 2, 1 }, { BIT2, 3, 2, 1 },
    { BIT4, 4, 3, 1 }, { BIT3, 2, 1, 1 }, { BIT7, 1, 1, 1 }, { BIT5, 2, 2, 1 },
    { BIT0, 1, 0, 1 }, { BIT6, 2, 2, 1 }, { BIT2, 4, 3, 1 }, { BIT1, 3, 2, 1 },
    { BIT3, 2, 1, 1 }, { BIT7, 3, 3, 1 }, { BIT0, 1, 0, 1 }, { BIT6, 2, 2, 1 },
    { BIT2, 3, 2, 1 }, { BIT4, 1, 1, 1 }, { BIT1, 3, 2, 1 }, { BIT3, 3, 2, 1 },
    { BIT5, 2, 2, 1 }, { BIT0, 1, 0, 1 }, { BIT6, 2, 2, 1 }, { BIT2, 3, 2, 1 },
    { BIT4, 1, 1, 1 }, { BIT1, 3, 2, 1 }, { BIT3, 2, 1, 1 }, { BIT7, 1, 1, 1 },
    { BIT5, 2, 2, 1 }, { BIT0, 1, 0, 1 }, { BIT6, 5, 4, -47 },
    { BIT3, 1, 1, 1 }, { BIT2, 5, 4, 1 }, { BIT5, 1, 1, 1 }, { BIT4, 2, 2, 1 },
    { BIT1, 1, 1, 1 }, { BIT0, 2, 1, 1 }, { BIT6, 3, 3, 1 }, { BIT3, 1, 1, 1 },
    { BIT2, 3, 2, 1 }, { BIT7, 2, 2, 1 }, { BIT5, 1, 1, 1 }, { BIT4, 2, 2, 1 },
    { BIT1, 3, 2, 1 }, { BIT6, 3, 3, 1 }, { BIT3, 1, 1, 1 }, { BIT2, 3, 2, 1 },
    { BIT7, 2, 2, 1 }, { BIT5, 1, 1, 1 }, { BIT4, 3, 3, 1 }, { BIT0, 2, 1, 1 },
    { BIT6, 3, 3, 1 }, { BIT3, 4, 3, 1 }, { BIT7, 2, 2, 1 }, { BIT5, 1, 1, 1 },
    { BIT4, 2, 2, 1 }, { BIT1, 1, 1, 1 }, { BIT0, 2, 1, 1 }, { BIT6, 4, 4, 1 },
    { BIT2, 3, 2, 1 }, { BIT7, 2, 2, 1 }, { BIT5, 3, 3, 1 }, { BIT1, 1, 1, 1 },
    { BIT0, 2, 1, 1 }, { BIT6, 3, 3, 1 }, { BIT3, 1, 1, 1 }, { BIT2, 3, 2, 1 },
    { BIT7, 3, 3, 1 }, { BIT4, 2, 2, 1 }, { BIT1, 1, 1, 1 }, { BIT0, 2, 1, 1 },
    { BIT6, 3, 3, 1 }, { BIT3, 1, 1, 1 }, { BIT2, 3, 2, 1 }, { BIT7, 2, 2, 1 },
    { BIT5, 1, 1, 1 }, { BIT4, 2, 2, 1 }, { BIT1, 1, 1, 1 },
    { BIT0, 5, 4, -47 }, { BIT2, 1, 0, 1 }, { BIT3, 5, 1, 1 },
    { BIT0, 1, 0, 1 }, { BIT1, 2, 0, 1 }, { BIT4, 1, 0, 1 }, { BIT5, 2, 0, 1 },
    { BIT7, 3, 1, 1 }, { BIT2, 1, 0, 1 }, { BIT3, 3, 0, 1 }, { BIT6, 2, 1, 1 },
    { BIT0, 1, 0, 1 }, { BIT1, 2, 0, 1 }, { BIT4, 3, 0, 1 }, { BIT7, 3, 1, 1 },
    { BIT2, 1, 0, 1 }, { BIT3, 3, 0, 1 }, { BIT6, 2, 1, 1 }, { BIT0, 1, 0, 1 },
    { BIT1, 3, 0, 1 }, { BIT5, 2, 0, 1 }, { BIT7, 3, 1, 1 }, { BIT2, 4, 0, 1 },
    { BIT6, 2, 1, 1 }, { BIT0, 1, 0, 1 }, { BIT1, 2, 0, 1 }, { BIT4, 1, 0, 1 },
    { BIT5, 2, 0, 1 }, { BIT7, 4, 1, 1 }, { BIT3, 3, 0, 1 }, { BIT6, 2, 1, 1 },
    { BIT0, 3, 0, 1 }, { BIT4, 1, 0, 1 }, { BIT5, 2, 0, 1 }, { BIT7, 3, 1, 1 },
    { BIT2, 1, 0, 1 }, { BIT3, 3, 0, 1 }, { BIT6, 3, 1, 1 }, { BIT1, 2, 0, 1 },
    { BIT4, 1, 0, 1 }, { BIT5, 2, 0, 1 }, { BIT7, 3, 1, 1 }, { BIT2, 1, 0, 1 },
    { BIT3, 3, 0, 1 }, { BIT6, 2, 1, 1 }, { BIT0, 1, 0, 1 }, { BIT1, 2, 0, 1 },
    { BIT4, 1, 0, 1 }, { BIT5, 5, 1, -47 }, { BIT1, 1, 0, 1 },
    { BIT4, 5, 1, 1 }, { BIT6, 1, 1, 1 }, { BIT0, 2, 0, 1 }, { BIT5, 1, 0, 1 },
    { BIT7, 2, 1, 1 }, { BIT3, 3, 1, 1 }, { BIT1, 1, 0, 1 }, { BIT4, 3, 1, 1 },
    { BIT2, 2, 0, 1 }, { BIT6, 1, 1, 1 }, { BIT0, 2, 0, 1 }, { BIT5, 3, 1, 1 },
    { BIT3, 3, 1, 1 }, { BIT1, 1, 0, 1 }, { BIT4, 3, 1, 1 }, { BIT2, 2, 0, 1 },
    { BIT6, 1, 1, 1 }, { BIT0, 3, 0, 1 }, { BIT7, 2, 1, 1 }, { BIT3, 3, 1, 1 },
    { BIT1, 4, 1, 1 }, { BIT2, 2, 0, 1 }, { BIT6, 1, 1, 1 }, { BIT0, 2, 0, 1 },
    { BIT5, 1, 0, 1 }, { BIT7, 2, 1, 1 }, { BIT3, 4, 1, 1 }, { BIT4, 3, 1, 1 },
    { BIT2, 2, 0, 1 }, { BIT6, 3, 1, 1 }, { BIT5, 1, 0, 1 }, { BIT7, 2, 1, 1 },
    { BIT3, 3, 1, 1 }, { BIT1, 1, 0, 1 }, { BIT4, 3, 1, 1 }, { BIT2, 3, 1, 1 },
    { BIT0, 2, 0, 1 }, { BIT5, 1, 0, 1 }, { BIT7, 2, 1, 1 }, { BIT3, 3, 1, 1 },
    { BIT1, 1, 0, 1 }, { BIT4, 3, 1, 1 }, { BIT2, 2, 0, 1 }, { BIT6, 1, 1, 1 },
    { BIT0, 2, 0, 1 }, { BIT5, 1, 0, 1 }, { BIT7, 5, 2, -47 },
    { BIT0, 1, 0, 1 }, { BIT5, 5, 3, 1 }, { BIT2, 1, 0, 1 }, { BIT6, 2, 1, 1 },
    { BIT7, 1, 1, 1 }, { BIT3, 2, 1, 1 }, { BIT4, 3, 2, 1 }, { BIT0, 1, 0, 1 },
    { BIT5, 3, 2, 1 }, { BIT1, 2, 1, 1 }, { BIT2, 1, 0, 1 }, { BIT6, 2, 1, 1 },
    { BIT7, 3, 2, 1 }, { BIT4, 3, 2, 1 }, { BIT0, 1, 0, 1 }, { BIT5, 3, 2, 1 },
    { BIT1, 2, 1, 1 }, { BIT2, 1, 0, 1 }, { BIT6, 3, 2, 1 }, { BIT3, 2, 1, 1 },
    { BIT4, 3, 2, 1 }, { BIT0, 4, 2, 1 }, { BIT1, 2, 1, 1 }, { BIT2, 1, 0, 1 },
    { BIT6, 2, 1, 1 }, { BIT7, 1, 1, 1 }, { BIT3, 2, 1, 1 }, { BIT4, 4, 2, 1 },
    { BIT5, 3, 2, 1 }, { BIT1, 2, 1, 1 }, { BIT2, 3, 1, 1 }, { BIT7, 1, 1, 1 },
    { BIT3, 2, 1, 1 }, { BIT4, 3, 2, 1 }, { BIT0, 1, 0, 1 }, { BIT5, 3, 2, 1 },
    { BIT1, 3, 1, 1 }, { BIT6, 2, 1, 1 }, { BIT7, 1, 1, 1 }, { BIT3, 2, 1, 1 },
    { BIT4, 3, 2, 1 }, { BIT0, 1, 0, 1 }, { BIT5, 3, 2, 1 }, { BIT1, 2, 1, 1 },
    { BIT2, 1, 0, 1 }, { BIT6, 2, 1, 1 }, { BIT7, 1, 1, 1 },
    { BIT3, 5, 3, -47 }, { BIT7, 1, 1, 1 }, { BIT6, 5, 5, 1 },
    { BIT4, 1, 1, 1 }, { BIT3, 2, 2, 1 }, { BIT2, 1, 1, 1 }, { BIT1, 2, 2, 1 },
    { BIT0, 3, 2, 1 }, { BIT7, 1, 1, 1 }, { BIT6, 3, 3, 1 }, { BIT5, 2, 2, 1 },
    { BIT4, 1, 1, 1 }, { BIT3, 2, 2, 1 }, { BIT2, 3, 3, 1 }, { BIT0, 3, 2, 1 },
    { BIT7, 1, 1, 1 }, { BIT6, 3, 3, 1 }, { BIT5, 2, 2, 1 }, { BIT4, 1, 1, 1 },
    { BIT3, 3, 3, 1 }, { BIT1, 2, 2, 1 }, { BIT0, 3, 2, 1 }, { BIT7, 4, 4, 1 },
    { BIT5, 2, 2, 1 }, { BIT4, 1, 1, 1 }, { BIT3, 2, 2, 1 }, { BIT2, 1, 1, 1 },
    { BIT1, 2, 2, 1 }, { BIT0, 4, 3, 1 }, { BIT6, 3, 3, 1 }, { BIT5, 2, 2, 1 },
    { BIT4, 3, 3, 1 }, { BIT2, 1, 1, 1 }, { BIT1, 2, 2, 1 }, { BIT0, 3, 2, 1 },
    { BIT7, 1, 1, 1 }, { BIT6, 3, 3, 1 }, { BIT5, 3, 3, 1 }, { BIT3, 2, 2, 1 },
    { BIT2, 1, 1, 1 }, { BIT1, 2, 2, 1 }, { BIT0, 3, 2, 1 }, { BIT7, 1, 1, 1 },
    { BIT6, 3, 3, 1 }, { BIT5, 2, 2, 1 }, { BIT4, 1, 1, 1 }, { BIT3, 2, 2, 1 },
    { BIT2, 1, 1, 1 }, { BIT1, 5, 4, -47 }, { BIT6, 1, 0, 1 },
    { BIT7, 5, 1, 1 }, { BIT1, 1, 0, 1 }, { BIT2, 2, 0, 1 }, { BIT3, 1, 0, 1 },
    { BIT4, 2, 0, 1 }, { BIT5, 3, 0, 1 }, { BIT6, 1, 0, 1 }, { BIT7, 3, 1, 1 },
    { BIT0, 2, 0, 1 }, { BIT1, 1, 0, 1 }, { BIT2, 2, 0, 1 }, { BIT3, 3, 0, 1 },
    { BIT5, 3, 0, 1 }, { BIT6, 1, 0, 1 }, { BIT7, 3, 1, 1 }, { BIT0, 2, 0, 1 },
    { BIT1, 1, 0, 1 }, { BIT2, 3, 0, 1 }, { BIT4, 2, 0, 1 }, { BIT5, 3, 0, 1 },
    { BIT6, 4, 1, 1 }, { BIT0, 2, 0, 1 }, { BIT1, 1, 0, 1 }, { BIT2, 2, 0, 1 },
    { BIT3, 1, 0, 1 }, { BIT4, 2, 0, 1 }, { BIT5, 4, 0, 1 }, { BIT7, 3, 1, 1 },
    { BIT0, 2, 0, 1 }, { BIT1, 3, 0, 1 }, { BIT3, 1, 0, 1 }, { BIT4, 2, 0, 1 },
    { BIT5, 3, 0, 1 }, { BIT6, 1, 0, 1 }, { BIT7, 3, 1, 1 }, { BIT0, 3, 0, 1 },
    { BIT2, 2, 0, 1 }, { BIT3, 1, 0, 1 }, { BIT4, 2, 0, 1 }, { BIT5, 3, 0, 1 },
    { BIT6, 1, 0, 1 }, { BIT7, 3, 1, 1 }, { BIT0, 2, 0, 1 }, { BIT1, 1, 0, 1 },
    { BIT2, 2, 0, 1 }, { BIT3, 1, 0, 1 }, { BIT4, 5, 0, -47 } };
