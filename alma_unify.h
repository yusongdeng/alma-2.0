#ifndef alma_unify_h
#define alma_unify_h

#include "alma_formula.h"

typedef struct binding {
  alma_variable *var;
  alma_term *term;
} binding;

typedef struct binding_list {
  int num_bindings;
  binding *list;
} binding_list;

int unify(alma_term *x, alma_term *y, binding_list *theta);
int pred_unify(alma_function *x, alma_function *y, binding_list *theta);

void print_bindings(binding_list *theta);
void cleanup_bindings(binding_list *theta);

#endif
