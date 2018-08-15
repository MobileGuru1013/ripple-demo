//
//  CCChangeScaleWithoutPositionChangeCenter.h
//  rippleDemo
//
//  Created by Alexandr Lesan on 02/12/18.
//  Copyright __MyCompanyName__ 2018. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CCActionInstant.h"
#import "cocos2d.h"

@interface CCChangeScaleWithoutPositionChangeCenter : CCActionInstant <NSCopying>
{
    CGPoint newScale;
}
+(id) actionWithScale: (CGPoint) scale;
-(id) initWithScale:(CGPoint) scale;
-(void) startWithTarget:(id)aTarget;
@end

