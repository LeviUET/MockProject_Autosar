#ifndef RTE_TYPE_H
#define RTE_TYPE_H

#include "stdint.h"

typedef uint8_t USSensor_uint8_t;

typedef uint8_t* pUSSensor_uint8_t;

typedef struct {
    USSensor_uint8_t Distance_S0;
    USSensor_uint8_t Distance_S1;
    USSensor_uint8_t Distance_S2;
    USSensor_uint8_t Distance_S3;
} DistanceGroup_t;

typedef DistanceGroup_t* pDistanceGroup_t;

typedef struct
{
    USSensor_uint8_t SensorOffset_0;
    USSensor_uint8_t SensorOffset_1;
    USSensor_uint8_t SensorOffset_2;
    USSensor_uint8_t SensorOffset_3;
} SensorOffset_t;


#endif /* RTE_TYPE_H */