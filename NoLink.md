Linking against a single backend is **not** supported in SANE Evolution.
The reason is that the dll code is used to give protection for the
new API and might be useful in the future.

I've never seen any frontend in the wild that actually did that,
but in the event that it exists, there's no real advantage.

And, no, I don't care about closed source fontends.

If someone is **actually** using that feature and cannot do otherwise,
please join the discussion group and tell us your reasons.

Saying "SANE 1.0 specs allowed that" will not be considered
valid, this is SANE Evolution, not SANE 1.0 . The SANE 1.0 standard
does not apply here.