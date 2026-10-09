#!/bin/bash
cd $HH; Q=queue/${1:-batch5r}; L=$Q/usage.log; CAP=${2:-81}
weekly() { $(command -v ~/bin/usage-gate || echo true) --brief 2>&1 | sed -n 's/.*weekly \([0-9]*\)%.*/\1/p'; }
echo "$(date -Is) cap raised to ${CAP}% (guard replaced)" >> $L
while [ ! -f $Q/DONE ]; do w=$(weekly); echo "$(date -Is) usage  $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> $L
  [ -n "$w" ] && [ "$w" -ge "$CAP" ] && { touch $Q/STOP; echo "$(date -Is) STOP weekly ${w}% >= cap ${CAP}%" >> $L; }
  sleep 120; done
