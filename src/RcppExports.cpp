// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// IsingProcess
IntegerMatrix IsingProcess(int nSample, NumericMatrix graph, NumericVector thresholds, double beta, IntegerVector responses);
RcppExport SEXP IsingSampler_IsingProcess(SEXP nSampleSEXP, SEXP graphSEXP, SEXP thresholdsSEXP, SEXP betaSEXP, SEXP responsesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type nSample(nSampleSEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type graph(graphSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type thresholds(thresholdsSEXP );
        Rcpp::traits::input_parameter< double >::type beta(betaSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type responses(responsesSEXP );
        IntegerMatrix __result = IsingProcess(nSample, graph, thresholds, beta, responses);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// IsingSamplerCpp
IntegerMatrix IsingSamplerCpp(int n, NumericMatrix graph, NumericVector thresholds, double beta, int nIter, IntegerVector responses, bool exact, IntegerMatrix constrain);
RcppExport SEXP IsingSampler_IsingSamplerCpp(SEXP nSEXP, SEXP graphSEXP, SEXP thresholdsSEXP, SEXP betaSEXP, SEXP nIterSEXP, SEXP responsesSEXP, SEXP exactSEXP, SEXP constrainSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type graph(graphSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type thresholds(thresholdsSEXP );
        Rcpp::traits::input_parameter< double >::type beta(betaSEXP );
        Rcpp::traits::input_parameter< int >::type nIter(nIterSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type responses(responsesSEXP );
        Rcpp::traits::input_parameter< bool >::type exact(exactSEXP );
        Rcpp::traits::input_parameter< IntegerMatrix >::type constrain(constrainSEXP );
        IntegerMatrix __result = IsingSamplerCpp(n, graph, thresholds, beta, nIter, responses, exact, constrain);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// H
double H(NumericMatrix J, IntegerVector s, NumericVector h);
RcppExport SEXP IsingSampler_H(SEXP JSEXP, SEXP sSEXP, SEXP hSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type J(JSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type s(sSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type h(hSEXP );
        double __result = H(J, s, h);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// f
double f(IntegerMatrix Y, NumericMatrix J, NumericVector h);
RcppExport SEXP IsingSampler_f(SEXP YSEXP, SEXP JSEXP, SEXP hSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerMatrix >::type Y(YSEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type J(JSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type h(hSEXP );
        double __result = f(Y, J, h);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// Hvec
double Hvec(IntegerVector s, NumericVector Theta, int N);
RcppExport SEXP IsingSampler_Hvec(SEXP sSEXP, SEXP ThetaSEXP, SEXP NSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type s(sSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type Theta(ThetaSEXP );
        Rcpp::traits::input_parameter< int >::type N(NSEXP );
        double __result = Hvec(s, Theta, N);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// PseudoLikelihood
double PseudoLikelihood(NumericMatrix x, NumericMatrix graph, NumericVector thresholds, double beta, IntegerVector responses, bool logis);
RcppExport SEXP IsingSampler_PseudoLikelihood(SEXP xSEXP, SEXP graphSEXP, SEXP thresholdsSEXP, SEXP betaSEXP, SEXP responsesSEXP, SEXP logisSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type graph(graphSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type thresholds(thresholdsSEXP );
        Rcpp::traits::input_parameter< double >::type beta(betaSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type responses(responsesSEXP );
        Rcpp::traits::input_parameter< bool >::type logis(logisSEXP );
        double __result = PseudoLikelihood(x, graph, thresholds, beta, responses, logis);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
