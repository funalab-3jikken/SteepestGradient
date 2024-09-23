#include <stdio.h>
#include <math.h>
#include "experiment.h"
#include "sbml/SBMLTypes.h"

double likelihood_simple(double init_S1 , double init_S2, double k) {
  /* 変数定義 */
  double likelihood = 0.0;



  /* t = 0 ~ 10.0 までシミュレーションを実行 */




  /* 与えられたkの値に応じてlikelihoodを計算 */




  return likelihood;
}

int main(void) {
  double alpha = 0.01;
  double beta = pow(10, -14);
  
  double k0 = 0.8;
  double dk = pow(10, -7); /* 尤度のパラメータに対する微分値を計算する際のδθとして利用する */

  double difference; /* 更新前後の尤度の差を格納する */

  /* simple.xmlを読み込み最急勾配法に必要な情報を取得する */
  SBMLDocument_t *d = readSBML("simple.xml");

  do {
    /* 最急勾配法に基づき尤度を上昇させるパラメータを更新する */




  } while(difference > beta);
  //  printf("Best k = %lf , likelihood = %lf\n", ... , ... );

  SBMLDocument_free(d);
  return 0;
}
