#include "tabulate.h"
#include <Rcpp.h>

using cell_ptr = Rcpp::XPtr<tabulate::Cell>;
using row_ptr = Rcpp::XPtr<tabulate::Row>;

template<typename T>
class ptr_t {
public:
  Rcpp::XPtr<T> x_;
  std::string name () {return "ptr_t"; };
  operator SEXP () const { return x_;};
  ptr_t (SEXP x) : x_{Rcpp::as<Rcpp::XPtr<T>>(x)} {
    if (!x_.inherits(name().c_str())) {
      Rcpp::stop("Expected a pointer with class '" + name());
    }
  };
  ptr_t (T& x) : x_{&x, false} {
    x_.attr("class") = name();
  };
  explicit ptr_t (T x) : x_{new T(x)} {
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

template<>
std::string ptr_t<tabulate::Row>::name ();

template<>
std::string ptr_t<tabulate::Cell>::name ();

template<>
std::string ptr_t<tabulate::Format>::name ();

using table_t = ptr_t<tabulate::Table>;
using column_t = ptr_t<tabulate::Column>;
using column_format_t = ptr_t<tabulate::ColumnFormat>;
using row_t = ptr_t<tabulate::Row>;
using cell_t = ptr_t<tabulate::Cell>;
using format_t = ptr_t<tabulate::Format>;

class table_row_t {
public:
  tabulate::Table::Row_t row_;
  table_row_t (SEXP x);
};

class font_align_t {
public:
  tabulate::FontAlign font_align_;
  font_align_t (SEXP x);
  operator tabulate::FontAlign ();
};

class color_t {
public:
  tabulate::Color color_;
  color_t (SEXP x);
  operator tabulate::Color ();
};

class font_style_t {
public:
  tabulate::FontStyle font_style_;
  font_style_t (SEXP x);
  operator tabulate::FontStyle ();
};

template<typename T, typename W>
class vector_t {
public:
  std::vector<T> buf_;
  vector_t (SEXP x) {
    auto vec = Rcpp::as<std::vector<std::string>>(x);
    for (auto& elem: vec) {
      buf_.push_back(W(Rcpp::wrap(elem)));
    }
  }
  operator std::vector<T> () {
    return buf_;
  }
};

using font_style_v = vector_t<tabulate::FontStyle, font_style_t>;

class index_t {
public:
  size_t index_;
  index_t (SEXP x);
  operator size_t ();
};
