# exp13: lean worker x diagnosis check (fresh Haiku, HARNESS2, pick.py picks dealt round-robin)

| arm | worker | check | tried | matches | match bytes | checks | turns | $ | $/match | bytes/$ |
|---|---|---|---|---|---|---|---|---|---|---|
| exp13_np | normal | plain | 60 | 11 | 1816 | 263 | 839 | 1.20 | 0.109 | 1509 |
| exp13_nd | normal | DIAG | 60 | 10 | 1372 | 255 | 865 | 1.29 | 0.129 | 1061 |
| exp13_lp | lean | plain | 60 | 13 | 1976 | 228 | 787 | 0.83 | 0.064 | 2376 |
| exp13_ld | lean | DIAG | 60 | 14 | 2396 | 244 | 817 | 0.89 | 0.064 | 2688 |
