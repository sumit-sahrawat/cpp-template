#!/usr/bin/env sh

if [ "${1}" = "" ]; then
  echo "Usage: sh ${0} <projectname>"
  exit 1
else
  name="$(echo "${*}" | tr ' ' '_')"
  git grep -lz TEMPLATE '*meson.build' | xargs -0 sed -i "s/TEMPLATE/${name}/g"
fi
