#!/bin/bash

set -eu
set -o pipefail

SDPATH="$(dirname "${BASH_SOURCE[0]}")"
if [[ ! -d "${SDPATH}" ]]; then SDPATH="${PWD}"; fi
SDPATH="$(cd "${SDPATH}" && pwd)"
readonly SDPATH

# shellcheck disable=1090
source "${SDPATH}/conf.sh"

cd "${PRJ_ROOT_PATH}" && echo + cd "${PWD}"

CMD=(rm -rfv "${BLD_PATH}")
echo + "${CMD[@]}" && "${CMD[@]}"

echo
CMD=(rm -fv CMakeUserPresets.json)
echo + "${CMD[@]}" && "${CMD[@]}"
