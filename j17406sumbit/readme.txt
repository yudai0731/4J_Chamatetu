4J プログラミング演習 ミニゲーム
408 17406 金澤雄大

説明
4J プログラミング演習の課題で作成したミニゲーム「ちゃま鉄」です.「桃太郎電鉄」を
イメージして作りました.実装した機能は次の通りです.「ちゃま鉄」は鉄道会社の運営を
イメージしたすごろくゲームです.本作は,長野県を舞台として作成しました.ゲームの進行や
ルール,仕様については,「description.html」をご覧ください.

実装した機能

日本語の画面表示
サイコロをふる機能
プレイヤーの移動処理(進む,戻るの処理,動的なマップ描画)
カードの実装(どんなカードを実装したかはプレイしてのお楽しみです)
プラス駅,マイナス駅,カード駅,物件駅の処理
目的地の処理
年月および季節処理
決算,最終成績の処理
借金時の自動返済処理

注意事項
本アプリケーションの実行環境はWindows10を想定しています.
本アプリケーションの実行はCygwinにおいてgcc,Make,OpenGLの実行環境が整っているものとします.
またCygwinのpathをWindows10に通していているものとします.

ビルド方法
Windows10におけるビルド方法は次の通りです.日本語に対応するために画像が大量に
あるため,解凍に時間がかかるかもしれません.
1. コマンドプロンプトを開きます.(ショットカット : winキー+rでcmdと入力)
2. j17406のディレクトリに移動します.
3. コマンドプロンプトに「make」と入力して実行します.これによってj17406.exeができます.

version情報
alpha : テストマップでプラス駅,マイナス駅,物件駅を作成したversion.
beta : alpha版のプログラムのアルゴリズム,処理を見直したversion.
ganma : 動的なマップ描画,決算,ゲームスタート画面を実装したversion.
delta : カード,アイコンを実装し,アルゴリズム,処理を見直した最終version.