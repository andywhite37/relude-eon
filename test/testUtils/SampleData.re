open ReludeEon;

// -----------------------------------------------------------------------------
// LocalDate (Year-Month-Day) values
// -----------------------------------------------------------------------------

let ymd20180131 = LocalDate.makeClamped(2018, Jan, 31);
let ymd20180808 = LocalDate.makeClamped(2018, Aug, 8);
let ymd20181004 = LocalDate.makeClamped(2018, Oct, 4);
let ymd20181201 = LocalDate.makeClamped(2018, Dec, 1);
let ymd20181231 = LocalDate.makeClamped(2018, Dec, 31);
let ymd20190101 = LocalDate.makeClamped(2019, Jan, 1);
let ymd20190131 = LocalDate.makeClamped(2019, Jan, 31);
let ymd20190221 = LocalDate.makeClamped(2019, Feb, 21);
let ymd20190228 = LocalDate.makeClamped(2019, Feb, 28);
let ymd20190301 = LocalDate.makeClamped(2019, Mar, 1);
let ymd20200101 = LocalDate.makeClamped(2020, Jan, 1);
let ymd20200131 = LocalDate.makeClamped(2020, Jan, 31);
let ymd20200228 = LocalDate.makeClamped(2020, Feb, 28);
let ymd20200229 = LocalDate.makeClamped(2020, Feb, 29);
let ymd20200301 = LocalDate.makeClamped(2020, Mar, 1);
let ymd20200331 = LocalDate.makeClamped(2020, Mar, 31);

// -----------------------------------------------------------------------------
// LocalTime (Hour-Minute-Second-Milli) values
// -----------------------------------------------------------------------------

let timeMin = LocalTime.fromMillisecondsClamped(0);
let timeMax =
  LocalTime.makeClampedLabels(
    ~hour=23,
    ~minute=59,
    ~second=59,
    ~millisecond=999,
    (),
  );

let time1330 =
  LocalTime.makeWrappedLabels(
    ~hour=13,
    ~minute=30,
    ~second=0,
    ~millisecond=0,
    (),
  );

// -----------------------------------------------------------------------------
// LocalDateTime (Year-Month-Day-Hour-Minute-Second-Milli) values
// -----------------------------------------------------------------------------

let dt20180101midnight =
  LocalDateTime.makeWrappedLabels(
    ~year=2018,
    ~month=Jan,
    ~day=1,
    ~hour=0,
    ~minute=0,
    (),
  );

let dtMilliBefore2019 =
  LocalDateTime.fromDateAndTime(ymd20181231, timeMax);

let dt20190101midnight =
  LocalDateTime.fromDateAndTime(ymd20190101, LocalTime.midnight);

let dt20200101midnight =
  LocalDateTime.fromDateAndTime(ymd20200101, LocalTime.midnight);

let dt20200101noon =
  LocalDateTime.fromDateClamped(~hour=12, ymd20200101);
