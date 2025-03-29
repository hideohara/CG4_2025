#include "Particle.h"
#include <cassert>

// 初期化
void Particle::Initialize(Model* model)
{
	// NULLポインタチェック
	assert(model);

	// 引数として受け取ったデータをメンバ変数に記録する
	model_ = model;

	// 色の設定
	objectColor_.Initialize();
	color_ = { 1, 1, 0, 1 };

	// ワールド変換の初期化
	worldTransform_.Initialize();
}

// 更新
void Particle::Update()
{
	// 色変更オブジェクトに色の数値を設定する
	objectColor_.SetColor(color_);

	// 行列を定数バッファに転送
	worldTransform_.TransferMatrix();
}

// 描画
void Particle::Draw(Camera& camera)
{
	// 3Dモデルを描画
	model_->Draw(worldTransform_, camera, &objectColor_);
}
