#define SEED 17
int MULT = 25173;
int INC = 13849;
int MOD = 65536;

static unsigned int seed = SEED;

// 정수 난수 생성 함수
unsigned random_i(void)
{
    seed = (MULT * seed + INC) % MOD;
    return seed;
}
// 실수 난수 생성 함수
double random_f(void)
{
    seed = (MULT * seed + INC) % MOD;
    return seed / (double)MOD;
}