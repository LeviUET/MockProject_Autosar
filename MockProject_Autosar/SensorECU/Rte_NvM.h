#ifndef RTE_NVM_H
#define RTE_NVM_H

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvM_Service_Writeblock_NVM_Sensor( P2CONST(void, AUTOMATIC, RTE_APPL_DATA) data );

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvM_Service_Readblock_NVM_Sensor( P2VAR(void, AUTOMATIC, RTE_APPL_DATA) data );

#endif /* RTE_NVM_H */