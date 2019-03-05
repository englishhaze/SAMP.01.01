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

/* C Program #1 */
#include "TST"


void main(int argc, char * argv[])
{

    _RFILE * TST1PF;
    _RIOFB_T * db_fdbk ;

    TST1PF = _Ropen("*LIBL/TST1PF", "rr") ;    /* Input  */

    // Do stuff with the file...

    _Rclose(TST1PF);


    return;

}


