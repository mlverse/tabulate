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

template<>
std::string ptr_t<tabulate::Row>::name () {
  return "tabulate_row";
}

template<>
std::string ptr_t<tabulate::Cell>::name () {
  return "tabulate_cell";
}

template<>
std::string ptr_t<tabulate::Format>::name () {
  return "tabulate_format";
}

table_row_t::table_row_t (SEXP x) {
  if (TYPEOF(x) == EXTPTRSXP) {
    row_.push_back(*Rcpp::as<table_t>(x));
  } else if (TYPEOF(x) == STRSXP) {
    auto vec = Rcpp::as<std::vector<std::string>>(x);
    for (auto& elem: vec) {
      row_.push_back(elem);
    }
  } else if (TYPEOF(x) == VECSXP) {
    auto obj = Rcpp::as<Rcpp::List>(x);
    for (auto& elem: obj) {
      if (TYPEOF(elem) == STRSXP) {
        row_.push_back(Rcpp::as<std::string>(elem));
      } else if (TYPEOF(elem) == EXTPTRSXP) {
        row_.push_back(*Rcpp::as<table_t>(elem));
      }
    }
  } else {
    Rcpp::stop("Unsupported types.");
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

font_align_t::operator tabulate::FontAlign() {
  return font_align_;
}

color_t::color_t (SEXP x) {
  auto str = Rcpp::as<std::string>(x);
  if (str == "yellow") {
    color_ = tabulate::Color::yellow;
  } else if (str == "grey") {
    color_ = tabulate::Color::grey;
  } else if (str == "red") {
    color_ = tabulate::Color::red;
  } else if (str == "green") {
    color_ = tabulate::Color::green;
  } else if (str == "blue") {
    color_ = tabulate::Color::blue;
  } else if (str == "magenta") {
    color_ = tabulate::Color::magenta;
  } else if (str == "cyan") {
    color_ = tabulate::Color::cyan;
  } else if (str == "white") {
    color_ = tabulate::Color::white;
  } else if (str == "none") {
    color_ = tabulate::Color::none;
  } else {
    Rcpp::stop("Unsupported color type: " + str);
  }
}

color_t::operator tabulate::Color() {
  return color_;
}

font_style_t::font_style_t (SEXP x) {
  auto str = Rcpp::as<std::string>(x);
  if (str == "bold") {
    font_style_ = tabulate::FontStyle::bold;
  } else if (str == "dark") {
    font_style_ = tabulate::FontStyle::dark;
  } else if (str == "italic") {
    font_style_ = tabulate::FontStyle::italic;
  } else if (str == "underline") {
    font_style_ = tabulate::FontStyle::underline;
  } else if (str == "blink") {
    font_style_ = tabulate::FontStyle::blink;
  } else if (str == "reverse") {
    font_style_ = tabulate::FontStyle::reverse;
  } else if (str == "concealed") {
    font_style_ = tabulate::FontStyle::concealed;
  } else if (str == "crossed") {
    font_style_ = tabulate::FontStyle::crossed;
  } else {
    Rcpp::stop("Unsupported font style type: " + str);
  }
}

font_style_t::operator tabulate::FontStyle () {
  return font_style_;
}

index_t::index_t (SEXP x) {
  auto v = Rcpp::as<size_t>(x);
  if (v <= 0) {
    Rcpp::stop("Index should be a value larger or equal to 1.");
  }
  index_ = v - 1;
}

index_t::operator size_t () {
  return index_;
}
