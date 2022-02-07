
#' @export
print.tabulate_table <- function(x, ...) {
  cat(format(x, ...))
}

#' @export
format.tabulate_table <- function(x, ..., colors = TRUE) {
  if (!cli::num_ansi_colors() >= 8) {
    colors <- FALSE
  }

  tabulate_format(x, colors = colors)
}

#' @export
`[.tabulate_table` <- function(x, ...) {
  args <- rlang::dots_list(..., .ignore_empty = "none", .preserve_empty = TRUE)

  if (length(args) != 2) {
    rlang::abort(c("2 indices must be provided.",
                   "i" = sprintf("Got %d", length(args))))
  }

  for (arg in args) {
    is_missing_or_single_integer(arg)
  }

  if (rlang::is_missing(args[[1]]) && rlang::is_missing(args[[2]])) {
    return(x)
  }

  if (rlang::is_missing(args[[1]])) {
    return(table_column(x, args[[2]]))
  }

  row <- table_row(x, args[[1]])

  if (rlang::is_missing(args[[2]])) {
    return(row)
  }

  row_cell(row, args[[2]])
}

is_missing_or_single_integer <- function(x) {
  if (!(rlang::is_missing(x) || rlang::is_scalar_integerish(x))) {
    rlang::abort(c("Indices must be missing or integerish.",
                   "*" = sprintf("Got %s", class(x)[1])))
  }
}
