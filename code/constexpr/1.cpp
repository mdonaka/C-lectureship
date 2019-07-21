
double sqrt(double n) {
  double ok = 1e17;
  double ng = 0.0;
  while (ok - ng > 1e-10) {
    double mid = (ok + ng) / 2.0;
    bool isOk = (mid * mid > n);
    ((isOk) ? ok : ng) = mid;
  }
  return ok;
}

int main() {
  const auto p1 = sqrt(2);
  const auto p2 = sqrt(10);
  const auto p3 = sqrt(15);
  return 0;
}
