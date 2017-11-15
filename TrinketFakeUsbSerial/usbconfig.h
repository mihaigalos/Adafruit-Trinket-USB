#ifndef __MIHAI_GALOS_USBCONFIG_H__
#define __MIHAI_GALOS_USBCONFIG_H__

#if defined(__AVR_ATmega328P__)
#include "usbconfig_m328p.h"
#else

#include "usbconfig_t85.h"

#endif // defined(__AVR_ATmega328P__)

#endif // __MIHAI_GALOS_USBCONFIG_H__