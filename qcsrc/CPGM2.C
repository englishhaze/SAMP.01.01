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

/* C Program #2 */

#include "TST"


void main(int argc, char * argv[])
{
    _RFILE * TST2PF;
    _RFILE * TST3PF;
    _RIOFB_T * db_fdbk ;
    int TST2records;
    int TST3records;
    char character;

    TST2PF = _Ropen("*LIBL/TST2PF", "rr") ;    /* Input  */
    TST3PF = _Ropen("*LIBL/TST3PF", "rr") ;    /* Input  */

    // Do stuff with the file...
    function1(&TST2PF);

    // Do more stuff with the file...
    function2(&TST3PF);

    // Call utility function 1
    TST2records = countRecords(&TST2PF);
    TST3records = countRecords(&TST3PF);

    // Call utility function 2
    character = utility1('?');

    _Rclose(TST2PF);
    _Rclose(TST3PF);


    return;
}
