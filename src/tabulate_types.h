#include <Rcpp.h>
#define TERMCOLOR_USE_ANSI_ESCAPE_SEQUENCES
#include "tabulate.h"

using column_format_ptr = Rcpp::XPtr<tabulate::ColumnFormat>;
using cell_ptr = Rcpp::XPtr<tabulate::Cell>;
using row_ptr = Rcpp::XPtr<tabulate::Row>;

template<typename T>
class ptr_t {
public:
  Rcpp::XPtr<T> x_;
  std::string name () {return "ptr_t"; };
  operator SEXP () const { return x_;};
  ptr_t (SEXP x) : x_{Rcpp::as<Rcpp::XPtr<T>>(x)} {
    auto cl = Rcpp::as<std::string>(x_.attr("class"));
    if (cl != name()) {
      Rcpp::stop("Expected a pointer with class '" + name() + "' but got '" + cl + "'");
    }
  };
  ptr_t (T x) : x_{new T(x)} {
    x_.attr("class") = name();
  };
  Rcpp::XPtr<T> operator->() {
    return x_;
  };
  T operator* () {
    return *x_;
  };
};

template<>
std::string ptr_t<tabulate::Table>::name ();

template<>
std::string ptr_t<tabulate::Column>::name ();

template<>
std::string ptr_t<tabulate::ColumnFormat>::name ();

using table_t = ptr_t<tabulate::Table>;
using column_t = ptr_t<tabulate::Column>;
using column_format_t = ptr_t<tabulate::ColumnFormat>;

class row_t {
public:
  tabulate::Table::Row_t row_;
  operator SEXP () const;
  row_t (SEXP x);
};

class font_align_t {
public:
  tabulate::FontAlign font_align_;
  font_align_t (SEXP x);
};

class color_t {
public:
  tabulate::Color color_;
  color_t (SEXP x);
};


