**2009, Jan 15 update**

As of Jan 2009 no release happened. SANE Evolution works nicely, it has
a number of interesteing features but it's hard to maintain.

I tried to address too many problems of SANE all at once. Meanwhile, SANE
introduced some of the things we have been missing, even if they are not yet used
within SANE itself, like the types for infrared data.

There's too much work for a man alone.

So my plans are to start it again from scratch, keeping the distance
from SANE at a minimum by fixing SANE drivers within SANE itself, if possible.

It's not going to happen soon anyway, I've been quite busy lately.

Any help will be appreciated.


---


The code base has been imported from SANE and
some NewFeatures have been added. We are now testing them
and verifying compatibility, while evolving a little bit
more. saned and the net backend still need some changes to cope with the new features.
[APIOneOneZero](APIOneOneZero.md) is almost finalized.
The first release is expected for mid april.