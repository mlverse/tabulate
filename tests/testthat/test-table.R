test_that("simple table", {
  table <- tabulate_table()
  table_add_row(table, c("hello", "world"))
  table_add_row(table, c("b", "a"))

  expect_snapshot(print(table))
})

test_that("can index tables", {

  table <- tabulate_table()
  table_add_row(table, c("hello", "world"))
  table_add_row(table, c("b", "a"))

  expect_s3_class(table[,], "tabulate_table")
  expect_s3_class(table[1,], "tabulate_row")
  expect_s3_class(table[,1], "tabulate_column")
  expect_s3_class(table[1,1], "tabulate_cell")
  expect_error(table[])
  expect_error(table[,,])
  expect_error(table[,,1])
})
