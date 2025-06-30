#include "Rte_Type.h"
#include "Os.h"
#include "Com.h"
#include "Rte_Internal.h"

extern FUNC(void, RTE_CODE) Rte_ProcessControl( VAR(void, AUTOMATIC) );
extern FUNC(void, RTE_CODE) Rte_ExecuteAlarmCommand( VAR(void, AUTOMATIC) );

TASK (DistanceAlarmTask) {
    VAR(EventMaskType, AUTOMATIC) Event;

    while( 1 )
    {
        (VAR(void, AUTOMATIC))WaitEvent( OS_CE_AlarmCommand | OS_CE_DistanceDataReceived );
        Event = 0U;
        (VAR(void, AUTOMATIC))GetEvent( DistanceAlarmTask, &Event );
        (VAR(void, AUTOMATIC))ClearEvent( Event & ( OS_CE_AlarmCommand | OS_CE_DistanceDataReceived ) );

        if( (Event & OS_CE_AlarmCommand) > 0U ) {
            
            Rte_ExecuteAlarmCommand();               

        }
        if((Event & OS_CE_DistanceDataReceived) > 0U) {

            Rte_ProcessControl();

        }
    }
}

extern FUNC(void, RTE_CODE) Rte_PDCService ( VAR(void, AUTOMATIC) );

TASK (ServiceTask) {
    VAR(EventMaskType, AUTOMATIC) Event;

    while( 1 )
    {
        (VAR(void, AUTOMATIC))WaitEvent( c );
        Event = 0U;
        (VAR(void, AUTOMATIC))GetEvent( ServiceTask, &Event );
        (VAR(void, AUTOMATIC))ClearEvent( Event & ( OS_CE_PDCService ) );

        if( (Event & OS_CE_PDCService) > 0U ) {
            
            Rte_PDCService();
            
        }
    }
}