/* Runner Class {{{ */
namespace solution {
  struct Runner {
    static int run() {
      int tests;
      std::cin >> tests;
      for ( int i = 0; i < tests; ++ i ) {
        Solution* sol = new Solution;
        sol->action(i);
        delete sol;
      };
      return 0;
    }
  };
}
/* }}} */

