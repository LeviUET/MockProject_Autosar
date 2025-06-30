#include "Rte_Type.h"
#include "Os.h"
#include "Com.h"
#include "Rte_Internal.h"

extern FUNC(void, RTE_CODE) Rte_MeasureDistance( VAR(void, AUTOMATIC) );

TASK (DistanceMeasureTask) {
    VAR(EventMaskType, AUTOMATIC) Event;

    while( 1 )
    {
        (VAR(void, AUTOMATIC))WaitEvent( OS_TE_50ms_DistanceMeasure );
        Event = 0U;
        (VAR(void, AUTOMATIC))GetEvent( DistanceMeasureTask, &Event );
        (VAR(void, AUTOMATIC))ClearEvent( Event & ( OS_TE_50ms_DistanceMeasure ) );
        if( (Event & OS_TE_50ms_DistanceMeasure) > 0U ) {

            Rte_MeasureDistance();
            
        } else {
            /* No treatment */
        }
    }
}

