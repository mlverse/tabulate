#include "tabulate_types.h"

template<>
std::string ptr_t<tabulate::Table>::name () {
  return "tabulate_table";
}

// table_t::operator SEXP () const {
//   return x_;
// }
//
// table_t::table_t (SEXP x) : x_{Rcpp::as<table_ptr>(x)} {
//   auto cl = Rcpp::as<std::string>(x_.attr("class"));
//   if (cl != "tabulate_table") {
//     Rcpp::stop("Wrong pointer type. Expected tabulate_table got " + cl);
//   }
// }
//
// table_t::table_t (tabulate::Table x) : x_{table_ptr(new tabulate::Table(x))} {
//   x_.attr("class") = "tabulate_table";
// }
//
// table_ptr table_t::operator->() {
//   return x_;
// }
//
// tabulate::Table table_t::operator*() {
//   return *x_;
// }

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
