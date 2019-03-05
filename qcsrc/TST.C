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


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <recio.h>
#include <decimal.h>

#include "TST1PF"
#include "TST2PF"
#include "TST3PF"


// Prototypes

void function1( _RFILE ** fileHandle );

void function2( _RFILE ** fileHandle );

// Service program M4TST functions

int countRecords( _RFILE ** fileHandle );
char utility1(char arg1 );

