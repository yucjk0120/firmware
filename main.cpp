/*********************************************************************
*                    SEGGER Microcontroller GmbH                     *
*                        The Embedded Experts                        *
**********************************************************************
*                                                                    *
*            (c) 2014 - 2018 SEGGER Microcontroller GmbH             *
*                                                                    *
*           www.segger.com     Support: support@segger.com           *
*                                                                    *
**********************************************************************
*                                                                    *
* All rights reserved.                                               *
*                                                                    *
* Redistribution and use in source and binary forms, with or         *
* without modification, are permitted provided that the following    *
* conditions are met:                                                *
*                                                                    *
* - Redistributions of source code must retain the above copyright   *
*   notice, this list of conditions and the following disclaimer.    *
*                                                                    *
* - Neither the name of SEGGER Microcontroller GmbH                  *
*   nor the names of its contributors may be used to endorse or      *
*   promote products derived from this software without specific     *
*   prior written permission.                                        *
*                                                                    *
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND             *
* CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,        *
* INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF           *
* MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE           *
* DISCLAIMED.                                                        *
* IN NO EVENT SHALL SEGGER Microcontroller GmbH BE LIABLE FOR        *
* ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR           *
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT  *
* OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;    *
* OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF      *
* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT          *
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE  *
* USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH   *
* DAMAGE.                                                            *
*                                                                    *
**********************************************************************

-------------------------- END-OF-HEADER -----------------------------

File    : main.c
Purpose : Generic application start

*/
#include <mbed.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Bitkey.hpp>

Serial usbSerial(USBTX, USBRX, 115200);

_principalKeyList_t getPKList() {
  _principalKeyList_t res;
  return res;
}

_numberRistrictedKeyList_t getNRKList() {
  _numberRistrictedKeyList_t res;
  return res;
}

void writeNRKList() {
}

long getTime() {
  return 4585;
}


/*********************************************************************
*
*       main()
*
*  Function description
*   Application entry point.
*/
int main() {

  usbSerial.printf("Start: Bitlock Library\r\n");
  usbSerial.printf("Init: Bitkey Library\r\n");
  Bitkey bitkey = Bitkey(bitkeyUtil);

  const unsigned char * holeString = reinterpret_cast<const unsigned char *>("hole-string-it'll-be-very-long");
  const unsigned char * keyString = reinterpret_cast<const unsigned char *>("key-string-it'll-be-very-very-long");

  int res = bitkey.verifyKey(holeString, keyString);
  
  usbSerial.printf("res: %d\n", res);
}



/*************************** End of file ****************************/
