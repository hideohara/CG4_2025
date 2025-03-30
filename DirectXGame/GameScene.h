#pragma once

#include "KamataEngine.h"
#include "Particle.h"


using namespace KamataEngine;

// ゲームシーン
class GameScene
{
public:
	// デストラクタ
	~GameScene();

	// 初期化
	void Initialize();

	// 更新
	void Update();

	// 描画
	void Draw();

private:
	// パーティクル3Dモデルデータ
	Model* modelParticle_ = nullptr;

	// カメラ
	Camera camera_;


	// パーティクル
	//Particle* particle_ = nullptr;
	std::list<Particle*> particles_;


	/// <summary>
	/// パーティクル発生
	/// </summary>
	/// <param name="position">位置</param>
	void ParticleBorn(Vector3 position);
};

