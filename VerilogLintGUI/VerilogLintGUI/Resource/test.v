module and4(
   output       out,
   input        a, b, c, d);

   wire         an1, an2 ;
   and #1       (an1, a, b);
   and #2       (an2, c, d);
   and #1.5     (out, an1, an2);
endmodule