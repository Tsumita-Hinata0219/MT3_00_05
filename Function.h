#pragma once

#include <Structh.h>
#include <assert.h>
#include <cmath>



static const int kRowHeight = 20;
static int kColumnWidth = 60;
void MatrixScreenPrintf(int x, int y, Matrix4x4 matrix, const char* string);


Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);

Matrix4x4 MakeScaleMatrix(const Vector3 scale);

Matrix4x4 MakeRotateXMatrix(float radian);

Matrix4x4 MakeRotateYMatrix(float radian);

Matrix4x4 MakeRotateZMatrix(float radian);

Matrix4x4 MakeTranslateMatrix(const Vector3 translate);

Matrix4x4 MakeAffineMatrix(const Vector3& scale, const Matrix4x4& rotate, const Vector3& translate);

