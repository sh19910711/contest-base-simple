namespace solution {

  struct SolutionIO {

    Input in;
    Output out;

    template <class Stream> bool input( Stream& s ) {
      return false;
    }

    template <class Stream> bool output( Stream& s ) {
      return s;
    }

  };

}
