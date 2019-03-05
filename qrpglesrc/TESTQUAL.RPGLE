

     D  struct1_t...
     D                 DS                  BASED(template)
     D                                     QUALIFIED
     D    field1                      1a
     D    field2                      1a

     D  struct2_t...
     D                 DS                  BASED(template)
     D    field1                      1a
     D    field2                      1a

     D struct_1        DS                  LIKEDS(struct1_t) BASED(p_struct1)
     D struct_2        DS                  LIKEDS(struct2_t) BASED(p_struct2)

     D struct1_2       DS                  LIKEDS(struct1_t) BASED(p_item2)
     D struct2_2       DS                  LIKEDS(struct2_t) BASED(p_item2)

      /Free
             p_struct1 = %alloc(%size(struct1_t));
             p_struct2 = %alloc(%size(struct2_t));
             struct_1.field1 = 'A';
             struct_1.field2 = 'B';
             struct_2.field1 = 'C';
             struct_2.field2 = 'D';

             p_struct1 = %realloc(p_struct1:(2 * %size(struct1_t)));
             p_struct2 = %realloc(p_struct2:(2 * %size(struct1_t)));

             p_item2 = p_struct1 + %size(struct1_t);
             struct1_2.field1 = 'E';
             struct1_2.field2 = 'F';

             p_item2 = p_struct2 + %size(struct2_t);
             struct2_2.field1 = 'G';
             struct2_2.field2 = 'H';

             dealloc p_struct1;
             dealloc p_struct2;

             *INLR = *ON;

             Return;

      /End-free

