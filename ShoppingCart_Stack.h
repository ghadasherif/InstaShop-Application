#ifndef SHOPPINGCART_STACK_H
#define SHOPPINGCART_STACK_H
#include <stack>
#include "product.h"

std::stack<Product> Cart_Items; //  stack used to push items and products to the shopping cart on the basis of last in first out, then its contents are later copied by Shopping Cart_Stack
#endif // SHOPPINGCART_STACK_H
