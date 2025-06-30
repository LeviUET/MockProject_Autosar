extern NvM_Writeblock_NVM_Sensor ( VAR(NvM_BlockIdType, AUTOMATIC), P2CONST(void, AUTOMATIC, RTE_APPL_DATA) );

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvM_Service_Writeblock_NVM_Sensor( P2CONST(void, AUTOMATIC, RTE_APPL_DATA) data ) {
    VAR(Std_ReturnType, AUTOMATIC) return_value;

    return_value = NvM_Writeblock_NVM_Sensor( NVM_Sensor_ID, data );
    return return_value;
}

extern NvM_Readblock_NVM_Sensor ( VAR(NvM_BlockIdType, AUTOMATIC), P2VAR(void, AUTOMATIC, RTE_APPL_DATA) );

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvM_Service_Readblock_NVM_Sensor( P2VAR(void, AUTOMATIC, RTE_APPL_DATA) data ) {
    VAR(Std_ReturnType, AUTOMATIC) return_value;

    return_value = NvM_Writeblock_NVM_Sensor( NVM_Sensor_ID, data );
    return return_value;
}
