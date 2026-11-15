# gwent-sim

A fast, standalone simulator of Gwent, the card minigame in The Witcher 3
(base game, Hearts of Stone, Blood and Wine and the next-gen update), written
in C++20 with Python bindings.

Work in progress.

## Credit

The game rules and card data in this project are derived from
[Gwent Classic](https://github.com/asundr/gwent-classic) by Arun Sundaram,
at commit `08592d847f2573440a34deb9f32bc855b2544cdd`. Rules are translated
from its source; no code is copied. The card data in `data/cards.json` is
generated from its `cards.js`.

Gwent Classic is licensed under the MIT license with the Commons Clause
License Condition v1.0, which applies to the data derived from it here:

> The Software is provided to you by the Licensor under the License, as
> defined below, subject to the following condition.
>
> Without limiting other conditions in the License, the grant of rights under
> the License will not include, and the License does not grant to you, right
> to Sell the Software.
>
> For purposes of the foregoing, "Sell" means practicing any or all of the
> rights granted to you under the License to provide to third parties, for a
> fee or other consideration (including without limitation fees for hosting
> or consulting/ support services related to the Software), a product or
> service whose value derives, entirely or substantially, from the
> functionality of the Software. Any license notice or attribution required
> by the License must also include this Commons Cause License Condition
> notice.
>
> Software: Gwent Classic
> License: MIT
> Licensor: Arun Sundaram

This project is not sold.

Gwent, its cards and card names belong to CD PROJEKT RED. This project is
not affiliated with or endorsed by CD PROJEKT RED.

## Build and test

Requires GCC 13+ (or Clang 17+), CMake 3.24+, Ninja and
[uv](https://docs.astral.sh/uv/).

```
cmake --preset dev
cmake --build --preset dev
ctest --preset dev

uv sync
uv run pytest
```
