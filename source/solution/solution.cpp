// @snip <./solution-io.cpp>
struct Solution: SolutionIO {
  //
  // Implement here
  //

  Solution() {}

  bool solve() {
    return true;
  }

  /* action methods {{{ */
  void before_action( const int& t_id ) {}

  void after_action( const int& t_id ) {}

  bool action( const int& t_id = -1 ) {
    before_action(t_id);
    bool res = input(std::cin) && solve() && output(std::cout);
    after_action(t_id);
    return res;
  }
  /* }}} */
};
