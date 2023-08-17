
#ifndef VOCAB_H
#define VOCAB_H

#include <stdint.h>
#include <string>
#include <vector>
using namespace std;

namespace funasr {
class Vocab {
  private:
    vector<string> vocab;
    bool IsEnglish(string ch);
    void LoadVocabFromYaml(const char* filename);

  public:
    Vocab(const char *filename);
    ~Vocab();
    int Size();
    bool IsChinese(string ch);
    void Vector2String(vector<int> in, std::vector<std::string> &preds);
    string Vector2StringV2(vector<int> in);
};

} // namespace funasr
#endif
