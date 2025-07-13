# Base stage - prepares the files and folders
FROM gcc:11 AS base
# Change current dir
WORKDIR /app
# Copy sources (not the binary) for development
COPY . .
# Create build directory for manual compilation
RUN mkdir -p build


# Builder stage - just compiles the application
FROM base AS builder
# Build the app
RUN g++ ./src/main.cpp -o ./build/main.cgi && \
    chmod +x ./build/main.cgi


# Development stage - interactive environment
FROM base AS development
# Default command - start bash
CMD ["bash"]