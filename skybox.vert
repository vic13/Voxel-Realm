#version 330 core
layout(location=0) in vec3 position;

layout(location=2) in vec2 vertexUV;

out vec2 uv;

uniform mat4 mvp;

void main() {
    gl_Position = mvp * vec4(position, 1);
    uv = vec2(vertexUV.x, vertexUV.y);
}
