#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>


/* .Call calls */
extern SEXP rankdist_AllPerms(SEXP);
extern SEXP rankdist_CayleyNeighbour(SEXP);
extern SEXP rankdist_CWeightGivenPi(SEXP, SEXP);
extern SEXP rankdist_cycle_decomp(SEXP);
extern SEXP rankdist_FindCayley(SEXP, SEXP);
extern SEXP rankdist_FindV(SEXP, SEXP);
extern SEXP rankdist_KendallNeighbour(SEXP);
extern SEXP rankdist_LogC(SEXP);
extern SEXP rankdist_LogC_Component(SEXP);
extern SEXP rankdist_Wtau(SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"rankdist_AllPerms",         (DL_FUNC) &rankdist_AllPerms,         1},
    {"rankdist_CayleyNeighbour",  (DL_FUNC) &rankdist_CayleyNeighbour,  1},
    {"rankdist_CWeightGivenPi",   (DL_FUNC) &rankdist_CWeightGivenPi,   2},
    {"rankdist_cycle_decomp",     (DL_FUNC) &rankdist_cycle_decomp,     1},
    {"rankdist_FindCayley",       (DL_FUNC) &rankdist_FindCayley,       2},
    {"rankdist_FindV",            (DL_FUNC) &rankdist_FindV,            2},
    {"rankdist_KendallNeighbour", (DL_FUNC) &rankdist_KendallNeighbour, 1},
    {"rankdist_LogC",             (DL_FUNC) &rankdist_LogC,             1},
    {"rankdist_LogC_Component",   (DL_FUNC) &rankdist_LogC_Component,   1},
    {"rankdist_Wtau",             (DL_FUNC) &rankdist_Wtau,             2},
    {NULL, NULL, 0}
};

void R_init_rankdist(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
