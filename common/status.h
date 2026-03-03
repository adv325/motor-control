#ifndef STATUS_H
#define STATUS_H

typedef enum
{
    STATUS_OK = 0,
    STATUS_ERROR,
    STATUS_TIMEOUT,
    STATUS_INVALID_PARAM,
    STATUS_BUSY,
    STATUS_NOT_INITIALIZED,
} status_t;

#endif /* STATUS_H */
