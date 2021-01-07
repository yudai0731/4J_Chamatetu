#include <GL/glut.h>
#include <GL/glpng.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

int main(int argc, char **argv)
{
    srand((unsigned) time(NULL));
    glutInit(&argc, argv);
    glutInitWindowSize(InitWidth,InitHeight);
    glutCreateWindow("Chamatetu");
    glutInitDisplayMode(GLUT_RGBA | GLUT_ALPHA);
    glClearColor(1.0, 1.0, 1.0, 0.0);

    //  テクスチャのアルファチャネルを有効にする設定
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    
    readImg();
    InitPlayer();
    readStation();
    readProperty();
    turnstatus=0;
    //イベント登録
    glutReshapeFunc(Reshape);
    glutDisplayFunc(Display);
    glutKeyboardFunc(keyboard);
    glutTimerFunc(RESHAPETIME, Timer, 0);
    //  イベントループ突入
    glutMainLoop();

    return(0);
}