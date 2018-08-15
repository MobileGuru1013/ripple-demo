//
//  HelloWorldLayer.h
//  rippleDemo
//
//  Created by Alexandr Lesan on 02/12/18.
//  Copyright __MyCompanyName__ 2018. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
#import "pgeRippleSprite.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer {
    pgeRippleSprite* rippleImage;
    CCSprite * sprite;
    CCLabelTTF * FPSLabel;
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
