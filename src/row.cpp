#include "tabulate_types.h"

// [[Rcpp::export]]
cell_t row_cell (row_t row, index_t index) {
  return row->cell(index);
}

// [[Rcpp::export]]
format_t row_format (row_t row) {
  return row->format();
}
