/* ================================================================ */
/* � 2005-2009 COPYRIGHT UNICOM SYSTEMS, INC.                       */
/*                                                                  */
/* ALL RIGHTS RESERVED                                              */
/*                                                                  */
/* THE INFORMATION CONTAINED HEREIN CONSTITUTES AN UNPUBLISHED      */
/* WORK OF UNICOM SYSTEMS, INC. ALL RIGHTS RESERVED.                */
/* NO MATERIAL FROM THIS WORK MAY BE REPRINTED,                     */
/* COPIED, OR EXTRACTED WITHOUT WRITTEN PERMISSION OF               */
/* UNICOM SYSTEMS, INC.                                             */
/* ================================================================ */

#pragma comment(copyright, "� 2005-2009 COPYRIGHT UNICOM SYSTEMS, INC.")

/* C Program #4 */

#include "TST"


void function2( _RFILE ** fileHandle )
{
    TST3PFR_t TST3PFR;
    _RIOFB_T * db_fdbk ;

    db_fdbk = _Rreadf(*fileHandle, &TST3PFR, sizeof(TST3PFR_t), __DFT);

    while(db_fdbk->num_bytes == sizeof(TST3PFR_t)) {

        db_fdbk = _Rreadn(*fileHandle, &TST3PFR, sizeof(TST3PFR_t), __DFT);

    }


    return;
}
