      * ============================================================
      * Ÿ 2005-2009 COPYRIGHT UNICOM SYSTEMS, INC.
      *
      * ALL RIGHTS RESERVED
      *
      * THE INFORMATION CONTAINED HEREIN CONSTITUTES AN UNPUBLISHED
      * WORK OF UNICOM SYSTEMS, INC. ALL RIGHTS RESERVED.
      * NO MATERIAL FROM THIS WORK MAY BE REPRINTED,
      * COPIED, OR EXTRACTED WITHOUT WRITTEN PERMISSION OF
      * UNICOM SYSTEMS, INC.
      *=============================================================
     H COPYRIGHT('Ÿ 2005-2009 COPYRIGHT UNICOM SYSTEMS, INC.')

      * RPG Source #2
      * ===============================================================
      *                          MAINTENANCE
      *
      * Programmer : PRW
      * Date       : 18/06/2009
      * Task Ref.  : PTST0001
      * Amendment  : Add some more pseudo code.
      *
      * ===============================================================

     D workField1      S             10a
     D workField2      S             10a
     D number1         S             10i 0 INZ(0)
     D number2         S             10i 0 INZ(0)

      /Free

         number1 += 10;
         number2 += 20;

         *INLR = *ON;

         Return;

      /end-free
