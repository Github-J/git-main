//
//  HelloWorldLayer.h
//  自己紹介
//
//  Created by 伊東 純平 on 12/04/22.
//  Copyright 北海道情報大学 2012年. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// HelloWorldLayer
@interface AppMainLayer : CCLayer
{
    CCSprite * image1;
    CCSprite * image2;
    CCSprite * image3;
    CCSprite * image4;
    CCSprite * image5;
    CCSprite * image6;
    CCSprite * image7;
    CCSprite * image8;
    CCSprite * image9;
    CCSprite * image10;
    CCSprite * image11;
    CCSprite * image12;
    CCSprite * image13;
    CCSprite * teacher;     //ポンター
    CCSprite * midasi;      // 見出し背景画像
    CCSprite * slidemidasi; //見出し用のスライド
    CCSprite * startGamen;  //スタート画面
    CCSprite * tempchoose;  //テンプレート選択画面
    
    
    CCMenuItemImage *temp01demobutton; //テンプレートデモ１
    CCMenuItemImage *NewSlidebutton;
    CCMenuItemImage *OpenSlidebutton;
    CCMenuItemImage *Settingbutton;
    
    
    int change;
    id move;
    id move2;
    id moving;
    id back;
    id back2;
    id backing;
    id round;
    id unround;
   
    
    
    
    
    
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
