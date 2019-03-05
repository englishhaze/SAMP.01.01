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
    char FLD1[20];
    char FLD2[5];
    short FLD3;
    decimal(7,0) FLD4;
} TST3PFR_t;


typedef _Packed struct {
    char FLD1[20];
} TST3LF1_key_t;


typedef _Packed struct {
    char FLD2[5];
} TST3LF2_key_t;

