test_that("simple table", {
  table <- tabulate_table()
  table_add_row(table, c("hello", "world"))
  table_add_row(table, c("b", "a"))

  expect_snapshot(print(table))
})
