#include <drawlib.h>
#include <stdio.h>

int main(void)
{
    // --- 変数宣言 ---
    float wait_time = 0.01;

    // drawlibの待機時間
    // 制御関係の変数
    int start = 0;

    // 開始，終了画面のループ判定用
    int t, k, x, y;

    // dl_get_event用
    // ボールの変数
    int bx = 40;

    //操作するボール
    int by = 40;
    int br = 15;
    double bx2 = 40.0;

    //
    double by2 = 160.0;
    int br2 = 40;
    double bx3 = 1.0;
    double by3 = 360.0;
    int br3 = 40;
    double bx4 = 120.0;
    double by4 = 200.0;
    int br4 = 40;
    double bx5 = 200.0;
    double by5 = 440.0;
    int br5 = 40;
    double bx6 = 280.0;
    double by6 = 40.0;
    int br6 = 40;
    double bx7 = 520.0;
    double by7 = 440.0;
    int br7 = 40;
    double bx8 = 100.0;
    double by8 = 40.0;
    int br8 = 40;
    double bx9 = 200.0;
    double by9 = 40.0;
    int br9 = 40;
    double bx10 = 300.0;
    double by10 = 40.0;
    int br10 = 40;
    double bx11 = 400.0;
    double by11 = 40.0;
    int br11 = 40;
    double bx12 = 500.0;
    double by12 = 40.0;
    int br12 = 40;
    double bx13 = 600.0;
    double by13 = 40.0;
    int br13 = 40;
    double bx14 = 0.0;
    double by14 = 30.0;
    int br14 = 40;
    double bx15 = 80.0;
    double by15 = 800.0;
    int br15 = 40;
    double bx16 = 0.0;
    double by16 = 130.0;
    int br16 = 40;
    double bx17 = 80.0;
    double by17 = 180.0;
    int br17 = 40;
    double bx18 = 0.0;
    double by18 = 250.0;
    int br18 = 40;
    double bx19 = 80.0;
    double by19 = 300.0;
    int br19 = 40;
    double bx20 = 0.0;
    double by20 = 350.0;
    int br20 = 40;
    double bx21 = 80.0;
    double by21 = 400.0;
    int br21 = 40;
    double bx22 = 0.0;
    double by22 = 450.0;
    int br22 = 40;
    double bvy, bvx;
    bvy = 1.0;

    // ボールの速度(Y方向)
    bvx = 2.0;

    // ボールの速度(X方向)
    dl_initialize(2.0);

    // --- 開始画面の表示 ---
    dl_stop();
    dl_clear(DL_C("black"));
    dl_text("PUSH 'F' to start", 160, 220, 1.3, DL_C("white"), 3);
    dl_resume();

    // --- Fキーが押されるまで待機 ---
    start = 0;
    while (start == 0)
    {
        // --- 入力キーの処理 ---
        while (dl_get_event(&t, &k, &x, &y))
        {
            if (t == DL_EVENT_KEY)
            {
                if (k == 'f')
                {
                    start = 1;
                }
            }
        }
        dl_wait(wait_time);
    }
    while (1)
    {
        // --- 入力キーの処理 ---
        while (dl_get_event(&t, &k, &x, &y))
        {
            if (t == DL_EVENT_KEY)
            {
                // →キーが押されたらバーのX座標を右にずらす
                if (k == DL_KEY_RIGHT)
                {
                    bx += 80;
                }
            }

            // ←キーが押されたらバーのX座標を左にずらす
            if (k == DL_KEY_LEFT)
            {
                bx -= 80;
            }

            // ↑キーが押されたらバーのy座標を上にずらす
            if (k == DL_KEY_UP)
            {
                by -= 80;
            }

            // ↓キーが押されたらバーのy座標を下にずらす
            if (k == DL_KEY_DOWN)
            {
                by += 80;
            }
        }
        by2 += bvy;

        // Y座標にY方向の速度を加える
        bx3 += bvx;
        bx4 += bvx;
        by5 += -bvy;
        by6 += bvy;
        by7 += -bvy;
        by8 += bvy;
        by9 += bvy;
        by10 += bvy;
        by11 += bvy;
        by12 += bvy;
        by13 += bvy;
        bx14 += bvx;
        bx15 += bvx;
        bx16 += bvx;
        bx17 += bvx;
        bx18 += bvx;
        bx19 += bvx;
        bx20 += bvx;
        bx21 += bvx;
        bx22 += bvx;

        // --- ボールの環境処理(上)
        if (by2 < 0)
        {
            bvy *= -1.0;
        }
        if (by2 + br > DL_HEIGHT)
        {
            bvy *= -1.0;
        }

        // --- ボールの境界処理(右) ---
        if (bx3 + br > DL_WIDTH)
        {
            bvx *= -1.0;

            // 速度の正負を反転させる
            bx3 = DL_WIDTH - br;

            // 位置の微調整
            bx4 = DL_WIDTH - br;
        }

        //  ボールの境界処理(左)
        if (bx3 - br < 0)
        {
            bvx *= -1.0;
            bx3 = br;
            bx4 = br;
        }
        if (bx == 120 && by == 40)
            break;
        if (bx == 200 && by == 40)
            break;
        if (bx == 280 && by == 40)
            break;
        if (bx == 360 && by == 40)
            break;
        if (bx == 440 && by == 40)
            break;
        if (bx == 120 && by == 120)
            break;
        if (bx == 280 && by == 120)
            break;
        if (bx == 360 && by == 120)
            break;
        if (bx == 440 && by == 120)
            break;
        if (bx == 600 && by == 120)
            break;
        if (bx == 120 && by == 200)
            break;
        if (bx == 440 && by == 200)
            break;
        if (bx == 600 && by == 200)
            break;
        if (bx == 120 && by == 280)
            break;
        if (bx == 280 && by == 280)
            break;
        if (bx == 440 && by == 280)
            break;
        if (bx == 600 && by == 280)
            break;
        if (bx == 280 && by == 360)
            break;
        if (bx == 600 && by == 360)
            break;
        if (bx == 40 && by == 440)
            break;
        if (bx == 120 && by == 440)
            break;
        if (bx == 200 && by == 440)
            break;
        if (bx == 280 && by == 440)
            break;
        if (bx == 360 && by == 440)
            break;
        if (bx == 520 && by == 440)
            break;
        if (bx == 600 && by == 440)
            break;
        if (bx == 600 && by == 40)
            break;
        dl_stop();
        dl_clear(DL_C("black"));
        dl_rectangle(80, 0, 160, 80, DL_C("magenda"), 1, 1);
        dl_rectangle(160, 0, 240, 80, DL_C("magenda"), 1, 1);
        dl_rectangle(240, 0, 320, 80, DL_C("magenda"), 1, 1);
        dl_rectangle(320, 0, 400, 80, DL_C("magenda"), 1, 1);
        dl_rectangle(400, 0, 480, 80, DL_C("magenda"), 1, 1);
        dl_rectangle(480, 0, 560, 80, DL_C("yellow"), 1, 1);
        dl_rectangle(80, 80, 160, 160, DL_C("magenda"), 1, 1);
        dl_rectangle(240, 80, 320, 160, DL_C("magenda"), 1, 1);
        dl_rectangle(320, 80, 400, 160, DL_C("magenda"), 1, 1);
        dl_rectangle(400, 80, 480, 160, DL_C("magenda"), 1, 1);
        dl_rectangle(480, 80, 560, 160, DL_C("yellow"), 1, 1);
        dl_rectangle(560, 80, 640, 160, DL_C("magenda"), 1, 1);
        dl_rectangle(80, 160, 160, 240, DL_C("magenda"), 1, 1);
        dl_rectangle(320, 160, 400, 240, DL_C("yellow"), 1, 1);
        dl_rectangle(400, 160, 480, 240, DL_C("magenda"), 1, 1);
        dl_rectangle(480, 160, 560, 240, DL_C("yellow"), 1, 1);
        dl_rectangle(560, 160, 640, 240, DL_C("magenda"), 1, 1);
        dl_rectangle(80, 240, 160, 320, DL_C("magenda"), 1, 1);
        dl_rectangle(240, 240, 320, 320, DL_C("magenda"), 1, 1);
        dl_rectangle(320, 240, 400, 320, DL_C("yellow"), 1, 1);
        dl_rectangle(400, 240, 480, 320, DL_C("magenda"), 1, 1);
        dl_rectangle(480, 240, 560, 320, DL_C("yellow"), 1, 1);
        dl_rectangle(560, 240, 640, 320, DL_C("magenda"), 1, 1);
        dl_rectangle(240, 320, 320, 400, DL_C("magenda"), 1, 1);
        dl_rectangle(320, 320, 400, 400, DL_C("yellow"), 1, 1);
        dl_rectangle(400, 320, 480, 400, DL_C("yellow"), 1, 1);
        dl_rectangle(480, 320, 560, 400, DL_C("yellow"), 1, 1);
        dl_rectangle(560, 320, 640, 400, DL_C("magenda"), 1, 1);
        dl_rectangle(0, 400, 80, 480, DL_C("magenda"), 1, 1);
        dl_rectangle(80, 400, 160, 480, DL_C("magenda"), 1, 1);
        dl_rectangle(160, 400, 240, 480, DL_C("magenda"), 1, 1);
        dl_rectangle(240, 400, 320, 480, DL_C("magenda"), 1, 1);
        dl_rectangle(320, 400, 400, 480, DL_C("magenda"), 1, 1);
        dl_rectangle(400, 400, 480, 480, DL_C("yellow"), 1, 1);
        dl_rectangle(480, 400, 560, 480, DL_C("magenda"), 1, 1);
        dl_rectangle(560, 400, 640, 480, DL_C("magenda"), 1, 1);
        dl_rectangle(560, 0, 640, 80, DL_C("cyan"), 1, 1);
        dl_rectangle(580, 20, 620, 60, DL_C("yellow"), 1, 1);
        dl_line(80, 0, 80, 480, DL_C("black"), 3);
        dl_line(160, 0, 160, 480, DL_C("black"), 3);
        dl_line(240, 0, 240, 480, DL_C("black"), 3);
        dl_line(320, 0, 320, 480, DL_C("black"), 3);
        dl_line(400, 0, 400, 480, DL_C("black"), 3);
        dl_line(480, 0, 480, 480, DL_C("black"), 3);
        dl_line(560, 0, 560, 480, DL_C("black"), 3);
        dl_line(0, 80, 640, 80, DL_C("black"), 3);
        dl_line(0, 160, 640, 160, DL_C("black"), 3);
        dl_line(0, 240, 640, 240, DL_C("black"), 3);
        dl_line(0, 320, 640, 320, DL_C("black"), 3);
        dl_line(0, 400, 640, 400, DL_C("black"), 3);
        dl_line(0, 480, 640, 480, DL_C("black"), 3);
        dl_line(0, 560, 640, 560, DL_C("black"), 3);
        dl_line(0, 640, 640, 640, DL_C("black"), 3);
        dl_circle(bx, by, br, DL_C("white"), 1, 1);
        dl_circle(bx2, by2, br2, DL_C("red"), 1, 1);
        dl_circle(bx3, by3, br3, DL_C("red"), 1, 1);
        dl_circle(bx4, by4, br4, DL_C("red"), 1, 1);
        dl_circle(bx5, by5, br5, DL_C("red"), 1, 1);
        dl_circle(bx6, by6, br6, DL_C("red"), 1, 1);
        dl_circle(bx7, by7, br7, DL_C("red"), 1, 1);
        dl_circle(bx8, by8, br8, DL_C("red"), 1, 1);
        dl_circle(bx9, by9, br9, DL_C("red"), 1, 1);
        dl_circle(bx10, by10, br10, DL_C("red"), 1, 1);
        dl_circle(bx11, by11, br11, DL_C("red"), 1, 1);
        dl_circle(bx12, by12, br12, DL_C("red"), 1, 1);
        dl_circle(bx13, by13, br13, DL_C("red"), 1, 1);
        dl_circle(bx14, by14, br14, DL_C("red"), 1, 1);
        dl_circle(bx15, by15, br15, DL_C("red"), 1, 1);
        dl_circle(bx16, by16, br16, DL_C("red"), 1, 1);
        dl_circle(bx17, by17, br17, DL_C("red"), 1, 1);
        dl_circle(bx18, by18, br18, DL_C("red"), 1, 1);
        dl_circle(bx19, by19, br19, DL_C("red"), 1, 1);
        dl_circle(bx20, by20, br20, DL_C("red"), 1, 1);
        dl_circle(bx21, by21, br21, DL_C("red"), 1, 1);
        dl_circle(bx22, by22, br22, DL_C("red"), 1, 1);
        dl_resume();
        dl_wait(wait_time);
    }

    // --- 終了画面の表示 ---
    dl_stop();
    dl_clear(DL_C("black"));
    dl_text("DEATH", 160, 220, 4, DL_C("red"), 3);
    dl_text("push 'F' to quit", 160, 300, 1.3, DL_C("red"), 3);
    dl_resume();
    if (bx == 600 && by == 40)
    {
        dl_stop();
        dl_clear(DL_C("white"));
        dl_text("GAME CRAER", 160, 220, 1.3, DL_C("red"), 3);
        dl_text("push 'F' to quit", 160, 300, 1.3, DL_C("red"), 3);
        dl_resume();
    }

    // --- Fキーが押されるまで待機 ---
    start = 0;
    while (start == 0)
    {
        // --- 入力キーの処理 ---
        while (dl_get_event(&t, &k, &x, &y))
        {
            if (t == DL_EVENT_KEY)
            {
                if (k == 'f')
                {
                    start = 1;
                }
            }
        }
        dl_wait(wait_time);
    }
    return 0;
}
