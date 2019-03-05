      * ============================================================
      * (C) 2005-2009 COPYRIGHT UNICOM SYSTEMS, INC.
      *
      * ALL RIGHTS RESERVED
      *
      * THE INFORMATION CONTAINED HEREIN CONSTITUTES AN UNPUBLISHED
      * WORK OF UNICOM SYSTEMS, INC. ALL RIGHTS RESERVED.
      * NO MATERIAL FROM THIS WORK MAY BE REPRINTED,
      * COPIED, OR EXTRACTED WITHOUT WRITTEN PERMISSION OF
      * UNICOM SYSTEMS, INC.
      *=============================================================
     H COPYRIGHT('(C) 2005-2009 COPYRIGHT UNICOM SYSTEMS, INC.')
     H DFTACTGRP(*NO) ACTGRP('RPGLE1')

      * RPG Source #1
      * ===============================================================
      *                          MAINTENANCE
      *
      * Programmer : PRW
      * Date       : 18/06/2009
      * Task Ref.  : PTST0001
      * Amendment  : Add some more pseudo code
      *
      * Programmer : PRW
      * Date       : May 2010
      * Task Ref.  : TSTP0002
      * Amendment  : Add check of product feature for testing
      *
      * ===============================================================

      /Copy H/QRPGLECPY,C#LICENSE

     D  getMaximumClients...
     D                 PR            10i 0 EXTPROC('getMaximumClients')
     D   product                      3a   CONST
     D   version                      4a
     D   daysToExpiry                10i 0
     D   expiryDate                   8a
     D   features                    16a
     D   errorCode                         LIKEDS(errorCode_T)


     D featureAllowed...
     D                 S             10i 0 INZ(0)
     D daysToExpiry    S             10i 0
     D errorCode       DS                  LIKEDS(errorCode_T)
     D returnLicense...
     D                 S               *
     D version         S              4a   INZ('100 ')
     D expiryDate      S              8a
     D clients         S             10i 0
     D features        S             16a
     D instance        S               *   INZ(*NULL)


      /Free

          errorCode.bytesProvided  = %size(errorCode_T);
          errorCode.bytesAvailable = 0;

          // Check product feature
          featureAllowed =
              checkProductFeature('TST'
                                 :version
                                 :'Feature1'
                                 :daysToExpiry
                                 :errorCode);

          //clients = getmaximumClients('TST'
          //                           :version
          //                           :daysToExpiry
          //                           :expiryDate
          //                           :features
          //                           :errorCode);
          //*INLR = *ON;

          Return;

      /End-free
