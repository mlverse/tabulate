#include "tabulate_types.h"

// [[Rcpp::export]]
cell_t row_cell (row_t row, size_t index) {
  return tabulate::Cell(row->cell(index));
}
