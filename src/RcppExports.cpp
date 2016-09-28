// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/jiebaR.h"
#include <Rcpp.h>

using namespace Rcpp;

// file_coding
CharacterVector file_coding(CharacterVector file);
RcppExport SEXP jiebaR_file_coding(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type file(fileSEXP);
    rcpp_result_gen = Rcpp::wrap(file_coding(file));
    return rcpp_result_gen;
END_RCPP
}
// get_idf_cpp
List get_idf_cpp(List x, Nullable<CharacterVector> stop_);
RcppExport SEXP jiebaR_get_idf_cpp(SEXP xSEXP, SEXP stop_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< Nullable<CharacterVector> >::type stop_(stop_SEXP);
    rcpp_result_gen = Rcpp::wrap(get_idf_cpp(x, stop_));
    return rcpp_result_gen;
END_RCPP
}
// get_tuple_list
List get_tuple_list(ListOf<CharacterVector> x, R_xlen_t step);
RcppExport SEXP jiebaR_get_tuple_list(SEXP xSEXP, SEXP stepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< ListOf<CharacterVector> >::type x(xSEXP);
    Rcpp::traits::input_parameter< R_xlen_t >::type step(stepSEXP);
    rcpp_result_gen = Rcpp::wrap(get_tuple_list(x, step));
    return rcpp_result_gen;
END_RCPP
}
// get_tuple_vector
List get_tuple_vector(CharacterVector& x, R_xlen_t step);
RcppExport SEXP jiebaR_get_tuple_vector(SEXP xSEXP, SEXP stepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< R_xlen_t >::type step(stepSEXP);
    rcpp_result_gen = Rcpp::wrap(get_tuple_vector(x, step));
    return rcpp_result_gen;
END_RCPP
}
// jiebaclass_ptr
XPtr<JiebaClass> jiebaclass_ptr(string dict, string model, string user, Nullable<CharacterVector>& stop);
RcppExport SEXP jiebaR_jiebaclass_ptr(SEXP dictSEXP, SEXP modelSEXP, SEXP userSEXP, SEXP stopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< string >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< string >::type model(modelSEXP);
    Rcpp::traits::input_parameter< string >::type user(userSEXP);
    Rcpp::traits::input_parameter< Nullable<CharacterVector>& >::type stop(stopSEXP);
    rcpp_result_gen = Rcpp::wrap(jiebaclass_ptr(dict, model, user, stop));
    return rcpp_result_gen;
END_RCPP
}
// jiebaclass_ptr_v2
XPtr<JiebaClass> jiebaclass_ptr_v2(string dict, string model, string user, Nullable<CharacterVector>& stop, int uw);
RcppExport SEXP jiebaR_jiebaclass_ptr_v2(SEXP dictSEXP, SEXP modelSEXP, SEXP userSEXP, SEXP stopSEXP, SEXP uwSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< string >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< string >::type model(modelSEXP);
    Rcpp::traits::input_parameter< string >::type user(userSEXP);
    Rcpp::traits::input_parameter< Nullable<CharacterVector>& >::type stop(stopSEXP);
    Rcpp::traits::input_parameter< int >::type uw(uwSEXP);
    rcpp_result_gen = Rcpp::wrap(jiebaclass_ptr_v2(dict, model, user, stop, uw));
    return rcpp_result_gen;
END_RCPP
}
// jiebaclass_mix_cut
CharacterVector jiebaclass_mix_cut(CharacterVector& x, XPtr<JiebaClass> cutter);
RcppExport SEXP jiebaR_jiebaclass_mix_cut(SEXP xSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< XPtr<JiebaClass> >::type cutter(cutterSEXP);
    rcpp_result_gen = Rcpp::wrap(jiebaclass_mix_cut(x, cutter));
    return rcpp_result_gen;
END_RCPP
}
// jiebaclass_mp_cut
CharacterVector jiebaclass_mp_cut(CharacterVector& x, size_t num, XPtr<JiebaClass> cutter);
RcppExport SEXP jiebaR_jiebaclass_mp_cut(SEXP xSEXP, SEXP numSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< size_t >::type num(numSEXP);
    Rcpp::traits::input_parameter< XPtr<JiebaClass> >::type cutter(cutterSEXP);
    rcpp_result_gen = Rcpp::wrap(jiebaclass_mp_cut(x, num, cutter));
    return rcpp_result_gen;
END_RCPP
}
// jiebaclass_hmm_cut
CharacterVector jiebaclass_hmm_cut(CharacterVector& x, XPtr<JiebaClass> cutter);
RcppExport SEXP jiebaR_jiebaclass_hmm_cut(SEXP xSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< XPtr<JiebaClass> >::type cutter(cutterSEXP);
    rcpp_result_gen = Rcpp::wrap(jiebaclass_hmm_cut(x, cutter));
    return rcpp_result_gen;
END_RCPP
}
// jiebaclass_full_cut
CharacterVector jiebaclass_full_cut(CharacterVector& x, XPtr<JiebaClass> cutter);
RcppExport SEXP jiebaR_jiebaclass_full_cut(SEXP xSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< XPtr<JiebaClass> >::type cutter(cutterSEXP);
    rcpp_result_gen = Rcpp::wrap(jiebaclass_full_cut(x, cutter));
    return rcpp_result_gen;
END_RCPP
}
// jiebaclass_query_cut
CharacterVector jiebaclass_query_cut(CharacterVector& x, XPtr<JiebaClass> cutter);
RcppExport SEXP jiebaR_jiebaclass_query_cut(SEXP xSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< XPtr<JiebaClass> >::type cutter(cutterSEXP);
    rcpp_result_gen = Rcpp::wrap(jiebaclass_query_cut(x, cutter));
    return rcpp_result_gen;
END_RCPP
}
// jiebaclass_level_cut
CharacterVector jiebaclass_level_cut(CharacterVector& x, XPtr<JiebaClass> cutter);
RcppExport SEXP jiebaR_jiebaclass_level_cut(SEXP xSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< XPtr<JiebaClass> >::type cutter(cutterSEXP);
    rcpp_result_gen = Rcpp::wrap(jiebaclass_level_cut(x, cutter));
    return rcpp_result_gen;
END_RCPP
}
// jiebaclass_level_cut_pair
CharacterVector jiebaclass_level_cut_pair(CharacterVector& x, XPtr<JiebaClass> cutter);
RcppExport SEXP jiebaR_jiebaclass_level_cut_pair(SEXP xSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< XPtr<JiebaClass> >::type cutter(cutterSEXP);
    rcpp_result_gen = Rcpp::wrap(jiebaclass_level_cut_pair(x, cutter));
    return rcpp_result_gen;
END_RCPP
}
// jiebaclass_tag_tag
CharacterVector jiebaclass_tag_tag(CharacterVector& x, XPtr<JiebaClass> cutter);
RcppExport SEXP jiebaR_jiebaclass_tag_tag(SEXP xSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< XPtr<JiebaClass> >::type cutter(cutterSEXP);
    rcpp_result_gen = Rcpp::wrap(jiebaclass_tag_tag(x, cutter));
    return rcpp_result_gen;
END_RCPP
}
// jiebaclass_tag_file
CharacterVector jiebaclass_tag_file(CharacterVector& x, XPtr<JiebaClass> cutter);
RcppExport SEXP jiebaR_jiebaclass_tag_file(SEXP xSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< XPtr<JiebaClass> >::type cutter(cutterSEXP);
    rcpp_result_gen = Rcpp::wrap(jiebaclass_tag_file(x, cutter));
    return rcpp_result_gen;
END_RCPP
}
// jiebaclass_tag_vec
CharacterVector jiebaclass_tag_vec(vector<string>& code, XPtr<JiebaClass> cutter);
RcppExport SEXP jiebaR_jiebaclass_tag_vec(SEXP codeSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< vector<string>& >::type code(codeSEXP);
    Rcpp::traits::input_parameter< XPtr<JiebaClass> >::type cutter(cutterSEXP);
    rcpp_result_gen = Rcpp::wrap(jiebaclass_tag_vec(code, cutter));
    return rcpp_result_gen;
END_RCPP
}
// set_query_threshold
SEXP set_query_threshold(size_t num, XPtr<JiebaClass> cutter);
RcppExport SEXP jiebaR_set_query_threshold(SEXP numSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< size_t >::type num(numSEXP);
    Rcpp::traits::input_parameter< XPtr<JiebaClass> >::type cutter(cutterSEXP);
    rcpp_result_gen = Rcpp::wrap(set_query_threshold(num, cutter));
    return rcpp_result_gen;
END_RCPP
}
// add_user_word
SEXP add_user_word(CharacterVector& x, CharacterVector& tag, XPtr<JiebaClass> cutter);
RcppExport SEXP jiebaR_add_user_word(SEXP xSEXP, SEXP tagSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type tag(tagSEXP);
    Rcpp::traits::input_parameter< XPtr<JiebaClass> >::type cutter(cutterSEXP);
    rcpp_result_gen = Rcpp::wrap(add_user_word(x, tag, cutter));
    return rcpp_result_gen;
END_RCPP
}
// key_ptr
XPtr<keyword> key_ptr(unsigned int& n, string dict, string model, string idf, string stop, string user);
RcppExport SEXP jiebaR_key_ptr(SEXP nSEXP, SEXP dictSEXP, SEXP modelSEXP, SEXP idfSEXP, SEXP stopSEXP, SEXP userSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int& >::type n(nSEXP);
    Rcpp::traits::input_parameter< string >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< string >::type model(modelSEXP);
    Rcpp::traits::input_parameter< string >::type idf(idfSEXP);
    Rcpp::traits::input_parameter< string >::type stop(stopSEXP);
    Rcpp::traits::input_parameter< string >::type user(userSEXP);
    rcpp_result_gen = Rcpp::wrap(key_ptr(n, dict, model, idf, stop, user));
    return rcpp_result_gen;
END_RCPP
}
// key_tag
CharacterVector key_tag(CharacterVector& x, XPtr<keyword> cutter);
RcppExport SEXP jiebaR_key_tag(SEXP xSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< XPtr<keyword> >::type cutter(cutterSEXP);
    rcpp_result_gen = Rcpp::wrap(key_tag(x, cutter));
    return rcpp_result_gen;
END_RCPP
}
// key_cut
CharacterVector key_cut(CharacterVector& x, XPtr<keyword> cutter);
RcppExport SEXP jiebaR_key_cut(SEXP xSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< XPtr<keyword> >::type cutter(cutterSEXP);
    rcpp_result_gen = Rcpp::wrap(key_cut(x, cutter));
    return rcpp_result_gen;
END_RCPP
}
// key_keys
CharacterVector key_keys(vector<string>& x, XPtr<keyword> cutter);
RcppExport SEXP jiebaR_key_keys(SEXP xSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< vector<string>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< XPtr<keyword> >::type cutter(cutterSEXP);
    rcpp_result_gen = Rcpp::wrap(key_keys(x, cutter));
    return rcpp_result_gen;
END_RCPP
}
// sim_ptr
XPtr<sim> sim_ptr(string dict, string model, string idf, string stop, string user);
RcppExport SEXP jiebaR_sim_ptr(SEXP dictSEXP, SEXP modelSEXP, SEXP idfSEXP, SEXP stopSEXP, SEXP userSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< string >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< string >::type model(modelSEXP);
    Rcpp::traits::input_parameter< string >::type idf(idfSEXP);
    Rcpp::traits::input_parameter< string >::type stop(stopSEXP);
    Rcpp::traits::input_parameter< string >::type user(userSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_ptr(dict, model, idf, stop, user));
    return rcpp_result_gen;
END_RCPP
}
// sim_sim
List sim_sim(string code, size_t topn, XPtr<sim> cutter);
RcppExport SEXP jiebaR_sim_sim(SEXP codeSEXP, SEXP topnSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< string >::type code(codeSEXP);
    Rcpp::traits::input_parameter< size_t >::type topn(topnSEXP);
    Rcpp::traits::input_parameter< XPtr<sim> >::type cutter(cutterSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_sim(code, topn, cutter));
    return rcpp_result_gen;
END_RCPP
}
// sim_vec
List sim_vec(vector<string>& code, size_t topn, XPtr<sim> cutter);
RcppExport SEXP jiebaR_sim_vec(SEXP codeSEXP, SEXP topnSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< vector<string>& >::type code(codeSEXP);
    Rcpp::traits::input_parameter< size_t >::type topn(topnSEXP);
    Rcpp::traits::input_parameter< XPtr<sim> >::type cutter(cutterSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_vec(code, topn, cutter));
    return rcpp_result_gen;
END_RCPP
}
// sim_distance
List sim_distance(CharacterVector& lhs, CharacterVector& rhs, size_t topn, XPtr<sim> cutter);
RcppExport SEXP jiebaR_sim_distance(SEXP lhsSEXP, SEXP rhsSEXP, SEXP topnSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector& >::type lhs(lhsSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type rhs(rhsSEXP);
    Rcpp::traits::input_parameter< size_t >::type topn(topnSEXP);
    Rcpp::traits::input_parameter< XPtr<sim> >::type cutter(cutterSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_distance(lhs, rhs, topn, cutter));
    return rcpp_result_gen;
END_RCPP
}
// sim_distance_vec
List sim_distance_vec(vector<string>& lcode, vector<string>& rcode, size_t topn, XPtr<sim> cutter);
RcppExport SEXP jiebaR_sim_distance_vec(SEXP lcodeSEXP, SEXP rcodeSEXP, SEXP topnSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< vector<string>& >::type lcode(lcodeSEXP);
    Rcpp::traits::input_parameter< vector<string>& >::type rcode(rcodeSEXP);
    Rcpp::traits::input_parameter< size_t >::type topn(topnSEXP);
    Rcpp::traits::input_parameter< XPtr<sim> >::type cutter(cutterSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_distance_vec(lcode, rcode, topn, cutter));
    return rcpp_result_gen;
END_RCPP
}
// u64tobin
CharacterVector u64tobin(string x);
RcppExport SEXP jiebaR_u64tobin(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< string >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(u64tobin(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_ham_dist
IntegerVector cpp_ham_dist(CharacterVector x, CharacterVector y);
RcppExport SEXP jiebaR_cpp_ham_dist(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_ham_dist(x, y));
    return rcpp_result_gen;
END_RCPP
}
// cpp_ham_dist_mat
IntegerVector cpp_ham_dist_mat(CharacterVector x, CharacterVector y);
RcppExport SEXP jiebaR_cpp_ham_dist_mat(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_ham_dist_mat(x, y));
    return rcpp_result_gen;
END_RCPP
}
// get_loc
List get_loc(vector<string>& word);
RcppExport SEXP jiebaR_get_loc(SEXP wordSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< vector<string>& >::type word(wordSEXP);
    rcpp_result_gen = Rcpp::wrap(get_loc(word));
    return rcpp_result_gen;
END_RCPP
}
// words_freq
IntegerVector words_freq(const CharacterVector& x);
RcppExport SEXP jiebaR_words_freq(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CharacterVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(words_freq(x));
    return rcpp_result_gen;
END_RCPP
}
