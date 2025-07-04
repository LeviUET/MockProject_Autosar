#include "Rte_NvM.h"

extern NvM_Writeblock_NVM_Alarm ( VAR(NvM_BlockIdType, AUTOMATIC), P2CONST(void, AUTOMATIC, RTE_APPL_DATA) );

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvM_Service_Writeblock_NVM_Alarm( P2CONST(void, AUTOMATIC, RTE_APPL_DATA) data ) {
    VAR(Std_ReturnType, AUTOMATIC) return_value;

    return_value = NvM_Writeblock_NVM_Alarm( NVM_Alarm_ID, data );
    return return_value;
}

extern NvM_Readblock_NVM_Alarm ( VAR(NvM_BlockIdType, AUTOMATIC), P2VAR(void, AUTOMATIC, RTE_APPL_DATA) );

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvM_Service_Readblock_NVM_Alarm( P2VAR(void, AUTOMATIC, RTE_APPL_DATA) data ) {
    VAR(Std_ReturnType, AUTOMATIC) return_value;

    return_value = NvM_Writeblock_NVM_Alarm( NVM_Alarm_ID, data );
    return return_value;
}
