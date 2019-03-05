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

// C module 5

#include "TST"


int countRecords( _RFILE ** fileHandle )
{
    _RIOFB_T * db_fdbk ;
    int counter = 0;

    db_fdbk = _Rreadf(*fileHandle, NULL, 0, __DFT);

    while(db_fdbk->num_bytes > 0) {

        counter++;

        db_fdbk = _Rreadn(*fileHandle, NULL, 0, __DFT);

    }

    return counter;

}
