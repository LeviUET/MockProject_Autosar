#ifndef RTE_NVM_H
#define RTE_NVM_H

#include "Rte_Type.h"

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvM_Service_Writeblock_NVM_Alarm( P2CONST(void, AUTOMATIC, RTE_APPL_DATA) data );

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvM_Service_Readblock_NVM_Alarm( P2VAR(void, AUTOMATIC, RTE_APPL_DATA) data );


#endif /* RTE_NVM_H */