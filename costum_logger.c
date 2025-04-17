#include "custom_logger.h"
#include "riscv.h"
#include "defs.h"
#include "types.h"


void log_message(log_level level, const char* message) {
    char* prefix;
    switch(level) {
        case INFO:
            prefix = "INFO";
            break;
        case WARN:
            prefix = "WARNING";
            break;
        case ERROR:
            prefix = "ERROR";
            break;
        default:
            prefix = "UNKNOWN";
    }
    printf("%s- %s", prefix, message);
}

