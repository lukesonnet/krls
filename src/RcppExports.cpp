// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// krlogit_fn_trunc
double krlogit_fn_trunc(const arma::vec& par, const arma::mat& Utrunc, const arma::vec& D, const arma::vec& y, const double& lambda);
RcppExport SEXP KRLS2_krlogit_fn_trunc(SEXP parSEXP, SEXP UtruncSEXP, SEXP DSEXP, SEXP ySEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::vec& >::type par(parSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Utrunc(UtruncSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    __result = Rcpp::wrap(krlogit_fn_trunc(par, Utrunc, D, y, lambda));
    return __result;
END_RCPP
}
// krlogit_gr_trunc
arma::vec krlogit_gr_trunc(const arma::vec& par, const arma::mat& Utrunc, const arma::vec& D, const arma::vec& y, const double& lambda);
RcppExport SEXP KRLS2_krlogit_gr_trunc(SEXP parSEXP, SEXP UtruncSEXP, SEXP DSEXP, SEXP ySEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::vec& >::type par(parSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Utrunc(UtruncSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    __result = Rcpp::wrap(krlogit_gr_trunc(par, Utrunc, D, y, lambda));
    return __result;
END_RCPP
}
// euc_dist
double euc_dist(const arma::rowvec& x1, const arma::rowvec& x2);
RcppExport SEXP KRLS2_euc_dist(SEXP x1SEXP, SEXP x2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::rowvec& >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type x2(x2SEXP);
    __result = Rcpp::wrap(euc_dist(x1, x2));
    return __result;
END_RCPP
}
// kern_gauss_1d
double kern_gauss_1d(const arma::rowvec& x1, const arma::rowvec& x2, const double& b);
RcppExport SEXP KRLS2_kern_gauss_1d(SEXP x1SEXP, SEXP x2SEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::rowvec& >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type x2(x2SEXP);
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    __result = Rcpp::wrap(kern_gauss_1d(x1, x2, b));
    return __result;
END_RCPP
}
// kern_gauss
arma::mat kern_gauss(const arma::mat& x, const double& b);
RcppExport SEXP KRLS2_kern_gauss(SEXP xSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    __result = Rcpp::wrap(kern_gauss(x, b));
    return __result;
END_RCPP
}
// new_gauss_kern
arma::mat new_gauss_kern(const arma::mat& newx, const arma::mat& oldx, const double& b);
RcppExport SEXP KRLS2_new_gauss_kern(SEXP newxSEXP, SEXP oldxSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type newx(newxSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type oldx(oldxSEXP);
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    __result = Rcpp::wrap(new_gauss_kern(newx, oldx, b));
    return __result;
END_RCPP
}
// mult_diag
arma::mat mult_diag(const arma::mat& x, const arma::vec& d);
RcppExport SEXP KRLS2_mult_diag(SEXP xSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type d(dSEXP);
    __result = Rcpp::wrap(mult_diag(x, d));
    return __result;
END_RCPP
}
// krlogit_gr_trunc2
arma::vec krlogit_gr_trunc2(const arma::vec& par, const arma::mat& Utrunc, const arma::vec& D, const arma::vec& y, const double& lambda, const double& n);
RcppExport SEXP KRLS2_krlogit_gr_trunc2(SEXP parSEXP, SEXP UtruncSEXP, SEXP DSEXP, SEXP ySEXP, SEXP lambdaSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::vec& >::type par(parSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Utrunc(UtruncSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double& >::type n(nSEXP);
    __result = Rcpp::wrap(krlogit_gr_trunc2(par, Utrunc, D, y, lambda, n));
    return __result;
END_RCPP
}
// eigsym
Rcpp::List eigsym(const arma::mat& x);
RcppExport SEXP KRLS2_eigsym(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    __result = Rcpp::wrap(eigsym(x));
    return __result;
END_RCPP
}
// lambda_search
double lambda_search(const double& tol, const double& l, const double& u, const arma::vec& y, const arma::vec& eigvals, const arma::mat& eigvecs, const double& eigtrunc);
RcppExport SEXP KRLS2_lambda_search(SEXP tolSEXP, SEXP lSEXP, SEXP uSEXP, SEXP ySEXP, SEXP eigvalsSEXP, SEXP eigvecsSEXP, SEXP eigtruncSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const double& >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const double& >::type l(lSEXP);
    Rcpp::traits::input_parameter< const double& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eigvals(eigvalsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type eigvecs(eigvecsSEXP);
    Rcpp::traits::input_parameter< const double& >::type eigtrunc(eigtruncSEXP);
    __result = Rcpp::wrap(lambda_search(tol, l, u, y, eigvals, eigvecs, eigtrunc));
    return __result;
END_RCPP
}
// solve_for_c_ls_trunc
Rcpp::List solve_for_c_ls_trunc(const arma::vec& y, const arma::mat& Utrunc, const arma::vec& D, const double& lambda);
RcppExport SEXP KRLS2_solve_for_c_ls_trunc(SEXP ySEXP, SEXP UtruncSEXP, SEXP DSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Utrunc(UtruncSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    __result = Rcpp::wrap(solve_for_c_ls_trunc(y, Utrunc, D, lambda));
    return __result;
END_RCPP
}
// solve_for_c_ls
Rcpp::List solve_for_c_ls(const arma::vec& y, const arma::mat& K, const double& lambda);
RcppExport SEXP KRLS2_solve_for_c_ls(SEXP ySEXP, SEXP KSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    __result = Rcpp::wrap(solve_for_c_ls(y, K, lambda));
    return __result;
END_RCPP
}
// pwmfx
arma::mat pwmfx(const arma::mat& k, const arma::mat& x, const arma::vec& coefhat, const arma::mat& vcovc, const arma::vec& p, const double& b);
RcppExport SEXP KRLS2_pwmfx(SEXP kSEXP, SEXP xSEXP, SEXP coefhatSEXP, SEXP vcovcSEXP, SEXP pSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type k(kSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type coefhat(coefhatSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type vcovc(vcovcSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    __result = Rcpp::wrap(pwmfx(k, x, coefhat, vcovc, p, b));
    return __result;
END_RCPP
}
