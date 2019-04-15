//
//  SRSheetSlideViewControllerAnimationTransition.h
//
//  Created by sino on 2019/4/3.
//  Copyright © 2019 sino. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SRSheetSlideDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface SRSheetSlideViewControllerAnimationTransition : NSObject <UIViewControllerAnimatedTransitioning>

/**
 活动类型
 */
@property (nonatomic,assign) SRSheetSlideViewControllerActionType actionType;

/**
 卡片位置
 */
@property (nonatomic,assign) SRSheetSlideViewControllerSheetPosition sheetPosition;

@end

NS_ASSUME_NONNULL_END
