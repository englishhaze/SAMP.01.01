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
    char FLD1[5];
    char FLD2[20];
    long long FLD3;
    decimal(5,0) FLD4;
} TST2PFR_t;


typedef _Packed struct {
    char FLD1[5];
} TST2LF1_key_t;


typedef _Packed struct {
    char FLD2[20];
} TST2LF2_key_t;

