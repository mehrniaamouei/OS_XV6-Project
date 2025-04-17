#ifndef _CUSTOM_LOGGER_H_
#define _CUSTOM_LOGGER_H_

#include "types.h"

typedef enum{
    INFO = 0,
    WARN = 1,
    ERROR = 2
} log_level;

void log_message(log_level level, const char* message);

#endif