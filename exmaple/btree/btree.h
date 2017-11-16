#ifndef BTREE_H_
#define BTREE_H_

#define M 4
#define M_2 (M % 2 ? (M + 1)/2 : M/2)
#define null 0

typedef struct BNode *BTree, *Position;
typedef int KeyType;
struct BNode {
  int keyNum;
  KeyType key[M+1];      //内部节点从1开始（0位置存储了第一个子树的最小值，）
  BTree children[M+1];   //存储孩子节点
};

extern BTree init();
extern BTree insert(BTree t, KeyType key);
extern BTree Remove(BTree t, KeyType key);
extern void Traversal(BTree t);

#endif
