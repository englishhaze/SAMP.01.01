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


typedef _Packed struct {
    char FLD1[10];
    char FLD2;
    int  FLD3;
    decimal(3,0) FLD4;
} TST1PFR_t;


typedef _Packed struct {
    char FLD1[10];
} TST1LF1_key_t;


typedef _Packed struct {
    char FLD2;
} TST1LF2_key_t;

