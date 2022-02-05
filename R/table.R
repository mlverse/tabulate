
#' @export
print.tabulate_table <- function(x, ...) {
  cat(format(x))
}

#' @export
format.tabulate_table <- function(x, ...) {
  tabulate_format(x, ...)
}
