/* ================================================================ */
/* Ÿ 2005-2009 COPYRIGHT UNICOM SYSTEMS, INC.                       */
/*                                                                  */
/* ALL RIGHTS RESERVED                                              */
/*                                                                  */
/* THE INFORMATION CONTAINED HEREIN CONSTITUTES AN UNPUBLISHED      */
/* WORK OF UNICOM SYSTEMS, INC. ALL RIGHTS RESERVED.                */
/* NO MATERIAL FROM THIS WORK MAY BE REPRINTED,                     */
/* COPIED, OR EXTRACTED WITHOUT WRITTEN PERMISSION OF               */
/* UNICOM SYSTEMS, INC.                                             */
/* ================================================================ */

#pragma comment(copyright, "Ÿ 2005-2009 COPYRIGHT UNICOM SYSTEMS, INC.")

/* C Program #3 */

#include "TST"


void function1( _RFILE ** fileHandle )
{
    TST2PFR_t TST2PFR;
    _RIOFB_T * db_fdbk ;

    db_fdbk = _Rreadf(*fileHandle, &TST2PFR, sizeof(TST2PFR_t), __DFT);

    while(db_fdbk->num_bytes > 0) {

        db_fdbk = _Rreadn(*fileHandle, &TST2PFR, sizeof(TST2PFR_t), __DFT);

    }

    return;
}
