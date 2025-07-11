FROM alpine:latest

RUN apk update && apk add build-base

RUN mkdir /app
WORKDIR /app

COPY . .
RUN gcc hola_mundo.c -o hola_mundo
CMD [ "./hola_mundo" ]