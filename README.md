# cpp-template

C++ template repository for a multi-layer project (meson, googletest, cpp-httplib)

- Uses `meson` as build system, and `gtest` for tests.
- The project is split into multiple layers
  - `app/` contains different applications (`console`, `web`, etc.)
  - `core/` contains a core library to be shared by all apps
    - `core/include/[project_name]` contains public headers for the library
  - `subprojects/` contains other `meson` projects

## Usage

1. Create a repo using this template repo.
2. Clone the newly created repository

    ```sh
    git clone [repo_url] [project_name]
    cd [project_name]
    ```

3. Use the provided script to fix names (replace `"TEMPLATE"` with `[project_name]` of your choice).
    ```sh
    sh template.sh [project_name]
    ```

4. Update the `README.md` file as appropriate.

5. Follow the TODO comments to implement your use case according to the project structure.

    ```sh
    git grep TODO
    ```

6. Build, run, test using `meson`.

    ```sh
    meson setup build         # generate ./build directory
    meson compile -C build    # compile sources into ./build
    meson test -C build       # run tests, (re)compiles as needed

    ./build/app/console       # launch console app
    ./build/app/web/server    # launch web server
    ./build/app/web/client    # launch web client
    ```
