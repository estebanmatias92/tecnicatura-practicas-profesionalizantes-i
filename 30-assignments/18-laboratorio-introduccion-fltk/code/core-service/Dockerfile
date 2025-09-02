# Stage 1: Base image for building and development setup
FROM gcc:15-trixie AS base_env

ARG SRC_HOST_DIR=./src
ARG SRC_CONTAINER_DIR=/app/src
ARG BUILD_DIR=/app/build
#ARG EXECUTABLE_NAME=main

WORKDIR /app
RUN mkdir -p ${BUILD_DIR}

# Install FLTK and Wayland dependencies
RUN apt-get update && apt-get install -y libfltk1.4-dev libwayland-dev libxkbcommon-dev libcairo2-dev

COPY ${SRC_HOST_DIR}/ ${SRC_CONTAINER_DIR}/

# Stage 2: Builder - compiles the application
FROM base_env AS builder

ARG SRC_CONTAINER_DIR=/app/src
ARG INCLUDE_CONTAINER_DIR=/app/include
ARG BUILD_DIR=/app/build
ARG EXECUTABLE_NAME=main

# Copy the 'include' directory to the container
COPY include/ ${INCLUDE_CONTAINER_DIR}/

# Compile the application:
# The g++ command is placed on a single line to avoid shell execution issues.
RUN g++ -I${INCLUDE_CONTAINER_DIR} -I/usr/include/cairo -o ${BUILD_DIR}/${EXECUTABLE_NAME} \
    ${SRC_CONTAINER_DIR}/app/main.cpp \
    ${SRC_CONTAINER_DIR}/app/fltk_button/FltkButtonApp.cpp -lfltk

# Stage 3: Development - interactive environment with pre-built binaries
FROM base_env AS development

COPY --from=builder ${BUILD_DIR}/ ${BUILD_DIR}/

CMD ["bash"]

# Stage 4: Production/Runtime - smallest image for deployment
FROM gcc:15-trixie AS production

RUN apk add --no-cache libstdc++

WORKDIR /app

COPY --from=builder ${BUILD_DIR}/ ${BUILD_DIR}/

ENTRYPOINT ["/app/build/main"]
