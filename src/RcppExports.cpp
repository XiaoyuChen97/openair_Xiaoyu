// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// Cquant
NumericVector Cquant(NumericVector A, NumericVector probs);
RcppExport SEXP openair_Cquant(SEXP ASEXP, SEXP probsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type probs(probsSEXP);
    __result = Rcpp::wrap(Cquant(A, probs));
    return __result;
END_RCPP
}