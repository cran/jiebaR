#include "../inst/include/jiebaR.h"
using namespace Rcpp;
//using namespace cppjieba;

// [[Rcpp::export]]
XPtr<JiebaClass> jiebaclass_ptr(string dict, string model,
                     string user,Nullable<CharacterVector>& stop){
  return( XPtr<JiebaClass>(new JiebaClass(dict, model, user, stop))) ;
}

// [[Rcpp::export]]
CharacterVector jiebaclass_mix_cut(CharacterVector& x, XPtr<JiebaClass> cutter){
  return wrap(cutter->cut_mix(x));
}

// [[Rcpp::export]]
CharacterVector jiebaclass_mp_cut(CharacterVector& x, size_t num,XPtr<JiebaClass> cutter){
  return wrap(cutter->cut_mp(x,num));
}

// [[Rcpp::export]]
CharacterVector jiebaclass_hmm_cut(CharacterVector& x, XPtr<JiebaClass> cutter){
  return wrap(cutter->cut_hmm(x));
}

// [[Rcpp::export]]
CharacterVector jiebaclass_full_cut(CharacterVector& x, XPtr<JiebaClass> cutter){
  return wrap(cutter->cut_full(x));
}

// [[Rcpp::export]]
CharacterVector jiebaclass_query_cut(CharacterVector& x, XPtr<JiebaClass> cutter){
  return wrap(cutter->cut_query(x));
}

// [[Rcpp::export]]
CharacterVector jiebaclass_level_cut(CharacterVector& x, XPtr<JiebaClass> cutter){
  return wrap(cutter->cut_level(x));
}

// [[Rcpp::export]]
CharacterVector jiebaclass_level_cut_pair(CharacterVector& x, XPtr<JiebaClass> cutter){
  return wrap(cutter->cut_level_pair(x));
}

// [[Rcpp::export]]
CharacterVector jiebaclass_tag_tag(CharacterVector& x, XPtr<JiebaClass> cutter){
  return wrap(cutter->cut_tag_tag(x));
}

// [[Rcpp::export]]
CharacterVector jiebaclass_tag_file(CharacterVector& x, XPtr<JiebaClass> cutter){
  return wrap(cutter->cut_tag_file(x));
}
// [[Rcpp::export]]
SEXP set_query_threshold(size_t num, XPtr<JiebaClass> cutter){
  return wrap(cutter->set_query_threshold(num));
}
// [[Rcpp::export]]
SEXP add_user_word(CharacterVector& x,CharacterVector& tag, XPtr<JiebaClass> cutter){
  return wrap(cutter->add_user_word(x,tag));
}


/////// keyword

// [[Rcpp::export]]
XPtr<keyword> key_ptr(unsigned int& n, string dict,
                      string model, string idf,
                      string stop,string user){
  return( XPtr<keyword>(new keyword(n, dict, model, idf, stop, user))) ;
}

// [[Rcpp::export]]
CharacterVector key_tag(CharacterVector& x, XPtr<keyword> cutter){
  return wrap(cutter->tag(x));
}

// [[Rcpp::export]]
CharacterVector key_cut(CharacterVector& x, XPtr<keyword> cutter){
  return wrap(cutter->cut(x));
}

// [[Rcpp::export]]
CharacterVector key_keys(vector<string>& x, XPtr<keyword> cutter){
  return wrap(cutter->vector_keys(x));
}

/////// simhash

// [[Rcpp::export]]
XPtr<sim> sim_ptr(string dict, string model,
                  string idf,  string stop, string user){
  return( XPtr<sim>(new sim(dict, model, idf, stop, user))) ;
}

// [[Rcpp::export]]
List sim_sim(string code, size_t topn, XPtr<sim> cutter){
  return cutter->simhash(code,topn);
}

// [[Rcpp::export]]
List sim_vec(vector<string>& code, size_t topn, XPtr<sim> cutter){
  return cutter->simhash_fromvec(code,topn);
}


// [[Rcpp::export]]
List sim_distance(CharacterVector& lhs, CharacterVector& rhs,
                  size_t topn, XPtr<sim> cutter){
  return cutter->distance(lhs, rhs, topn);
}

// [[Rcpp::export]]
List sim_distance_vec(vector<string>& lcode,vector<string>& rcode, size_t topn, XPtr<sim> cutter){
  return cutter->distance_fromvec(lcode,rcode,topn);
}

// [[Rcpp::export]]
CharacterVector u64tobin(string x){
  string res;
  uint64_t todo = atoi(x.c_str());
  Simhash::Simhasher::toBinaryString(todo,res);
  return wrap(res);
}

// [[Rcpp::export]]
List get_loc(vector<string>& word){
  vector<cppjieba::Jieba::LocWord> res;
  Jieba::Locate(word,res);
  vector<string> strings;
  vector<string> begins;
  vector<string> ends;
  strings.reserve(word.size());
  begins.reserve(word.size());
  ends.reserve(word.size());
  
  for(auto it=res.begin(); it!=res.end();it++){
    strings.push_back(it->word);
    begins.push_back(int64tos(it->begin));
    ends.push_back(int64tos(it->end));
  }
  return List::create(strings,begins,ends);
}
