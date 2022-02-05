#include "tabulate_types.h"

template<>
std::string ptr_t<tabulate::Table>::name () {
  return "tabulate_table";
}

template<>
std::string ptr_t<tabulate::Column>::name () {
  return "tabulate_column";
}

template<>
std::string ptr_t<tabulate::ColumnFormat>::name () {
  return "tabulate_column_format";
}

row_t::operator SEXP () const {
  return Rcpp::wrap("lalala");
}

row_t::row_t (SEXP x) {
  auto vec = Rcpp::as<std::vector<std::string>>(x);
  for (auto& elem: vec) {
    row_.push_back(elem);
  }
}

font_align_t::font_align_t (SEXP x) {
  auto str = Rcpp::as<std::string>(x);
  if (str == "center") {
    font_align_ = tabulate::FontAlign::center;
  } else if (str == "left") {
    font_align_ = tabulate::FontAlign::left;
  } else if (str == "right") {
    font_align_ = tabulate::FontAlign::right;
  } else {
    Rcpp::stop("Unsupported font_align type: " + str);
  }
}

color_t::color_t (SEXP x) {
  auto str = Rcpp::as<std::string>(x);
  if (str == "yellow") {
    color_ = tabulate::Color::yellow;
  } else {
    Rcpp::stop("Unsupported color type: " + str);
  }
}
