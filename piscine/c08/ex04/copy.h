// .h ファイルは、構造体 s_stock_str と、そのエイリアスである t_stock_str を定義しています。
typedef struct s_stock_str
{
int size;
// size : 文字列の長さを表す整数。
char *str;
// str : 文字列のアドレスを表す char 型のポインタ。
char *copy;
// copy : 文字列のコピーのアドレスを表す char 型のポインタ。
} t_stock_str;
// s_stock_str偽名的な