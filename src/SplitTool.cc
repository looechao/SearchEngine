#include <iostream>
#include "../include/SplitTool.h"
#include "../include/cppjieba/Jieba.hpp"
using std::cout;
using std::string;

const char* const DICT_PATH = "../include/cppjieba/dict/jieba.dict.utf8";
const char* const HMM_PATH = "../include/cppjieba/dict/hmm_model.utf8";
const char* const USER_DICT_PATH = "../include/cppjieba/dict/user.dict.utf8";
const char* const IDF_PATH = "../include/cppjieba/dict/idf.utf8";
const char* const STOP_WORD_PATH = "../include/cppjieba/dict/stop_words.utf8";

vector<string> SplitToolCppJieba::cut(string str){
      cppjieba::Jieba jieba(DICT_PATH,
        HMM_PATH,
        USER_DICT_PATH,
        IDF_PATH,
        STOP_WORD_PATH);
  vector<string> words;
  vector<cppjieba::Word> jiebawords;
  string s = str;
  string result;

  jieba.Cut(s, words, true);
  //打印分词结果
  //cout << limonp::Join(words.begin(), words.end(), " ") << "\n";
  return words;
}


vector<string> SplitToolEn::cut(string str){
    vector<string> a = {"null"};
    return a;
}